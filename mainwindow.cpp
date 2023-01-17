#include "mainwindow.h"
using namespace std;


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clear_files();
    thread = new QThread();
    worker = new Worker();
    worker->moveToThread(thread);
    timer = new QTimer();
    del_temp = new DeleteTemplate(this);
    save_temp = new SaveTemplate(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(check_status()));
    timer->start(1000); // И запустим таймер
    connect(worker, SIGNAL(valueChanged(QString)), ui->textEdit_console, SLOT(setText(QString)));
    connect(worker, SIGNAL(valueChanged(QString)), this, SLOT(scroll_console_bottom()));
    connect(worker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);


}

void MainWindow::scroll_console_bottom()
{
    ui->textEdit_console->moveCursor(QTextCursor::End);
}

void MainWindow::check_status() 
{
    if (thread->isRunning()) {
        ui->pushButton_port_connection->setText("\xd0\x9e\xd1\x82\xd1\x81\xd0\xbe\xd0\xb5\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c");
        ui->label_connection_status->setText("\xd0\x9f\xd0\xbe\xd0\xb4\xd0\xba\xd0\xbb\xd1\x8e\xd1\x87\xd0\xb5\xd0\xbd\xd0\xbe");
    }
    else {
        ui->pushButton_port_connection->setText("\xd0\x9f\xd0\xbe\xd0\xb4\xd1\x81\xd0\xbe\xd0\xb5\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c");
        ui->label_connection_status->setText("\xd0\x9e\xd1\x82\xd0\xba\xd0\xbb\xd1\x8e\xd1\x87\xd0\xb5\xd0\xbd\xd0\xbe");
    }

}

MainWindow::~MainWindow()
{
    worker->abort();
    qDebug() << "Deleting thread and worker in Thread " << this->QObject::thread()->currentThreadId();
    delete thread;
    delete worker;
    delete ui;
    delete del_temp;
    delete save_temp;
}

void MainWindow::clear_files()
{
    std::filesystem::create_directory(commands_path);
    std::ofstream file;
    file.open(commands_path+"\\scenario.txt");
    file << "";
    file.close();
}

void MainWindow::on_pushButton_port_connection_clicked()
{
        // To avoid having two threads running simultaneously, the previous thread is aborted.
    if (thread->isRunning()) {
        worker->abort();
        qDebug() << "OFF";
    }
    //thread->wait(); // If the thread is not running, this will immediately return.
    else {
        worker->requestWork();
        qDebug() << "ON";
    }
}

void MainWindow::on_action_triggered() 
{
    settings.show();
}

void MainWindow::on_pushButton_generate_simple_doz_clicked() 
{   

    int vdrop = ui->lineEdit_drop_volume->text().toInt(); // ����������, ����� �����
    float k5ml = ui->lineEdit_dosing_coeff->text().toFloat(); // mm / ml ����� ��������� ��� ������
    int drop_speed = ui->lineEdit_extrusion_speed->text().toInt(); // mm / min
    int retr_speed = ui->lineEdit_retraction_speed->text().toInt(); // mm / min
    float proc_volume = ui->lineEdit_working_volume->text().toFloat(); // ml ??????????????/
    float k_retr = ui->lineEdit_dosing_coeff->text().toFloat(); //??????????????
    bool retract = true;
    float start_coord = proc_volume * k5ml;
    float work_coord = start_coord;
    float drop_offset = vdrop * k5ml / 1000 / 1000; //point shift
    string extruder_temp = ui->lineEdit_extruder_temperature->text().toStdString();
    string bed_temp = ui->lineEdit_desktop_temperature->text().toStdString();
    // ��� �������� ����� : ��� ������� ������� ����� -- ���, ������� ������ ����� ����������������� �������� �� ������ ���.
    // ����� ��� ���� ������ �� ��������� ��������� � ����� ��������� ������ ������ ��� ��������
    string gcode_head = "G92 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(start_coord);
    //string gcode_str = ("\nM190 S" + bed_temp) + ("\nM109 S" + extruder_temp);
    string gcode_str = "";
    while (work_coord > 0) {
        work_coord = work_coord - drop_offset;
        gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(drop_speed); // ������� ��������
        if (retract) {
            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(round((work_coord + drop_offset * k_retr) * 1000) / 1000) + " F" + to_string(retr_speed);  // �������
            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(round(work_coord * 1000) / 1000) + "F" + to_string(retr_speed);  // ����������� ��������
        }
    }

    std::ofstream file;
    file.open(commands_path + "\\scenario.txt");
    file << gcode_head + gcode_str + "\n" + "      ";
    file.close();
}

void MainWindow::on_pushButton_generate_imp_doz_clicked() 
{
    int vdrop = ui->lineEdit_drop_volume_imp->text().toInt(); // ����������, ����� �����
    float k5ml = ui->lineEdit_dosing_coeff_imp->text().toFloat(); // mm / ml ����� ��������� ��� ������
    int drop_speed = ui->lineEdit_extrusion_speed_imp->text().toInt(); // mm / min
    int retr_speed = ui->lineEdit_retraction_speed_imp->text().toInt(); // mm / min
    float proc_volume = ui->lineEdit_working_volume_imp->text().toFloat(); // ml ??????????????/
    float k_retr = ui->lineEdit_coeff_retract_imp->text().toFloat(); //??????????????
    float drop_pause = ui->lineEdit_pause_imp->text().toFloat(); //sec
    bool pause_inter_cycle = false;
    bool retract = true;
    float start_coord = proc_volume * k5ml;
    float work_coord = start_coord;
    float drop_offset = vdrop * k5ml / 1000 / 1000; //p
    string mode = ui->comboBox_imp_pause->currentText().toStdString();
    string mode_cycle_pause = "\320\246\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260";
    string mode_inter_cycle = "\320\234\320\265\320\266\321\206\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260";
    string extruder_temp = ui->lineEdit_extruder_temperature_imp->text().toStdString();
    string bed_temp = ui->lineEdit_desktop_temperature_imp->text().toStdString();
    // ��� �������� ����� : ��� ������� ������� ����� -- ���, ������� ������ ����� ����������������� �������� �� ������ ���.
    // ����� ��� ���� ������ �� ��������� ��������� � ����� ��������� ������ ������ ��� ��������
    float pause_speed = drop_offset / drop_pause * 60;
    string gcode_head = "G92 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(start_coord);
    string gcode_str = "";
    //string gcode_str = ("\nM190 S" + bed_temp) + ("\nM109 S" + extruder_temp);
    if (mode == mode_inter_cycle) {
        pause_inter_cycle = true;
    }
    while (work_coord > 0) {    
        work_coord = work_coord - drop_offset;
        gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(drop_speed); // ������� ��������
        if (pause_inter_cycle) {
            gcode_str = gcode_str + '\n' + "G4 S" + ui->lineEdit_pause_imp->text().toStdString();
            //gcode_str = gcode_str + '\n' + "G1 X" + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(pause_speed);  // �����
        };
        if (retract) {
            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(round((work_coord + drop_offset * k_retr) * 1000) / 1000) + " F" + to_string(retr_speed);  // �������

            gcode_str = gcode_str + '\n' + "G4 S" + ui->lineEdit_pause_imp->text().toStdString();
            //gcode_str = gcode_str + '\n' + "G1 X" + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(pause_speed);  // �����

            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(retr_speed);  // ����������� ��������
        }
    }

    std::ofstream file;
    file.open(commands_path + "\\scenario.txt");
    file << gcode_head + gcode_str + "\n" + "      ";
    file.close();
}


void MainWindow::on_pushButton_delete_imp_doz_clicked()
{
    del_temp->change_template_name("imp");
    del_temp->show();

}

void MainWindow::on_pushButton_delete_simple_doz_clicked()
{
    del_temp->change_template_name("simp");
    del_temp->show();
}

void MainWindow::on_pushButton_save_simple_doz_clicked()
{
    save_temp->change_template_name("simp");
    save_temp->show();
}

void MainWindow::on_pushButton_save_imp_doz_clicked()
{
    save_temp->change_template_name("imp");
    save_temp->show();
}

void MainWindow::on_pushButton_send_gcode_clicked()
{
    if (ui->lineEdit_send_gcode->text() != ""){
        string s1 = ui->lineEdit_send_gcode->text().toStdString();
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        std::ofstream f(commands_path + "\\scenario.txt", std::ios::app);
        f << "\n" + s1 + "\n" + "      ";
        f.close();

    }
}

void MainWindow::on_pushButton_21_clicked()
{

}


void MainWindow::on_pushButton_20_clicked()
{

}

