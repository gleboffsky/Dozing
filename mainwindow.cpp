#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    thread = new QThread();
    worker = new Worker();
    worker->moveToThread(thread);
    connect(worker, SIGNAL(valueChanged(QString)), ui->textBrowser, SLOT(setText(QString)));
    connect(worker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);

}

MainWindow::~MainWindow()
{
    worker->abort();
    qDebug() << "Deleting thread and worker in Thread " << this->QObject::thread()->currentThreadId();
    delete thread;
    delete worker;
    delete ui;
}

void MainWindow::on_pushButton_port_connection_clicked()
{
        // To avoid having two threads running simultaneously, the previous thread is aborted.
    worker->abort();
    //thread->wait(); // If the thread is not running, this will immediately return.
    worker->requestWork();  
}

void MainWindow::on_pushButton_generate_simple_doz_clicked() 
{

    int vdrop = ui->lineEdit_drop_volume->text().toInt(); // микролитры, объём капли
    float k5ml = ui->lineEdit_dosing_coeff->text().toInt(); // mm / ml коэфф пересчёта для шприца
    int drop_speed = ui->lineEdit_extrusion_speed->text().toInt(); // mm / min
    int retr_speed = ui->lineEdit_retraction_speed->text().toInt(); // mm / min
    float proc_volume = ui->lineEdit_working_volume->text().toInt(); // ml ??????????????/
    float k_retr = ui->lineEdit_dosing_coeff->text().toFloat(); //??????????????
    bool retract = true;
    float start_coord = proc_volume * k5ml;
    float work_coord = start_coord;
    float drop_offset = vdrop * k5ml / 1000 / 1000; //point shift

    // как работает пауза : как таковой команды паузы -- нет, поэтому вместо паузы предусматривается движение по другой оси.
    // далее мне надо исходя из координат посчитать с какой скоростью должно пройти это движение
    string gcode_head = "G92 X" + to_string(start_coord) + " E" + to_string(start_coord);
    string gcode_str = "";
    while (work_coord > 0) {
        work_coord = work_coord - drop_offset;
        gcode_str = gcode_str + '\n' + "G1 E" + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(drop_speed); // создаём капельки
        if (retract) {
            gcode_str = gcode_str + '\n' + "G1 E" + to_string(round((work_coord + drop_offset * k_retr) * 1000) / 1000) + " F" + to_string(retr_speed);  // ретракт
            gcode_str = gcode_str + '\n' + "G1 E" + to_string(round(work_coord * 1000) / 1000) + "F" + to_string(retr_speed);  // компенсация ретракта
        }
    }
    cout << gcode_head + gcode_str;
    std::ofstream file;
    file.open("C:\\Users\\glebo\\Desktop\\proverka.txt");
    file << gcode_head + gcode_str;
    file.close();
}

void MainWindow::on_pushButton_generate_imp_doz_clicked() 
{
    int vdrop = ui->lineEdit_drop_volume_imp->text().toInt(); // микролитры, объём капли
    float k5ml = ui->lineEdit_dosing_coeff_imp->text().toFloat(); // mm / ml коэфф пересчёта для шприца
    int drop_speed = ui->lineEdit_extrusion_speed_imp->text().toInt(); // mm / min
    int retr_speed = ui->lineEdit_retraction_speed_imp->text().toInt(); // mm / min
    float proc_volume = ui->lineEdit_working_volume_imp->text().toFloat(); // ml ??????????????/
    float k_retr = ui->lineEdit_coeff_retract_imp->text().toFloat(); //??????????????
    float drop_pause = ui->lineEdit_pause_imp->text().toFloat(); //sec
    bool pause = true;
    bool retract = true;
    float start_coord = proc_volume * k5ml;
    float work_coord = start_coord;
    float drop_offset = vdrop * k5ml / 1000 / 1000; //p
    string mode = ui->comboBox_imp_pause->currentText().toStdString();
    string mode_cycle_pause = "\320\246\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260";
    string mode_inter_cycle = "\320\234\320\265\320\266\321\206\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260";

    // как работает пауза : как таковой команды паузы -- нет, поэтому вместо паузы предусматривается движение по другой оси.
    // далее мне надо исходя из координат посчитать с какой скоростью должно пройти это движение
    float pause_speed = drop_offset / drop_pause * 60;
    string gcode_head = "G92 X" + to_string(start_coord) + " E" + to_string(start_coord);
    string gcode_str = "";
    if (mode == mode_cycle_pause) {
        while (work_coord > 0) {    
            work_coord = work_coord - drop_offset;
            gcode_str = gcode_str + '\n' + "G1 E" + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(drop_speed); // создаём капельки
            if (retract) {
                gcode_str = gcode_str + '\n' + "G1 E" + to_string(round((work_coord + drop_offset * k_retr) * 1000) / 1000) + " F" + to_string(retr_speed);  // ретракт
                if (pause) {
                    gcode_str = gcode_str + '\n' + "G1 X" + to_string(round(work_coord * 1000) / 1000) + " F" + to_string(pause_speed);  // пауза
                };
                gcode_str = gcode_str + '\n' + "G1 E" + to_string(round(work_coord * 1000) / 1000) + "F" + to_string(retr_speed);  // компенсация ретракта
            }
        }
    }
    std::ofstream file;
    file.open("C:\\Users\\glebo\\Desktop\\proverka.txt");
    file << gcode_head + gcode_str;
    file.close();
}
