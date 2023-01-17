#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ListCalc.h"
#include <QThread>
#include <QMainWindow>
#include <settings.h>
#include <deletetemplate.h>
#include <savetemplate.h>
#include <QTimer>
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
#include <cmath>
#include <filesystem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();
    
private:
    char* user = getenv("username");
    bool status_connection = false;
    std::string commands_path = "C:\\Users\\" + std::string(user) + "\\Documents\\Dozing";
    Ui::MainWindow* ui;
    Dialog settings;
    SaveTemplate *save_temp;
    DeleteTemplate *del_temp;
    QThread* thread;
    /**
     * @brief Object which contains methods that should be runned in another thread
     */

    Worker* worker;
    QTimer* timer;

private slots:
    void on_pushButton_port_connection_clicked();
    void on_pushButton_generate_simple_doz_clicked();
    void on_pushButton_generate_imp_doz_clicked();
    void on_action_triggered();
    void clear_files();
    void scroll_console_bottom();
    void check_status();

    void on_pushButton_save_imp_doz_clicked();

    void on_pushButton_save_simple_doz_clicked();

    void on_pushButton_delete_simple_doz_clicked();

    void on_pushButton_delete_imp_doz_clicked();

    void on_pushButton_send_gcode_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_20_clicked();

signals:
    void prosto_signal();
};


#endif // MAINWINDOW_H
