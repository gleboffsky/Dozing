#include "ListCalc.h"
#include <QTimer>
#include <QEventLoop>
#include <QtSerialPort/QSerialPort>
#include <Windows.h>
#include <QtSerialPort/QSerialPortInfo>
#include <QThread>
#include <QDebug>
#include <string>
#include <QMessageBox>

Worker::Worker(QObject* parent) :
    QObject(parent)
{
    _working = false;
    _abort = false;
    connection_status = false;
}

void Worker::requestWork()
{
    mutex.lock();
    _working = true;
    _abort = false;
    qDebug() << "Request worker start in Thread " << thread()->currentThreadId();
    mutex.unlock();

    emit workRequested();
}

void Worker::abort()
{
    mutex.lock();
    if (_working) {

        _abort = true;
        qDebug() << "Request worker aborting in Thread " << thread()->currentThreadId();
    }
    mutex.unlock();
}

std::string gcode_csum(std::string command) {
    char command_1 = command[0];
    char command_2 = command[1];
    int cs = (int)command_1 ^ (int)command_2;
    for (int i = 2; i < command.size(); i++) {
        cs = cs ^ (int)command[i];
    }
    return std::to_string(cs);
}


void Worker::doWork()
{
    std::ofstream file;
    file.open("C:\\Users\\glebo\\Desktop\\proverka.txt");
    file << "";
    file.close();
    qDebug() << "Starting worker process in Thread " << thread()->currentThreadId();
    int N = 1;
    QSerialPort serial;
    serial.setPortName("COM3");
    serial.setBaudRate(250000);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);
    serial.open(QSerialPort::ReadWrite);
    QString serdata = {};
    int serial_status = 1;
    if (serial.isOpen()) {
        connection_status = true;
    }
    std::fstream newfile;
    newfile.open("C:\\Users\\glebo\\Desktop\\proverka.txt", std::ios::in); //open a file to perform read operation using file object



    try {
        while (connection_status) {
            mutex.lock();
            bool abort = _abort;
            mutex.unlock();
            //if (newfile.is_open()) {   //checking whether the file is open
            std::string command;
            QString asdasd = QString::fromStdString(command);
            getline(newfile, command);
            QString serial_command = QString::fromStdString("N" + std::to_string(N) + " " + command + "*" + gcode_csum("N" + std::to_string(N) + " " + command) + "\n");
            qDebug() << "asdasd",asdasd;
            //if (command != "") {
            serial.write(serial_command.toStdString().c_str(), serial_command.size());
            qDebug() << "serial_command: ", serial_command.toStdString().c_str(), serial_command.size();
            N += 1;
            //}
            //}
            if (abort) {
                qDebug() << "Aborting worker process in Thread " << thread()->currentThreadId();
                serial.close();
                connection_status = false;
            }
            if (serial.waitForReadyRead()) {

                QByteArray responseData = serial.readAll();
                QString response(responseData);
                QByteArray response_arr = response.toLocal8Bit();
                serdata.append(response_arr);
                qDebug() << "Response is: " << serdata;


                QEventLoop loop;
                QTimer::singleShot(1000, &loop, SLOT(quit()));
                loop.exec();

                emit valueChanged(serdata);
            }
            else {
                qDebug() << "OPEN ERROR: " << serial.errorString();
            }
        }
        newfile.close();
        if (serial.isOpen()) {
            serial.close();
        }
        throw "Error";
    }
    catch (...) {
        if (serial.isOpen()) {
                serial.close();
        }
        qDebug() << "Error";
    }


    qDebug() << "Worker process finished in Thread " << thread()->currentThreadId();

    //Once 60 sec passed, the finished signal is sent
    emit finished();
}