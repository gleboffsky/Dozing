/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QProgressBar *progressBar;
    QTextEdit *textEdit_console;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_port_connection;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_connection_status;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdNumber_2;
    QPushButton *pushButton_extruder_temp_down;
    QLabel *label_17;
    QLCDNumber *lcdNumber_3;
    QPushButton *pushButton_extruder_temp_up;
    QLineEdit *lineEdit_send_gcode;
    QLabel *label_main_axes;
    QLCDNumber *lcdNumber_main_axes;
    QPushButton *pushButton_send_gcode;
    QPushButton *pushButton_main_axes_up;
    QPushButton *pushButton_main_axes_down;
    QLabel *label_23;
    QPushButton *pushButton_bed_temp_down;
    QPushButton *pushButton_bed_temp_up;
    QLabel *label_127;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox_shift;
    QLabel *label_3;
    QComboBox *comboBox_main_axes;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_24;
    QSpinBox *spinBox_speed;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_groupBox_8;
    QLabel *label_56;
    QLabel *label_36;
    QLineEdit *lineEdit_working_volume;
    QLineEdit *lineEdit_drop_volume;
    QLineEdit *lineEdit_desktop_temperature;
    QLabel *label_10;
    QLineEdit *lineEdit_dosing_coeff;
    QLabel *label_174;
    QLineEdit *lineEdit_retraction_speed;
    QLineEdit *lineEdit_extrusion_speed;
    QLabel *label_55;
    QLabel *label_9;
    QLabel *label_12_;
    QLabel *label_11;
    QLineEdit *lineEdit_extruder_temperature;
    QLineEdit *lineEdit_coeff_retract;
    QComboBox *comboBox_working_axis_simp;
    QLabel *label_working_axis_simp;
    QPushButton *pushButton_generate_simple_doz;
    QHBoxLayout *horizontalLayout_tab_11_1;
    QComboBox *list_tools_simple_templates;
    QPushButton *pushButton_save_simple_doz;
    QPushButton *pushButton_delete_simple_doz;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_groupBox_9;
    QLabel *label_37;
    QLabel *label_13;
    QLineEdit *lineEdit_retraction_speed_imp;
    QLineEdit *lineEdit_extruder_temperature_imp;
    QLabel *label_16;
    QLabel *label_15;
    QComboBox *comboBox_imp_pause;
    QLabel *label_14;
    QLineEdit *lineEdit_desktop_temperature_imp;
    QLineEdit *lineEdit_pause_imp;
    QLineEdit *lineEdit_extrusion_speed_imp;
    QLabel *label_58;
    QLineEdit *lineEdit_drop_volume_imp;
    QLabel *label_57;
    QLabel *label_175;
    QLineEdit *lineEdit_coeff_retract_imp;
    QLabel *label;
    QLineEdit *lineEdit_working_volume_imp;
    QLineEdit *lineEdit_dosing_coeff_imp;
    QComboBox *comboBox_working_axis_imp;
    QLabel *label_working_axis_imp;
    QPushButton *pushButton_generate_imp_doz;
    QHBoxLayout *horizontalLayout_tab_11_;
    QComboBox *list_tools_imp_templates;
    QPushButton *pushButton_save_imp_doz;
    QPushButton *pushButton_delete_imp_doz;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1297, 758);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1297, 758));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Dozing.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setDockNestingEnabled(false);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(0, 0));
        centralwidget->setMaximumSize(QSize(16777215, 16777213));
        centralwidget->setSizeIncrement(QSize(0, 0));
        centralwidget->setBaseSize(QSize(0, 0));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        textEdit_console = new QTextEdit(centralwidget);
        textEdit_console->setObjectName("textEdit_console");
        QFont font;
        font.setPointSize(12);
        textEdit_console->setFont(font);
        textEdit_console->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_console->setReadOnly(true);

        gridLayout->addWidget(textEdit_console, 2, 0, 1, 2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        pushButton_port_connection = new QPushButton(groupBox);
        pushButton_port_connection->setObjectName("pushButton_port_connection");
        QFont font1;
        font1.setPointSize(15);
        pushButton_port_connection->setFont(font1);
        pushButton_port_connection->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: rgb(243, 243, 243);\n"
"                                            color: rgb(25, 25, 25);\n"
"                                            text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          color: rgb(5, 97, 245);\n"
"                                          }"));

        horizontalLayout_2->addWidget(pushButton_port_connection);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 50);

        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        label_connection_status = new QLabel(centralwidget);
        label_connection_status->setObjectName("label_connection_status");

        gridLayout->addWidget(label_connection_status, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);border: 1px solid rgb(121, 121, 121);border-radius: 0px;}QGroupBox::title {subcontrol-origin: margin;subcontrol-position: top center;padding: 0 3px;background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgb(90, 200, 255), stop: 1 rgb(255, 255, 255))"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        lcdNumber_2 = new QLCDNumber(groupBox_2);
        lcdNumber_2->setObjectName("lcdNumber_2");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber_2->sizePolicy().hasHeightForWidth());
        lcdNumber_2->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(5);
        lcdNumber_2->setFont(font2);
        lcdNumber_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        lcdNumber_2->setDigitCount(7);

        gridLayout_2->addWidget(lcdNumber_2, 1, 2, 1, 2);

        pushButton_extruder_temp_down = new QPushButton(groupBox_2);
        pushButton_extruder_temp_down->setObjectName("pushButton_extruder_temp_down");
        QFont font3;
        font3.setPointSize(35);
        font3.setStyleStrategy(QFont::PreferAntialias);
        pushButton_extruder_temp_down->setFont(font3);
        pushButton_extruder_temp_down->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
"                                          border: 1px solid rgb(79, 79, 79);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(25, 25, 25);\n"
"                                         text-align:center;\n"
"                                       \n"
"                                         hover {\n"
"                                         border-color: rgb(82, 168, 236);\n"
"                                         border-radius: 10px;\n"
"                                         color: rgb(82, 168, 236);\n"
"                                         };\n"
"                                         pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 20px;\n"
"                                          color: rgb(5, 97, 245)\n"
"										 };"));

        gridLayout_2->addWidget(pushButton_extruder_temp_down, 3, 2, 1, 2);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName("label_17");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy3);
        QFont font4;
        font4.setPointSize(25);
        label_17->setFont(font4);
        label_17->setStyleSheet(QString::fromUtf8("border:none"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_17, 0, 4, 1, 2);

        lcdNumber_3 = new QLCDNumber(groupBox_2);
        lcdNumber_3->setObjectName("lcdNumber_3");
        sizePolicy2.setHeightForWidth(lcdNumber_3->sizePolicy().hasHeightForWidth());
        lcdNumber_3->setSizePolicy(sizePolicy2);
        lcdNumber_3->setFont(font2);
        lcdNumber_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        lcdNumber_3->setDigitCount(7);

        gridLayout_2->addWidget(lcdNumber_3, 1, 4, 1, 2);

        pushButton_extruder_temp_up = new QPushButton(groupBox_2);
        pushButton_extruder_temp_up->setObjectName("pushButton_extruder_temp_up");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_extruder_temp_up->sizePolicy().hasHeightForWidth());
        pushButton_extruder_temp_up->setSizePolicy(sizePolicy4);
        pushButton_extruder_temp_up->setFont(font3);
        pushButton_extruder_temp_up->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
"                                          border: 1px solid rgb(79, 79, 79);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(25, 25, 25);\n"
"                                         text-align:center;\n"
"                                       \n"
"                                         hover {\n"
"                                         border-color: rgb(82, 168, 236);\n"
"                                         border-radius: 10px;\n"
"                                         color: rgb(82, 168, 236);\n"
"                                         };\n"
"                                         pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 20px;\n"
"                                          color: rgb(5, 97, 245)\n"
"										 };"));

        gridLayout_2->addWidget(pushButton_extruder_temp_up, 2, 2, 1, 2);

        lineEdit_send_gcode = new QLineEdit(groupBox_2);
        lineEdit_send_gcode->setObjectName("lineEdit_send_gcode");
        lineEdit_send_gcode->setFont(font);
        lineEdit_send_gcode->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(lineEdit_send_gcode, 6, 1, 1, 4);

        label_main_axes = new QLabel(groupBox_2);
        label_main_axes->setObjectName("label_main_axes");
        sizePolicy3.setHeightForWidth(label_main_axes->sizePolicy().hasHeightForWidth());
        label_main_axes->setSizePolicy(sizePolicy3);
        QFont font5;
        font5.setPointSize(25);
        font5.setBold(false);
        font5.setStyleStrategy(QFont::PreferDefault);
        label_main_axes->setFont(font5);
        label_main_axes->setLayoutDirection(Qt::LeftToRight);
        label_main_axes->setStyleSheet(QString::fromUtf8("border:none"));
        label_main_axes->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_main_axes, 0, 0, 1, 2);

        lcdNumber_main_axes = new QLCDNumber(groupBox_2);
        lcdNumber_main_axes->setObjectName("lcdNumber_main_axes");
        sizePolicy2.setHeightForWidth(lcdNumber_main_axes->sizePolicy().hasHeightForWidth());
        lcdNumber_main_axes->setSizePolicy(sizePolicy2);
        lcdNumber_main_axes->setFont(font2);
        lcdNumber_main_axes->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        lcdNumber_main_axes->setDigitCount(7);
        lcdNumber_main_axes->setProperty("intValue", QVariant(0));

        gridLayout_2->addWidget(lcdNumber_main_axes, 1, 0, 1, 2);

        pushButton_send_gcode = new QPushButton(groupBox_2);
        pushButton_send_gcode->setObjectName("pushButton_send_gcode");
        pushButton_send_gcode->setFont(font);
        pushButton_send_gcode->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: #FFFFFF;\n"
"                                           border: 1px solid rgb(79, 79, 79);\n"
"                                              color: rgb(25, 25, 25);\n"
"                                              text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          color: rgb(5, 97, 245);\n"
"                                          }"));

        gridLayout_2->addWidget(pushButton_send_gcode, 6, 5, 1, 1);

        pushButton_main_axes_up = new QPushButton(groupBox_2);
        pushButton_main_axes_up->setObjectName("pushButton_main_axes_up");
        sizePolicy4.setHeightForWidth(pushButton_main_axes_up->sizePolicy().hasHeightForWidth());
        pushButton_main_axes_up->setSizePolicy(sizePolicy4);
        pushButton_main_axes_up->setFont(font3);
        pushButton_main_axes_up->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
"                                          border: 1px solid rgb(79, 79, 79);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(25, 25, 25);\n"
"                                         text-align:center;\n"
"                                       \n"
"                                         hover {\n"
"                                         border-color: rgb(82, 168, 236);\n"
"                                         border-radius: 10px;\n"
"                                         color: rgb(82, 168, 236);\n"
"                                         };\n"
"                                         pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 20px;\n"
"                                          color: rgb(5, 97, 245)\n"
"										 };\n"
""));

        gridLayout_2->addWidget(pushButton_main_axes_up, 2, 0, 1, 2);

        pushButton_main_axes_down = new QPushButton(groupBox_2);
        pushButton_main_axes_down->setObjectName("pushButton_main_axes_down");
        pushButton_main_axes_down->setFont(font3);
        pushButton_main_axes_down->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
"                                          border: 1px solid rgb(79, 79, 79);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(25, 25, 25);\n"
"                                         text-align:center;\n"
"                                       \n"
"                                         hover {\n"
"                                         border-color: rgb(82, 168, 236);\n"
"                                         border-radius: 10px;\n"
"                                         color: rgb(82, 168, 236);\n"
"                                         };\n"
"                                         pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 20px;\n"
"                                          color: rgb(5, 97, 245)\n"
"										 };"));

        gridLayout_2->addWidget(pushButton_main_axes_down, 3, 0, 1, 2);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName("label_23");
        sizePolicy3.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy3);
        label_23->setFont(font4);
        label_23->setStyleSheet(QString::fromUtf8("border:none"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_23, 0, 2, 1, 2);

        pushButton_bed_temp_down = new QPushButton(groupBox_2);
        pushButton_bed_temp_down->setObjectName("pushButton_bed_temp_down");
        pushButton_bed_temp_down->setFont(font3);
        pushButton_bed_temp_down->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
"                                          border: 1px solid rgb(79, 79, 79);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(25, 25, 25);\n"
"                                         text-align:center;\n"
"                                       \n"
"                                         hover {\n"
"                                         border-color: rgb(82, 168, 236);\n"
"                                         border-radius: 10px;\n"
"                                         color: rgb(82, 168, 236);\n"
"                                         };\n"
"                                         pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 20px;\n"
"                                          color: rgb(5, 97, 245)\n"
"										 };"));

        gridLayout_2->addWidget(pushButton_bed_temp_down, 3, 4, 1, 2);

        pushButton_bed_temp_up = new QPushButton(groupBox_2);
        pushButton_bed_temp_up->setObjectName("pushButton_bed_temp_up");
        sizePolicy4.setHeightForWidth(pushButton_bed_temp_up->sizePolicy().hasHeightForWidth());
        pushButton_bed_temp_up->setSizePolicy(sizePolicy4);
        pushButton_bed_temp_up->setFont(font3);
        pushButton_bed_temp_up->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
"                                          border: 1px solid rgb(79, 79, 79);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(25, 25, 25);\n"
"                                         text-align:center;\n"
"                                       \n"
"                                         hover {\n"
"                                         border-color: rgb(82, 168, 236);\n"
"                                         border-radius: 10px;\n"
"                                         color: rgb(82, 168, 236);\n"
"                                         };\n"
"                                         pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 20px;\n"
"                                          color: rgb(5, 97, 245)\n"
"										 };"));

        gridLayout_2->addWidget(pushButton_bed_temp_up, 2, 4, 1, 2);

        label_127 = new QLabel(groupBox_2);
        label_127->setObjectName("label_127");
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_127->sizePolicy().hasHeightForWidth());
        label_127->setSizePolicy(sizePolicy5);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Yu Gothic Medium")});
        font6.setPointSize(12);
        font6.setStyleStrategy(QFont::PreferAntialias);
        label_127->setFont(font6);
        label_127->setStyleSheet(QString::fromUtf8("border:none"));
        label_127->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_127, 6, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        horizontalLayout_3->addWidget(label_4);

        spinBox_shift = new QSpinBox(groupBox_2);
        spinBox_shift->setObjectName("spinBox_shift");
        sizePolicy3.setHeightForWidth(spinBox_shift->sizePolicy().hasHeightForWidth());
        spinBox_shift->setSizePolicy(sizePolicy3);
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(false);
        spinBox_shift->setFont(font7);
        spinBox_shift->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_shift->setMaximum(10000);
        spinBox_shift->setValue(1);

        horizontalLayout_3->addWidget(spinBox_shift);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        horizontalLayout_3->addWidget(label_3);

        comboBox_main_axes = new QComboBox(groupBox_2);
        comboBox_main_axes->addItem(QString());
        comboBox_main_axes->addItem(QString());
        comboBox_main_axes->addItem(QString());
        comboBox_main_axes->addItem(QString());
        comboBox_main_axes->setObjectName("comboBox_main_axes");
        comboBox_main_axes->setFont(font);
        comboBox_main_axes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(comboBox_main_axes);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 7);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 7);

        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName("label_24");
        sizePolicy3.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy3);
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("border:none"));

        horizontalLayout_4->addWidget(label_24);

        spinBox_speed = new QSpinBox(groupBox_2);
        spinBox_speed->setObjectName("spinBox_speed");
        sizePolicy4.setHeightForWidth(spinBox_speed->sizePolicy().hasHeightForWidth());
        spinBox_speed->setSizePolicy(sizePolicy4);
        spinBox_speed->setFont(font);
        spinBox_speed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox_speed->setMaximum(10000);
        spinBox_speed->setValue(51);

        horizontalLayout_4->addWidget(spinBox_speed);

        horizontalLayout_4->setStretch(1, 7);

        gridLayout_2->addLayout(horizontalLayout_4, 5, 0, 1, 6);

        gridLayout_2->setRowStretch(0, 10);

        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font8;
        font8.setPointSize(11);
        tabWidget->setFont(font8);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"                                       QTabBar::tab:hover {\n"
"                                      color: rgb(255, 255, 255);\n"
"                                       background-color: rgb(214, 214, 214);\n"
"                                       }\n"
"                                       QTabBar::tab:selected{\n"
"                                       color: rgb(29, 89, 255);\n"
"                                       background-color: rgb(255, 255, 255);\n"
"                                       }\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_12 = new QGroupBox(tab);
        groupBox_12->setObjectName("groupBox_12");
        QFont font9;
        font9.setPointSize(12);
        font9.setBold(true);
        groupBox_12->setFont(font9);
        groupBox_12->setStyleSheet(QString::fromUtf8("QGroupBox {background-color: rgb(243, 243, 243);border: none;border-radius: 15px;}QGroupBox::title {subcontrol-origin: margin;subcontrol-position: top center;padding: 0 3px;}\n"
""));
        gridLayout_groupBox_8 = new QGridLayout(groupBox_12);
        gridLayout_groupBox_8->setObjectName("gridLayout_groupBox_8");
        gridLayout_groupBox_8->setHorizontalSpacing(6);
        gridLayout_groupBox_8->setContentsMargins(22, 22, -1, -1);
        label_56 = new QLabel(groupBox_12);
        label_56->setObjectName("label_56");
        QFont font10;
        font10.setPointSize(10);
        label_56->setFont(font10);
        label_56->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_56, 2, 1, 1, 1);

        label_36 = new QLabel(groupBox_12);
        label_36->setObjectName("label_36");
        label_36->setFont(font10);
        label_36->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        gridLayout_groupBox_8->addWidget(label_36, 0, 1, 1, 1);

        lineEdit_working_volume = new QLineEdit(groupBox_12);
        lineEdit_working_volume->setObjectName("lineEdit_working_volume");
        lineEdit_working_volume->setFont(font10);
        lineEdit_working_volume->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_working_volume, 4, 0, 1, 1);

        lineEdit_drop_volume = new QLineEdit(groupBox_12);
        lineEdit_drop_volume->setObjectName("lineEdit_drop_volume");
        lineEdit_drop_volume->setFont(font10);
        lineEdit_drop_volume->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_drop_volume, 0, 0, 1, 1);

        lineEdit_desktop_temperature = new QLineEdit(groupBox_12);
        lineEdit_desktop_temperature->setObjectName("lineEdit_desktop_temperature");
        lineEdit_desktop_temperature->setFont(font10);
        lineEdit_desktop_temperature->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_desktop_temperature, 6, 0, 1, 1);

        label_10 = new QLabel(groupBox_12);
        label_10->setObjectName("label_10");
        label_10->setFont(font10);
        label_10->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_10, 5, 1, 1, 1);

        lineEdit_dosing_coeff = new QLineEdit(groupBox_12);
        lineEdit_dosing_coeff->setObjectName("lineEdit_dosing_coeff");
        lineEdit_dosing_coeff->setFont(font10);
        lineEdit_dosing_coeff->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_dosing_coeff, 5, 0, 1, 1);

        label_174 = new QLabel(groupBox_12);
        label_174->setObjectName("label_174");
        label_174->setFont(font10);
        label_174->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_174, 3, 1, 1, 1);

        lineEdit_retraction_speed = new QLineEdit(groupBox_12);
        lineEdit_retraction_speed->setObjectName("lineEdit_retraction_speed");
        lineEdit_retraction_speed->setFont(font10);
        lineEdit_retraction_speed->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_retraction_speed, 1, 0, 1, 1);

        lineEdit_extrusion_speed = new QLineEdit(groupBox_12);
        lineEdit_extrusion_speed->setObjectName("lineEdit_extrusion_speed");
        lineEdit_extrusion_speed->setFont(font10);
        lineEdit_extrusion_speed->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_extrusion_speed, 2, 0, 1, 1);

        label_55 = new QLabel(groupBox_12);
        label_55->setObjectName("label_55");
        label_55->setFont(font10);
        label_55->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_55, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_12);
        label_9->setObjectName("label_9");
        label_9->setFont(font10);
        label_9->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_9, 4, 1, 1, 1);

        label_12_ = new QLabel(groupBox_12);
        label_12_->setObjectName("label_12_");
        label_12_->setFont(font10);

        gridLayout_groupBox_8->addWidget(label_12_, 7, 1, 1, 1);

        label_11 = new QLabel(groupBox_12);
        label_11->setObjectName("label_11");
        label_11->setFont(font10);

        gridLayout_groupBox_8->addWidget(label_11, 6, 1, 1, 1);

        lineEdit_extruder_temperature = new QLineEdit(groupBox_12);
        lineEdit_extruder_temperature->setObjectName("lineEdit_extruder_temperature");
        lineEdit_extruder_temperature->setFont(font10);
        lineEdit_extruder_temperature->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_extruder_temperature, 7, 0, 1, 1);

        lineEdit_coeff_retract = new QLineEdit(groupBox_12);
        lineEdit_coeff_retract->setObjectName("lineEdit_coeff_retract");
        lineEdit_coeff_retract->setFont(font10);
        lineEdit_coeff_retract->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_coeff_retract, 3, 0, 1, 1);

        comboBox_working_axis_simp = new QComboBox(groupBox_12);
        comboBox_working_axis_simp->addItem(QString());
        comboBox_working_axis_simp->addItem(QString());
        comboBox_working_axis_simp->addItem(QString());
        comboBox_working_axis_simp->addItem(QString());
        comboBox_working_axis_simp->setObjectName("comboBox_working_axis_simp");
        comboBox_working_axis_simp->setFont(font10);
        comboBox_working_axis_simp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(comboBox_working_axis_simp, 8, 0, 1, 1);

        label_working_axis_simp = new QLabel(groupBox_12);
        label_working_axis_simp->setObjectName("label_working_axis_simp");
        label_working_axis_simp->setFont(font10);

        gridLayout_groupBox_8->addWidget(label_working_axis_simp, 8, 1, 1, 1);

        gridLayout_groupBox_8->setColumnStretch(0, 1);
        gridLayout_groupBox_8->setColumnStretch(1, 3);

        verticalLayout->addWidget(groupBox_12);

        pushButton_generate_simple_doz = new QPushButton(tab);
        pushButton_generate_simple_doz->setObjectName("pushButton_generate_simple_doz");
        pushButton_generate_simple_doz->setFont(font);
        pushButton_generate_simple_doz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: #FFFFFF;\n"
"                                           border: 1px solid rgb(79, 79, 79);\n"
"                                              border-radius: 10px;\n"
"                                              color: rgb(25, 25, 25);\n"
"                                              text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          colo"
                        "r: rgb(5, 97, 245);\n"
"                                          }"));

        verticalLayout->addWidget(pushButton_generate_simple_doz);

        horizontalLayout_tab_11_1 = new QHBoxLayout();
        horizontalLayout_tab_11_1->setSpacing(25);
        horizontalLayout_tab_11_1->setObjectName("horizontalLayout_tab_11_1");
        horizontalLayout_tab_11_1->setContentsMargins(23, -1, 24, -1);
        list_tools_simple_templates = new QComboBox(tab);
        list_tools_simple_templates->setObjectName("list_tools_simple_templates");
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(list_tools_simple_templates->sizePolicy().hasHeightForWidth());
        list_tools_simple_templates->setSizePolicy(sizePolicy6);
        list_tools_simple_templates->setFont(font);

        horizontalLayout_tab_11_1->addWidget(list_tools_simple_templates);

        pushButton_save_simple_doz = new QPushButton(tab);
        pushButton_save_simple_doz->setObjectName("pushButton_save_simple_doz");
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_save_simple_doz->sizePolicy().hasHeightForWidth());
        pushButton_save_simple_doz->setSizePolicy(sizePolicy7);
        pushButton_save_simple_doz->setFont(font);
        pushButton_save_simple_doz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: #FFFFFF;\n"
"                                           border: 1px solid rgb(79, 79, 79);\n"
"                                              color: rgb(25, 25, 25);\n"
"                                              text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          color: rgb(5, 97, 245);\n"
"                                          }"));

        horizontalLayout_tab_11_1->addWidget(pushButton_save_simple_doz);

        pushButton_delete_simple_doz = new QPushButton(tab);
        pushButton_delete_simple_doz->setObjectName("pushButton_delete_simple_doz");
        sizePolicy7.setHeightForWidth(pushButton_delete_simple_doz->sizePolicy().hasHeightForWidth());
        pushButton_delete_simple_doz->setSizePolicy(sizePolicy7);
        pushButton_delete_simple_doz->setFont(font);
        pushButton_delete_simple_doz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: #FFFFFF;\n"
"                                           border: 1px solid rgb(79, 79, 79);\n"
"                                              color: rgb(25, 25, 25);\n"
"                                              text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          color: rgb(5, 97, 245);\n"
"                                          }"));

        horizontalLayout_tab_11_1->addWidget(pushButton_delete_simple_doz);


        verticalLayout->addLayout(horizontalLayout_tab_11_1);

        verticalLayout->setStretch(0, 22);
        verticalLayout->setStretch(2, 1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_13 = new QGroupBox(tab_2);
        groupBox_13->setObjectName("groupBox_13");
        groupBox_13->setFont(font9);
        groupBox_13->setStyleSheet(QString::fromUtf8("QGroupBox {background-color: rgb(243, 243, 243);border: none;border-radius: 15px;}QGroupBox::title {subcontrol-origin: margin;subcontrol-position: top center;padding: 0 3px;}\n"
""));
        gridLayout_groupBox_9 = new QGridLayout(groupBox_13);
        gridLayout_groupBox_9->setObjectName("gridLayout_groupBox_9");
        gridLayout_groupBox_9->setHorizontalSpacing(6);
        gridLayout_groupBox_9->setContentsMargins(22, 29, -1, 0);
        label_37 = new QLabel(groupBox_13);
        label_37->setObjectName("label_37");
        label_37->setFont(font10);
        label_37->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        gridLayout_groupBox_9->addWidget(label_37, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_13);
        label_13->setObjectName("label_13");
        label_13->setFont(font10);
        label_13->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_13, 4, 1, 1, 1);

        lineEdit_retraction_speed_imp = new QLineEdit(groupBox_13);
        lineEdit_retraction_speed_imp->setObjectName("lineEdit_retraction_speed_imp");
        lineEdit_retraction_speed_imp->setFont(font10);
        lineEdit_retraction_speed_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_retraction_speed_imp, 1, 0, 1, 1);

        lineEdit_extruder_temperature_imp = new QLineEdit(groupBox_13);
        lineEdit_extruder_temperature_imp->setObjectName("lineEdit_extruder_temperature_imp");
        lineEdit_extruder_temperature_imp->setFont(font10);
        lineEdit_extruder_temperature_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_extruder_temperature_imp, 7, 0, 1, 1);

        label_16 = new QLabel(groupBox_13);
        label_16->setObjectName("label_16");
        label_16->setFont(font10);

        gridLayout_groupBox_9->addWidget(label_16, 7, 1, 1, 1);

        label_15 = new QLabel(groupBox_13);
        label_15->setObjectName("label_15");
        label_15->setFont(font10);

        gridLayout_groupBox_9->addWidget(label_15, 6, 1, 1, 1);

        comboBox_imp_pause = new QComboBox(groupBox_13);
        comboBox_imp_pause->addItem(QString());
        comboBox_imp_pause->addItem(QString());
        comboBox_imp_pause->setObjectName("comboBox_imp_pause");
        comboBox_imp_pause->setFont(font10);
        comboBox_imp_pause->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(comboBox_imp_pause, 10, 0, 1, 1);

        label_14 = new QLabel(groupBox_13);
        label_14->setObjectName("label_14");
        label_14->setFont(font10);
        label_14->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_14, 5, 1, 1, 1);

        lineEdit_desktop_temperature_imp = new QLineEdit(groupBox_13);
        lineEdit_desktop_temperature_imp->setObjectName("lineEdit_desktop_temperature_imp");
        lineEdit_desktop_temperature_imp->setFont(font10);
        lineEdit_desktop_temperature_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_desktop_temperature_imp, 6, 0, 1, 1);

        lineEdit_pause_imp = new QLineEdit(groupBox_13);
        lineEdit_pause_imp->setObjectName("lineEdit_pause_imp");
        lineEdit_pause_imp->setFont(font10);
        lineEdit_pause_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_pause_imp, 8, 0, 1, 1);

        lineEdit_extrusion_speed_imp = new QLineEdit(groupBox_13);
        lineEdit_extrusion_speed_imp->setObjectName("lineEdit_extrusion_speed_imp");
        lineEdit_extrusion_speed_imp->setFont(font10);
        lineEdit_extrusion_speed_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_extrusion_speed_imp, 2, 0, 1, 1);

        label_58 = new QLabel(groupBox_13);
        label_58->setObjectName("label_58");
        label_58->setFont(font10);
        label_58->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_58, 2, 1, 1, 1);

        lineEdit_drop_volume_imp = new QLineEdit(groupBox_13);
        lineEdit_drop_volume_imp->setObjectName("lineEdit_drop_volume_imp");
        lineEdit_drop_volume_imp->setFont(font10);
        lineEdit_drop_volume_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_drop_volume_imp, 0, 0, 1, 1);

        label_57 = new QLabel(groupBox_13);
        label_57->setObjectName("label_57");
        label_57->setFont(font10);
        label_57->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_57, 1, 1, 1, 1);

        label_175 = new QLabel(groupBox_13);
        label_175->setObjectName("label_175");
        label_175->setFont(font10);
        label_175->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_175, 3, 1, 1, 1);

        lineEdit_coeff_retract_imp = new QLineEdit(groupBox_13);
        lineEdit_coeff_retract_imp->setObjectName("lineEdit_coeff_retract_imp");
        lineEdit_coeff_retract_imp->setFont(font10);
        lineEdit_coeff_retract_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_coeff_retract_imp, 3, 0, 1, 1);

        label = new QLabel(groupBox_13);
        label->setObjectName("label");
        label->setFont(font10);

        gridLayout_groupBox_9->addWidget(label, 8, 1, 1, 1);

        lineEdit_working_volume_imp = new QLineEdit(groupBox_13);
        lineEdit_working_volume_imp->setObjectName("lineEdit_working_volume_imp");
        lineEdit_working_volume_imp->setFont(font10);
        lineEdit_working_volume_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_working_volume_imp, 4, 0, 1, 1);

        lineEdit_dosing_coeff_imp = new QLineEdit(groupBox_13);
        lineEdit_dosing_coeff_imp->setObjectName("lineEdit_dosing_coeff_imp");
        lineEdit_dosing_coeff_imp->setFont(font10);
        lineEdit_dosing_coeff_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_dosing_coeff_imp, 5, 0, 1, 1);

        comboBox_working_axis_imp = new QComboBox(groupBox_13);
        comboBox_working_axis_imp->addItem(QString());
        comboBox_working_axis_imp->addItem(QString());
        comboBox_working_axis_imp->addItem(QString());
        comboBox_working_axis_imp->addItem(QString());
        comboBox_working_axis_imp->setObjectName("comboBox_working_axis_imp");
        comboBox_working_axis_imp->setFont(font10);
        comboBox_working_axis_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(comboBox_working_axis_imp, 9, 0, 1, 1);

        label_working_axis_imp = new QLabel(groupBox_13);
        label_working_axis_imp->setObjectName("label_working_axis_imp");
        label_working_axis_imp->setFont(font10);

        gridLayout_groupBox_9->addWidget(label_working_axis_imp, 9, 1, 1, 1);

        gridLayout_groupBox_9->setColumnStretch(0, 1);
        gridLayout_groupBox_9->setColumnStretch(1, 3);

        verticalLayout_2->addWidget(groupBox_13);

        pushButton_generate_imp_doz = new QPushButton(tab_2);
        pushButton_generate_imp_doz->setObjectName("pushButton_generate_imp_doz");
        sizePolicy4.setHeightForWidth(pushButton_generate_imp_doz->sizePolicy().hasHeightForWidth());
        pushButton_generate_imp_doz->setSizePolicy(sizePolicy4);
        pushButton_generate_imp_doz->setFont(font);
        pushButton_generate_imp_doz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: #FFFFFF;\n"
"                                           border: 1px solid rgb(79, 79, 79);\n"
"                                              border-radius: 10px;\n"
"                                              color: rgb(25, 25, 25);\n"
"                                              text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          colo"
                        "r: rgb(5, 97, 245);\n"
"                                          }"));

        verticalLayout_2->addWidget(pushButton_generate_imp_doz);

        horizontalLayout_tab_11_ = new QHBoxLayout();
        horizontalLayout_tab_11_->setSpacing(25);
        horizontalLayout_tab_11_->setObjectName("horizontalLayout_tab_11_");
        horizontalLayout_tab_11_->setContentsMargins(23, -1, 24, -1);
        list_tools_imp_templates = new QComboBox(tab_2);
        list_tools_imp_templates->setObjectName("list_tools_imp_templates");
        sizePolicy6.setHeightForWidth(list_tools_imp_templates->sizePolicy().hasHeightForWidth());
        list_tools_imp_templates->setSizePolicy(sizePolicy6);
        list_tools_imp_templates->setFont(font);

        horizontalLayout_tab_11_->addWidget(list_tools_imp_templates);

        pushButton_save_imp_doz = new QPushButton(tab_2);
        pushButton_save_imp_doz->setObjectName("pushButton_save_imp_doz");
        sizePolicy7.setHeightForWidth(pushButton_save_imp_doz->sizePolicy().hasHeightForWidth());
        pushButton_save_imp_doz->setSizePolicy(sizePolicy7);
        pushButton_save_imp_doz->setFont(font);
        pushButton_save_imp_doz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: #FFFFFF;\n"
"                                           border: 1px solid rgb(79, 79, 79);\n"
"                                              color: rgb(25, 25, 25);\n"
"                                              text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          color: rgb(5, 97, 245);\n"
"                                          }"));

        horizontalLayout_tab_11_->addWidget(pushButton_save_imp_doz);

        pushButton_delete_imp_doz = new QPushButton(tab_2);
        pushButton_delete_imp_doz->setObjectName("pushButton_delete_imp_doz");
        sizePolicy7.setHeightForWidth(pushButton_delete_imp_doz->sizePolicy().hasHeightForWidth());
        pushButton_delete_imp_doz->setSizePolicy(sizePolicy7);
        pushButton_delete_imp_doz->setFont(font);
        pushButton_delete_imp_doz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                          background-color: #FFFFFF;\n"
"                                           border: 1px solid rgb(79, 79, 79);\n"
"                                              color: rgb(25, 25, 25);\n"
"                                              text-align:center;\n"
"                                          }\n"
"                                          QPushButton:hover {\n"
"                                           border-color: rgb(82, 168, 236);\n"
"                                          border-radius: 0px;\n"
"                                          color: rgb(82, 168, 236);\n"
"                                          }\n"
"                                          QPushButton:pressed {\n"
"                                          border-color: rgb(5, 97, 245);\n"
"                                          border-radius: 10px;\n"
"                                          color: rgb(5, 97, 245);\n"
"                                          }"));

        horizontalLayout_tab_11_->addWidget(pushButton_delete_imp_doz);


        verticalLayout_2->addLayout(horizontalLayout_tab_11_);

        verticalLayout_2->setStretch(0, 22);
        verticalLayout_2->setStretch(2, 1);
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 22);
        gridLayout->setRowStretch(2, 5);
        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1297, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_2);
        menu_2->addAction(action);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dozing", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        textEdit_console->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        pushButton_port_connection->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214", nullptr));
        label_connection_status->setText(QCoreApplication::translate("MainWindow", " \320\236\321\202\320\272\320\273\321\216\321\207\320\265\320\275", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_extruder_temp_down->setText(QCoreApplication::translate("MainWindow", "T1\360\237\241\207", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
        pushButton_extruder_temp_up->setText(QCoreApplication::translate("MainWindow", "T1\360\237\241\205", nullptr));
        label_main_axes->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_send_gcode->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_main_axes_up->setText(QCoreApplication::translate("MainWindow", "X\360\237\241\205", nullptr));
        pushButton_main_axes_down->setText(QCoreApplication::translate("MainWindow", "X\360\237\241\207", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        pushButton_bed_temp_down->setText(QCoreApplication::translate("MainWindow", "T2\360\237\241\207", nullptr));
        pushButton_bed_temp_up->setText(QCoreApplication::translate("MainWindow", "T2\360\237\241\205", nullptr));
        label_127->setText(QCoreApplication::translate("MainWindow", "G-code", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263(\320\274\320\274)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\260\321\217 \320\276\321\201\321\214", nullptr));
        comboBox_main_axes->setItemText(0, QCoreApplication::translate("MainWindow", "X", nullptr));
        comboBox_main_axes->setItemText(1, QCoreApplication::translate("MainWindow", "Y", nullptr));
        comboBox_main_axes->setItemText(2, QCoreApplication::translate("MainWindow", "Z", nullptr));
        comboBox_main_axes->setItemText(3, QCoreApplication::translate("MainWindow", "E", nullptr));

        label_24->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214(\320\274\320\274/\320\274\320\270\320\275)", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\270\320\275)", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274 \320\272\320\260\320\277\320\273\320\270(\320\274\320\272\320\273)", nullptr));
        lineEdit_working_volume->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        lineEdit_drop_volume->setText(QCoreApplication::translate("MainWindow", "700", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\273)", nullptr));
        lineEdit_dosing_coeff->setText(QCoreApplication::translate("MainWindow", "14.064", nullptr));
        label_174->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        lineEdit_retraction_speed->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        lineEdit_extrusion_speed->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\202\321\217\320\263\320\270\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\270\320\275)", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \320\276\320\261\321\212\320\265\320\274(\320\274\320\273)", nullptr));
        label_12_->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\215\320\272\321\201\321\202\321\200\321\203\320\264\320\265\321\200\320\260(\302\260C)", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \321\201\321\202\320\276\320\273\320\260(\302\260C)", nullptr));
        lineEdit_coeff_retract->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        comboBox_working_axis_simp->setItemText(0, QCoreApplication::translate("MainWindow", "X", nullptr));
        comboBox_working_axis_simp->setItemText(1, QCoreApplication::translate("MainWindow", "Y", nullptr));
        comboBox_working_axis_simp->setItemText(2, QCoreApplication::translate("MainWindow", "Z", nullptr));
        comboBox_working_axis_simp->setItemText(3, QCoreApplication::translate("MainWindow", "E", nullptr));

        label_working_axis_simp->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\260\321\217 \320\276\321\201\321\214", nullptr));
        pushButton_generate_simple_doz->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_save_simple_doz->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\210\320\260\320\261\320\273\320\276\320\275", nullptr));
        pushButton_delete_simple_doz->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\210\320\260\320\261\320\273\320\276\320\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\276\320\265 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274 \320\272\320\260\320\277\320\273\320\270(\320\274\320\272\320\273)", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \320\276\320\261\321\212\320\265\320\274(\320\274\320\273)", nullptr));
        lineEdit_retraction_speed_imp->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260  \321\215\320\272\321\201\321\202\321\200\321\203\320\264\320\265\321\200\320\260(\302\260C)", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \321\201\321\202\320\276\320\273\320\260(\302\260C)", nullptr));
        comboBox_imp_pause->setItemText(0, QCoreApplication::translate("MainWindow", "\320\246\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260", nullptr));
        comboBox_imp_pause->setItemText(1, QCoreApplication::translate("MainWindow", "\320\234\320\265\320\266\321\206\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260", nullptr));

        label_14->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\273)", nullptr));
        lineEdit_pause_imp->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        lineEdit_extrusion_speed_imp->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\270\320\275)", nullptr));
        lineEdit_drop_volume_imp->setText(QCoreApplication::translate("MainWindow", "700", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\202\321\217\320\263\320\270\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\270\320\275)", nullptr));
        label_175->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        lineEdit_coeff_retract_imp->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\277\320\260\321\203\320\267\321\213(\321\201\320\265\320\272)", nullptr));
        lineEdit_working_volume_imp->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        lineEdit_dosing_coeff_imp->setText(QCoreApplication::translate("MainWindow", "14.064", nullptr));
        comboBox_working_axis_imp->setItemText(0, QCoreApplication::translate("MainWindow", "X", nullptr));
        comboBox_working_axis_imp->setItemText(1, QCoreApplication::translate("MainWindow", "Y", nullptr));
        comboBox_working_axis_imp->setItemText(2, QCoreApplication::translate("MainWindow", "Z", nullptr));
        comboBox_working_axis_imp->setItemText(3, QCoreApplication::translate("MainWindow", "E", nullptr));

        label_working_axis_imp->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\260\321\217 \320\276\321\201\321\214", nullptr));
        pushButton_generate_imp_doz->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_save_imp_doz->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\210\320\260\320\261\320\273\320\276\320\275", nullptr));
        pushButton_delete_imp_doz->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\210\320\260\320\261\320\273\320\276\320\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\230\320\274\320\277\321\203\320\273\321\214\321\201\320\275\320\276\320\265 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
