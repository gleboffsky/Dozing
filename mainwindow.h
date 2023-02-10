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
#include <nlohmann/json.hpp>

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
    int current_extruder_temp;
    int current_bed_temp;
    float current_axis_coord;
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
    
    void on_comboBox_main_axes_currentTextChanged(const QString& arg1);
    
    void creating_json();
    //void on_pushButton_main_axes_up_clicked();
    
    void save_simple_template(std::string);
    
    void save_imp_template(std::string);
    
    void update_template_names(std::string);

    //void on_pushButton_main_axes_down_clicked();

    void on_list_tools_simple_templates_textActivated(const QString& arg1);

    void on_list_tools_imp_templates_textActivated(const QString& arg1);

    void on_pushButton_extruder_temp_up_clicked();

    void on_pushButton_extruder_temp_down_clicked();

    void on_pushButton_bed_temp_up_clicked();

    void on_pushButton_bed_temp_down_clicked();

    void on_pushButton_main_axes_up_clicked();

    void on_pushButton_main_axes_down_clicked();

    void update_lcd_telemetry();

signals:
    void prosto_signal();
};


#endif // MAINWINDOW_H
