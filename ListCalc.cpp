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
#include <sstream>   

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
    QSerialPort serial;
    try {
        std::ofstream file;
        std::ifstream settings_file;
        char* user = getenv("username");
        std::string commands_path = "C:\\Users\\" + std::string(user) + "\\Documents\\Dozing\\scenario.txt";
        std::string settings_path = "C:\\Users\\" + std::string(getenv("username")) + "\\Documents\\Dozing\\settings.txt";
        file.open(commands_path);
        file << "------\n";
        file.close();
        qDebug() << "Starting worker process in Thread " << thread()->currentThreadId();
        int number_serial_command = 1;
        int number_file_command = 0; 
        std::string just_string;
        std::vector<std::string> list_of_commands;
        std::vector<std::string> list_of_settings;
        std::string var;
        bool shipping_available;
        settings_file.open(settings_path);
        for (; getline(settings_file, var);) {
            list_of_settings.push_back(var);
        }
        settings_file.close();

        serial.setPortName(QString::fromStdString(list_of_settings[0]));
        serial.setBaudRate(QString::fromStdString(list_of_settings[1]).toInt());
        serial.setDataBits(QSerialPort::Data8);
        serial.setParity(QSerialPort::NoParity);
        serial.setStopBits(QSerialPort::OneStop);
        serial.setFlowControl(QSerialPort::NoFlowControl);
        serial.open(QSerialPort::ReadWrite);
        QString serdata;
        if (serial.isOpen()) {
            connection_status = true;
        }
        else {
            abort();
            emit finished();
        }

        while (connection_status) {

            mutex.lock();
            bool abort = _abort;
            mutex.unlock();
            if (abort) {
                qDebug() << "Aborting worker process in Thread " << thread()->currentThreadId();
                serial.close();
                connection_status = false;
                qDebug() << "Worker process finished in Thread " << thread()->currentThreadId();
                emit finished();
                break;
            }
            
            if (serial.waitForReadyRead(100)) {
                QByteArray responseData = serial.readAll();
                QString response(responseData);
                QByteArray response_arr = response.toLocal8Bit();
                if (response_arr != "ok\n") {
                    serdata.append(response_arr);
                    qDebug() << "Response is: " << serdata;
                    emit valueChanged(serdata);
                }
                shipping_available = true;

            }

            std::ifstream t("C:\\Users\\betterty\\Documents\\Dozing\\scenario.txt");
            std::stringstream buffer;
            buffer << t.rdbuf();
            std::stringstream ss(buffer.str());
            for (; getline(ss, just_string);) {
                //ss >> just_string;
                list_of_commands.push_back(just_string);
            }

            if (shipping_available) {
                if (list_of_commands[number_file_command] != "      " and list_of_commands[number_file_command] != "------") {
                    std::string serial_command = "N" + std::to_string(number_serial_command) + " " + list_of_commands[number_file_command] + "*" + gcode_csum("N" + std::to_string(number_serial_command) + " " + list_of_commands[number_file_command]) + "\n";
                    serial.write(serial_command.c_str(), serial_command.size());
                    qDebug() << "serial_command" << QString::fromStdString(serial_command);
                    number_serial_command++;
                    number_file_command++;
                    shipping_available = false;
                    
                }
            }
            buffer.clear();
            list_of_commands.clear();
            t.close();
            //QEventLoop loop;
            //QTimer::singleShot(10, &loop, SLOT(quit()));
            //loop.exec();
        }        
    }
    catch (std::exception & ex) {
        abort();
        serial.close();
        connection_status = false;
        emit finished();
        qDebug() << ex.what();
    }


}