#include "ListCalc.h"
#include <QTimer>
#include <QEventLoop>
#include <QtSerialPort/QSerialPort>
#include <fstream>
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

void Worker::doWork()
{
    qDebug() << "Starting worker process in Thread " << thread()->currentThreadId();

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

    try {
        while (connection_status) {
            mutex.lock();
            bool abort = _abort;
            mutex.unlock();
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

                // This will stupidly wait 1 sec doing nothing...
                QEventLoop loop;
                QTimer::singleShot(1000, &loop, SLOT(quit()));
                loop.exec();

                emit valueChanged(serdata);
            }
            else {
                qDebug() << "OPEN ERROR: " << serial.errorString();
            }
        }
        throw "Error";
    }
    catch (...) {
        qDebug() << "Error";
    }


    qDebug() << "Worker process finished in Thread " << thread()->currentThreadId();

    //Once 60 sec passed, the finished signal is sent
    emit finished();
}