#include "mainwindow.h"
#include <map>
using namespace std;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clear_files();
    creating_json();
    thread = new QThread();
    worker = new Worker();
    worker->moveToThread(thread);
    timer = new QTimer();
    del_temp = new DeleteTemplate();
    save_temp = new SaveTemplate();
    connect(timer, SIGNAL(timeout()), this, SLOT(check_status()));
    timer->start(1000); // И запустим таймер
    update_template_names("simple");
    update_template_names("imp");
    connect(worker, SIGNAL(valueChanged(QString)), ui->textEdit_console, SLOT(setText(QString)));
    connect(worker, SIGNAL(valueChanged(QString)), this, SLOT(scroll_console_bottom()));
    connect(worker, SIGNAL(data_update(std::string)), this, SLOT(update_lcd_telemetry(std::string)));
    connect(worker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);
    connect(save_temp, SIGNAL(save_simple_confirm(std::string)), this, SLOT(save_simple_template(std::string)));
    connect(save_temp, SIGNAL(save_imp_confirm(std::string)), this, SLOT(save_imp_template(std::string)));
    connect(del_temp, SIGNAL(template_deleted(std::string)), this, SLOT(update_template_names(std::string)));
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

void MainWindow::save_simple_template(string name)
{

    if (name != "") {
        ifstream fread(commands_path + "\\simple_templates.json");
        nlohmann::json data = nlohmann::json::parse(fread);
        data.push_back({ name, {
        {"drop_volume", ui->lineEdit_drop_volume->text().toStdString()},
        {"retraction_speed", ui->lineEdit_retraction_speed->text().toStdString()},
        {"extrusion_speed", ui->lineEdit_extrusion_speed->text().toStdString()},
        {"coeff_retract", ui->lineEdit_coeff_retract->text().toStdString()},
        {"working_volume", ui->lineEdit_working_volume->text().toStdString()},
        {"dosing_coeff", ui->lineEdit_dosing_coeff->text().toStdString()},
        {"desktop_temperature", ui->lineEdit_desktop_temperature->text().toStdString()},
        {"extruder_temperature", ui->lineEdit_extruder_temperature->text().toStdString()},
        {"working_axis_simp", ui->comboBox_working_axis_simp->currentText().toStdString()}
      } });
        fread.close();
        ofstream fwrite(commands_path + "\\simple_templates.json");
        fwrite << data;
        fwrite.close();

        update_template_names("simple");
    }   
}

void MainWindow::update_lcd_telemetry(string coord) 
{
    current_axis_coord = std::stof(coord); //to float
    ui->lcdNumber_main_axes->display(current_axis_coord);
    ui->lcdNumber_2->display(current_extruder_temp);
    ui->lcdNumber_3->display(current_bed_temp);

};

void MainWindow::update_template_names(std::string kind)
{
    if (kind == "simple") {
        QStringList list;
        ifstream fread(commands_path + "\\simple_templates.json");
        nlohmann::json data = nlohmann::json::parse(fread);

        for (auto it = std::begin(data); it != std::end(data); ++it) {
            list.append(QString::fromStdString(it.key()));
        }
        ui->list_tools_simple_templates->clear();
        ui->list_tools_simple_templates->addItems(list);
        fread.close();
    }

    if (kind == "imp") {
        QStringList list;
        ifstream fread(commands_path + "\\imp_templates.json");
        nlohmann::json data = nlohmann::json::parse(fread);

        for (auto it = std::begin(data); it != std::end(data); ++it) {
            list.append(QString::fromStdString(it.key()));
        }
        ui->list_tools_imp_templates->clear();
        ui->list_tools_imp_templates->addItems(list);
        fread.close();
    }
}

void MainWindow::save_imp_template(std::string name)
{
    if (name != "") {
        ifstream fread(commands_path + "\\imp_templates.json");
        nlohmann::json data = nlohmann::json::parse(fread);
        data.push_back({ name, {
        {"drop_volume", ui->lineEdit_drop_volume_imp->text().toStdString()},
        {"retraction_speed", ui->lineEdit_retraction_speed_imp->text().toStdString()},
        {"extrusion_speed", ui->lineEdit_extrusion_speed_imp->text().toStdString()},
        {"coeff_retract", ui->lineEdit_coeff_retract_imp->text().toStdString()},
        {"working_volume", ui->lineEdit_working_volume_imp->text().toStdString()},
        {"dosing_coeff", ui->lineEdit_dosing_coeff_imp->text().toStdString()},
        {"desktop_temperature", ui->lineEdit_desktop_temperature_imp->text().toStdString()},
        {"extruder_temperature", ui->lineEdit_extruder_temperature_imp->text().toStdString()},
        {"pause", ui->lineEdit_pause_imp->text().toStdString()},
        {"working_axis_imp", ui->comboBox_working_axis_imp->currentText().toStdString()},
        {"kind_of_pause", ui->comboBox_imp_pause->currentText().toStdString()}
      } });
        fread.close();
        ofstream fwrite(commands_path + "\\imp_templates.json");
        fwrite << data;
        fwrite.close();

        update_template_names("imp");

    }
}

void MainWindow::scroll_console_bottom()
{
    ui->textEdit_console->moveCursor(QTextCursor::End);
}

void MainWindow::creating_json()
{

    if (!std::filesystem::exists(commands_path + "\\simple_templates.json")) {
        std::ofstream fwrite(commands_path + "\\simple_templates.json");
        string sample = "{}";
        fwrite << sample;
        fwrite.close();
    }

    if (!std::filesystem::exists(commands_path + "\\imp_templates.json")) {
        std::ofstream fwrite_imp(commands_path + "\\imp_templates.json");
        string sample_imp = "{}";
        fwrite_imp << sample_imp;
        fwrite_imp.close();
    }
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

void MainWindow::clear_files()
{
    if (!std::filesystem::exists(commands_path)) {
        std::filesystem::create_directory(commands_path);
        std::ofstream file;
        file.open(commands_path + "\\scenario.txt");
        file << "";
        file.close();
    }
}

void MainWindow::on_pushButton_port_connection_clicked()
{
        // To avoid having two threads running simultaneously, the previous thread is aborted.
    if (thread->isRunning()) {
        worker->abort();
    }
    //thread->wait(); // If the thread is not running, this will immediately return.
    else {
        worker->requestWork();
    }
}

void MainWindow::on_action_triggered() 
{
    settings.show();
}

void MainWindow::on_action_2_triggered() 
{
    close();
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
    string gcode_head = "G92 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(start_coord).erase(to_string(start_coord).size() - 3);
    string gcode_str = "";
    if (ui->lineEdit_desktop_temperature->text() != "") {
        gcode_str += ("\nM190 S" + bed_temp);
    }
    if (ui->lineEdit_extruder_temperature->text() != "") {
        gcode_str += ("\nM109 S" + extruder_temp);
    }
    while (work_coord > 0) {
        work_coord = work_coord - drop_offset;
        gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(work_coord).erase(to_string(work_coord).size() - 3) + " F" + to_string(drop_speed); // ������� ��������
        if (retract) {
            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(work_coord + drop_offset * k_retr).erase(to_string(work_coord + drop_offset * k_retr).size() - 3) + " F" + to_string(retr_speed);  // �������
            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_simp->currentText().toStdString() + to_string(work_coord).erase(to_string(work_coord).size() - 3) + " F" + to_string(retr_speed);  // ����������� ��������
        }
    }
    std::ofstream file;
    file.open(commands_path + "\\scenario.txt", std::ios::app);
    file << gcode_head + gcode_str + "\n";
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
    //float pause_speed = drop_offset / drop_pause * 60;
    string gcode_head = "G92 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(start_coord).erase(to_string(start_coord).size() - 3);
    string gcode_str = "";
    if (ui->lineEdit_desktop_temperature_imp->text() != "") {
        gcode_str += ("\nM190 S" + bed_temp);
    }
    if (ui->lineEdit_extruder_temperature_imp->text() != "") {
        gcode_str += ("\nM109 S" + extruder_temp);
    }

    if (mode == mode_inter_cycle) {
        pause_inter_cycle = true;
    }
    while (work_coord > 0) {    
        work_coord = work_coord - drop_offset;
        gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(work_coord).erase(to_string(work_coord).size() - 3) + " F" + to_string(drop_speed); // ������� ��������
        if (pause_inter_cycle) {
            gcode_str = gcode_str + '\n' + "G4 S" + ui->lineEdit_pause_imp->text().toStdString();
            //gcode_str = gcode_str + '\n' + "G1 X" + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(pause_speed);  // �����
        };
        if (retract) {
            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(work_coord + drop_offset * k_retr).erase(to_string(work_coord + drop_offset * k_retr).size() - 3) + " F" + to_string(retr_speed);  // �������

            gcode_str = gcode_str + '\n' + "G4 S" + ui->lineEdit_pause_imp->text().toStdString();
            //gcode_str = gcode_str + '\n' + "G1 X" + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(pause_speed);  // �����

            gcode_str = gcode_str + '\n' + "G1 " + ui->comboBox_working_axis_imp->currentText().toStdString() + to_string(work_coord).erase(to_string(work_coord).size() - 3) + " F" + to_string(retr_speed);  // ����������� ��������
        }
    }

    std::ofstream file;
    file.open(commands_path + "\\scenario.txt", std::ios::app);
    file << gcode_head + gcode_str + "\n";
    file.close();
}

void MainWindow::on_pushButton_delete_imp_doz_clicked()
{
    del_temp->change_template_name("imp", ui->list_tools_imp_templates->currentText().toStdString());
    del_temp->show();
}

void MainWindow::on_pushButton_delete_simple_doz_clicked()
{
    del_temp->change_template_name("simp", ui->list_tools_simple_templates->currentText().toStdString());
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
        f << s1 + "\n";
        f.close();
    }
}

void MainWindow::on_comboBox_main_axes_currentTextChanged(const QString& arg1)
{
    if (ui->comboBox_main_axes->currentText() == "X") {
        ui->label_main_axes->setText("X");
        ui->pushButton_main_axes_up->setText("X🡅");
        ui->pushButton_main_axes_down->setText("X🡇");
    }
    else if (ui->comboBox_main_axes->currentText() == "Y") {
        ui->label_main_axes->setText("Y");
        ui->pushButton_main_axes_up->setText("Y🡅");
        ui->pushButton_main_axes_down->setText("Y🡇");
    }
    else if (ui->comboBox_main_axes->currentText() == "Z") {
        ui->label_main_axes->setText("Z");
        ui->pushButton_main_axes_up->setText("Z🡅");
        ui->pushButton_main_axes_down->setText("Z🡇");
    }
    else if (ui->comboBox_main_axes->currentText() == "E") {
        ui->label_main_axes->setText("E");
        ui->pushButton_main_axes_up->setText("E🡅");
        ui->pushButton_main_axes_down->setText("E🡇");
    }
}

void MainWindow::on_list_tools_simple_templates_textActivated(const QString& arg1)
{
    ifstream fread(commands_path + "\\simple_templates.json");
    nlohmann::json data = nlohmann::json::parse(fread);

    ui->lineEdit_drop_volume->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["drop_volume"]));
    ui->lineEdit_retraction_speed->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["retraction_speed"]));
    ui->lineEdit_extrusion_speed->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["extrusion_speed"]));
    ui->lineEdit_coeff_retract->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["coeff_retract"]));
    ui->lineEdit_working_volume->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["working_volume"]));
    ui->lineEdit_dosing_coeff->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["dosing_coeff"]));
    ui->lineEdit_desktop_temperature->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["desktop_temperature"]));
    ui->lineEdit_extruder_temperature->setText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["extruder_temperature"]));
    ui->comboBox_working_axis_simp->setCurrentText(QString::fromStdString(data[ui->list_tools_simple_templates->currentText().toStdString()]["drop_volume"]));
    
    fread.close();
}

void MainWindow::on_list_tools_imp_templates_textActivated(const QString& arg1)
{

    ifstream fread(commands_path + "\\imp_templates.json");
    nlohmann::json data = nlohmann::json::parse(fread);

    ui->lineEdit_drop_volume_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["drop_volume"]));
    ui->lineEdit_retraction_speed_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["retraction_speed"]));
    ui->lineEdit_extrusion_speed_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["extrusion_speed"]));
    ui->lineEdit_coeff_retract_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["coeff_retract"]));
    ui->lineEdit_working_volume_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["working_volume"]));
    ui->lineEdit_dosing_coeff_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["dosing_coeff"]));
    ui->lineEdit_desktop_temperature_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["desktop_temperature"]));
    ui->lineEdit_extruder_temperature_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["extruder_temperature"]));
    ui->lineEdit_pause_imp->setText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["pause"]));
    ui->comboBox_working_axis_imp->setCurrentText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["working_axis_imp"]));
    ui->comboBox_imp_pause->setCurrentText(QString::fromStdString(data[ui->list_tools_imp_templates->currentText().toStdString()]["kind_of_pause"]));

    fread.close();
}

void MainWindow::on_pushButton_extruder_temp_up_clicked()
{
    ofstream fwrite(commands_path + "\\scenario.txt", ios::app);
    fwrite << "M104 S" << current_extruder_temp + ui->spinBox_shift->text().toInt() << "\n";
    current_extruder_temp += ui->spinBox_shift->text().toInt();
    fwrite.close();
}


void MainWindow::on_pushButton_extruder_temp_down_clicked()
{
    ofstream fwrite(commands_path + "\\scenario.txt", ios::app);
    fwrite << "M104 S" << current_extruder_temp - ui->spinBox_shift->text().toInt() << "\n";
    current_extruder_temp -= ui->spinBox_shift->text().toInt();
    fwrite.close();
}


void MainWindow::on_pushButton_bed_temp_up_clicked()
{
    ofstream fwrite(commands_path + "\\scenario.txt", ios::app);
    fwrite << "M140 S" << current_bed_temp + ui->spinBox_shift->text().toInt() << "\n";
    current_bed_temp += ui->spinBox_shift->text().toInt();
    fwrite.close();
}


void MainWindow::on_pushButton_bed_temp_down_clicked()
{
    ofstream fwrite(commands_path + "\\scenario.txt", ios::app);
    fwrite << "M140 S" << current_bed_temp - ui->spinBox_shift->text().toInt() << "\n";
    current_bed_temp -= ui->spinBox_shift->text().toInt();
    fwrite.close();
}


void MainWindow::on_pushButton_main_axes_up_clicked()
{
    ofstream fwrite(commands_path + "\\scenario.txt", ios::app);
    fwrite << "G1 " + ui->comboBox_main_axes->currentText().toStdString() << current_axis_coord + ui->spinBox_shift->text().toInt() << " F" + ui->spinBox_speed->text().toStdString() + "\n";
    current_axis_coord += ui->spinBox_shift->text().toInt();
    fwrite.close();
}


void MainWindow::on_pushButton_main_axes_down_clicked()
{
    ofstream fwrite(commands_path + "\\scenario.txt", ios::app);
    fwrite << "G1 " + ui->comboBox_main_axes->currentText().toStdString() << current_axis_coord - ui->spinBox_shift->text().toInt() << " F" + ui->spinBox_speed->text().toStdString() + "\n";
    current_axis_coord -= ui->spinBox_shift->text().toInt();
    fwrite.close();
}

void proverka2() {
    ;
}

