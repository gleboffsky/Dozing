/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_port_connection;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_groupBox_8;
    QLineEdit *lineEdit_working_volume;
    QLabel *label_55;
    QLineEdit *lineEdit_retraction_speed;
    QLabel *label_36;
    QLabel *label_9;
    QLabel *label_56;
    QLineEdit *lineEdit_dosing_coeff;
    QLineEdit *lineEdit_drop_volume;
    QLabel *label_174;
    QLabel *label_10;
    QLineEdit *lineEdit_desktop_temperature;
    QLineEdit *lineEdit_extrusion_speed;
    QLineEdit *lineEdit_coeff_retract;
    QLineEdit *lineEdit_extruder_temperature;
    QLabel *label_11;
    QLabel *label_12_;
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
    QLineEdit *lineEdit_retraction_speed_imp;
    QLabel *label_58;
    QLabel *label_175;
    QLabel *label_14;
    QLineEdit *lineEdit_coeff_retract_imp;
    QLabel *label_13;
    QLineEdit *lineEdit_extruder_temperature_imp;
    QLineEdit *lineEdit_extrusion_speed_imp;
    QLineEdit *lineEdit_dosing_coeff_imp;
    QLabel *label_15;
    QLineEdit *lineEdit_desktop_temperature_imp;
    QLineEdit *lineEdit_working_volume_imp;
    QLabel *label_16;
    QLabel *label_57;
    QComboBox *comboBox_imp_pause;
    QLineEdit *lineEdit_drop_volume_imp;
    QLineEdit *lineEdit_pause_imp;
    QLabel *label;
    QPushButton *pushButton_generate_imp_doz;
    QHBoxLayout *horizontalLayout_tab_11_;
    QComboBox *list_tools_imp_templates;
    QPushButton *pushButton_save_imp_doz;
    QPushButton *pushButton_delete_imp_doz;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QProgressBar *progressBar;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdNumber_2;
    QPushButton *pushButton_22;
    QLabel *label_17;
    QLCDNumber *lcdNumber_3;
    QPushButton *pushButton_23;
    QLineEdit *lineEdit_95;
    QLabel *label_18;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_94;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLabel *label_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QLabel *label_127;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_24;
    QSpinBox *spinBox_2;
    QTextBrowser *textBrowser_console;
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
        MainWindow->setAutoFillBackground(false);
        MainWindow->setDockNestingEnabled(false);
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
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        pushButton_port_connection = new QPushButton(groupBox);
        pushButton_port_connection->setObjectName("pushButton_port_connection");
        QFont font;
        font.setPointSize(15);
        pushButton_port_connection->setFont(font);

        horizontalLayout_2->addWidget(pushButton_port_connection);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 50);

        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font1;
        font1.setPointSize(11);
        tabWidget->setFont(font1);
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
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        groupBox_12->setFont(font2);
        groupBox_12->setStyleSheet(QString::fromUtf8("QGroupBox {background-color: rgb(243, 243, 243);border: none;border-radius: 15px;}QGroupBox::title {subcontrol-origin: margin;subcontrol-position: top center;padding: 0 3px;}\n"
""));
        gridLayout_groupBox_8 = new QGridLayout(groupBox_12);
        gridLayout_groupBox_8->setObjectName("gridLayout_groupBox_8");
        gridLayout_groupBox_8->setHorizontalSpacing(6);
        gridLayout_groupBox_8->setContentsMargins(22, 22, -1, -1);
        lineEdit_working_volume = new QLineEdit(groupBox_12);
        lineEdit_working_volume->setObjectName("lineEdit_working_volume");
        QFont font3;
        font3.setPointSize(10);
        lineEdit_working_volume->setFont(font3);
        lineEdit_working_volume->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_working_volume, 4, 0, 1, 1);

        label_55 = new QLabel(groupBox_12);
        label_55->setObjectName("label_55");
        label_55->setFont(font3);
        label_55->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_55, 1, 1, 1, 1);

        lineEdit_retraction_speed = new QLineEdit(groupBox_12);
        lineEdit_retraction_speed->setObjectName("lineEdit_retraction_speed");
        lineEdit_retraction_speed->setFont(font3);
        lineEdit_retraction_speed->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_retraction_speed, 1, 0, 1, 1);

        label_36 = new QLabel(groupBox_12);
        label_36->setObjectName("label_36");
        label_36->setFont(font3);
        label_36->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        gridLayout_groupBox_8->addWidget(label_36, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_12);
        label_9->setObjectName("label_9");
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_9, 4, 1, 1, 1);

        label_56 = new QLabel(groupBox_12);
        label_56->setObjectName("label_56");
        label_56->setFont(font3);
        label_56->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_56, 2, 1, 1, 1);

        lineEdit_dosing_coeff = new QLineEdit(groupBox_12);
        lineEdit_dosing_coeff->setObjectName("lineEdit_dosing_coeff");
        lineEdit_dosing_coeff->setFont(font3);
        lineEdit_dosing_coeff->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_dosing_coeff, 5, 0, 1, 1);

        lineEdit_drop_volume = new QLineEdit(groupBox_12);
        lineEdit_drop_volume->setObjectName("lineEdit_drop_volume");
        lineEdit_drop_volume->setFont(font3);
        lineEdit_drop_volume->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_drop_volume, 0, 0, 1, 1);

        label_174 = new QLabel(groupBox_12);
        label_174->setObjectName("label_174");
        label_174->setFont(font3);
        label_174->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_174, 3, 1, 1, 1);

        label_10 = new QLabel(groupBox_12);
        label_10->setObjectName("label_10");
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_8->addWidget(label_10, 5, 1, 1, 1);

        lineEdit_desktop_temperature = new QLineEdit(groupBox_12);
        lineEdit_desktop_temperature->setObjectName("lineEdit_desktop_temperature");
        lineEdit_desktop_temperature->setFont(font3);
        lineEdit_desktop_temperature->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_desktop_temperature, 6, 0, 1, 1);

        lineEdit_extrusion_speed = new QLineEdit(groupBox_12);
        lineEdit_extrusion_speed->setObjectName("lineEdit_extrusion_speed");
        lineEdit_extrusion_speed->setFont(font3);
        lineEdit_extrusion_speed->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_extrusion_speed, 2, 0, 1, 1);

        lineEdit_coeff_retract = new QLineEdit(groupBox_12);
        lineEdit_coeff_retract->setObjectName("lineEdit_coeff_retract");
        lineEdit_coeff_retract->setFont(font3);
        lineEdit_coeff_retract->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_coeff_retract, 3, 0, 1, 1);

        lineEdit_extruder_temperature = new QLineEdit(groupBox_12);
        lineEdit_extruder_temperature->setObjectName("lineEdit_extruder_temperature");
        lineEdit_extruder_temperature->setFont(font3);
        lineEdit_extruder_temperature->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_8->addWidget(lineEdit_extruder_temperature, 7, 0, 1, 1);

        label_11 = new QLabel(groupBox_12);
        label_11->setObjectName("label_11");
        label_11->setFont(font3);

        gridLayout_groupBox_8->addWidget(label_11, 6, 1, 1, 1);

        label_12_ = new QLabel(groupBox_12);
        label_12_->setObjectName("label_12_");
        label_12_->setFont(font3);

        gridLayout_groupBox_8->addWidget(label_12_, 7, 1, 1, 1);

        gridLayout_groupBox_8->setColumnStretch(0, 1);
        gridLayout_groupBox_8->setColumnStretch(1, 3);

        verticalLayout->addWidget(groupBox_12);

        pushButton_generate_simple_doz = new QPushButton(tab);
        pushButton_generate_simple_doz->setObjectName("pushButton_generate_simple_doz");
        QFont font4;
        font4.setPointSize(12);
        pushButton_generate_simple_doz->setFont(font4);
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
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(list_tools_simple_templates->sizePolicy().hasHeightForWidth());
        list_tools_simple_templates->setSizePolicy(sizePolicy2);
        list_tools_simple_templates->setFont(font4);

        horizontalLayout_tab_11_1->addWidget(list_tools_simple_templates);

        pushButton_save_simple_doz = new QPushButton(tab);
        pushButton_save_simple_doz->setObjectName("pushButton_save_simple_doz");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_save_simple_doz->sizePolicy().hasHeightForWidth());
        pushButton_save_simple_doz->setSizePolicy(sizePolicy3);
        pushButton_save_simple_doz->setFont(font4);
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
        sizePolicy3.setHeightForWidth(pushButton_delete_simple_doz->sizePolicy().hasHeightForWidth());
        pushButton_delete_simple_doz->setSizePolicy(sizePolicy3);
        pushButton_delete_simple_doz->setFont(font4);
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
        groupBox_13->setFont(font2);
        groupBox_13->setStyleSheet(QString::fromUtf8("QGroupBox {background-color: rgb(243, 243, 243);border: none;border-radius: 15px;}QGroupBox::title {subcontrol-origin: margin;subcontrol-position: top center;padding: 0 3px;}\n"
""));
        gridLayout_groupBox_9 = new QGridLayout(groupBox_13);
        gridLayout_groupBox_9->setObjectName("gridLayout_groupBox_9");
        gridLayout_groupBox_9->setHorizontalSpacing(6);
        gridLayout_groupBox_9->setContentsMargins(22, 22, -1, 0);
        label_37 = new QLabel(groupBox_13);
        label_37->setObjectName("label_37");
        label_37->setFont(font3);
        label_37->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        gridLayout_groupBox_9->addWidget(label_37, 0, 1, 1, 1);

        lineEdit_retraction_speed_imp = new QLineEdit(groupBox_13);
        lineEdit_retraction_speed_imp->setObjectName("lineEdit_retraction_speed_imp");
        lineEdit_retraction_speed_imp->setFont(font3);
        lineEdit_retraction_speed_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_retraction_speed_imp, 1, 0, 1, 1);

        label_58 = new QLabel(groupBox_13);
        label_58->setObjectName("label_58");
        label_58->setFont(font3);
        label_58->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_58, 2, 1, 1, 1);

        label_175 = new QLabel(groupBox_13);
        label_175->setObjectName("label_175");
        label_175->setFont(font3);
        label_175->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_175, 3, 1, 1, 1);

        label_14 = new QLabel(groupBox_13);
        label_14->setObjectName("label_14");
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_14, 5, 1, 1, 1);

        lineEdit_coeff_retract_imp = new QLineEdit(groupBox_13);
        lineEdit_coeff_retract_imp->setObjectName("lineEdit_coeff_retract_imp");
        lineEdit_coeff_retract_imp->setFont(font3);
        lineEdit_coeff_retract_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_coeff_retract_imp, 3, 0, 1, 1);

        label_13 = new QLabel(groupBox_13);
        label_13->setObjectName("label_13");
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_13, 4, 1, 1, 1);

        lineEdit_extruder_temperature_imp = new QLineEdit(groupBox_13);
        lineEdit_extruder_temperature_imp->setObjectName("lineEdit_extruder_temperature_imp");
        lineEdit_extruder_temperature_imp->setFont(font3);
        lineEdit_extruder_temperature_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_extruder_temperature_imp, 7, 0, 1, 1);

        lineEdit_extrusion_speed_imp = new QLineEdit(groupBox_13);
        lineEdit_extrusion_speed_imp->setObjectName("lineEdit_extrusion_speed_imp");
        lineEdit_extrusion_speed_imp->setFont(font3);
        lineEdit_extrusion_speed_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_extrusion_speed_imp, 2, 0, 1, 1);

        lineEdit_dosing_coeff_imp = new QLineEdit(groupBox_13);
        lineEdit_dosing_coeff_imp->setObjectName("lineEdit_dosing_coeff_imp");
        lineEdit_dosing_coeff_imp->setFont(font3);
        lineEdit_dosing_coeff_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_dosing_coeff_imp, 5, 0, 1, 1);

        label_15 = new QLabel(groupBox_13);
        label_15->setObjectName("label_15");
        label_15->setFont(font3);

        gridLayout_groupBox_9->addWidget(label_15, 6, 1, 1, 1);

        lineEdit_desktop_temperature_imp = new QLineEdit(groupBox_13);
        lineEdit_desktop_temperature_imp->setObjectName("lineEdit_desktop_temperature_imp");
        lineEdit_desktop_temperature_imp->setFont(font3);
        lineEdit_desktop_temperature_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_desktop_temperature_imp, 6, 0, 1, 1);

        lineEdit_working_volume_imp = new QLineEdit(groupBox_13);
        lineEdit_working_volume_imp->setObjectName("lineEdit_working_volume_imp");
        lineEdit_working_volume_imp->setFont(font3);
        lineEdit_working_volume_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_working_volume_imp, 4, 0, 1, 1);

        label_16 = new QLabel(groupBox_13);
        label_16->setObjectName("label_16");
        label_16->setFont(font3);

        gridLayout_groupBox_9->addWidget(label_16, 7, 1, 1, 1);

        label_57 = new QLabel(groupBox_13);
        label_57->setObjectName("label_57");
        label_57->setFont(font3);
        label_57->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout_groupBox_9->addWidget(label_57, 1, 1, 1, 1);

        comboBox_imp_pause = new QComboBox(groupBox_13);
        comboBox_imp_pause->addItem(QString());
        comboBox_imp_pause->addItem(QString());
        comboBox_imp_pause->setObjectName("comboBox_imp_pause");
        comboBox_imp_pause->setFont(font1);
        comboBox_imp_pause->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(comboBox_imp_pause, 9, 0, 1, 1);

        lineEdit_drop_volume_imp = new QLineEdit(groupBox_13);
        lineEdit_drop_volume_imp->setObjectName("lineEdit_drop_volume_imp");
        lineEdit_drop_volume_imp->setFont(font3);
        lineEdit_drop_volume_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_drop_volume_imp, 0, 0, 1, 1);

        lineEdit_pause_imp = new QLineEdit(groupBox_13);
        lineEdit_pause_imp->setObjectName("lineEdit_pause_imp");
        lineEdit_pause_imp->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_groupBox_9->addWidget(lineEdit_pause_imp, 8, 0, 1, 1);

        label = new QLabel(groupBox_13);
        label->setObjectName("label");

        gridLayout_groupBox_9->addWidget(label, 8, 1, 1, 1);

        gridLayout_groupBox_9->setColumnStretch(0, 1);
        gridLayout_groupBox_9->setColumnStretch(1, 3);

        verticalLayout_2->addWidget(groupBox_13);

        pushButton_generate_imp_doz = new QPushButton(tab_2);
        pushButton_generate_imp_doz->setObjectName("pushButton_generate_imp_doz");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_generate_imp_doz->sizePolicy().hasHeightForWidth());
        pushButton_generate_imp_doz->setSizePolicy(sizePolicy4);
        pushButton_generate_imp_doz->setFont(font4);
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
        sizePolicy2.setHeightForWidth(list_tools_imp_templates->sizePolicy().hasHeightForWidth());
        list_tools_imp_templates->setSizePolicy(sizePolicy2);
        list_tools_imp_templates->setFont(font4);

        horizontalLayout_tab_11_->addWidget(list_tools_imp_templates);

        pushButton_save_imp_doz = new QPushButton(tab_2);
        pushButton_save_imp_doz->setObjectName("pushButton_save_imp_doz");
        sizePolicy3.setHeightForWidth(pushButton_save_imp_doz->sizePolicy().hasHeightForWidth());
        pushButton_save_imp_doz->setSizePolicy(sizePolicy3);
        pushButton_save_imp_doz->setFont(font4);
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
        sizePolicy3.setHeightForWidth(pushButton_delete_imp_doz->sizePolicy().hasHeightForWidth());
        pushButton_delete_imp_doz->setSizePolicy(sizePolicy3);
        pushButton_delete_imp_doz->setFont(font4);
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);border: 1px solid rgb(121, 121, 121);border-radius: 0px;}QGroupBox::title {subcontrol-origin: margin;subcontrol-position: top center;padding: 0 3px;background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgb(90, 200, 255), stop: 1 rgb(255, 255, 255))"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        lcdNumber_2 = new QLCDNumber(groupBox_2);
        lcdNumber_2->setObjectName("lcdNumber_2");
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lcdNumber_2->sizePolicy().hasHeightForWidth());
        lcdNumber_2->setSizePolicy(sizePolicy5);
        QFont font5;
        font5.setPointSize(5);
        lcdNumber_2->setFont(font5);
        lcdNumber_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_2->addWidget(lcdNumber_2, 1, 2, 1, 2);

        pushButton_22 = new QPushButton(groupBox_2);
        pushButton_22->setObjectName("pushButton_22");
        QFont font6;
        font6.setPointSize(35);
        font6.setStyleStrategy(QFont::PreferAntialias);
        pushButton_22->setFont(font6);
        pushButton_22->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
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

        gridLayout_2->addWidget(pushButton_22, 3, 2, 1, 2);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName("label_17");
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy6);
        QFont font7;
        font7.setPointSize(25);
        label_17->setFont(font7);
        label_17->setStyleSheet(QString::fromUtf8("border:none"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_17, 0, 4, 1, 2);

        lcdNumber_3 = new QLCDNumber(groupBox_2);
        lcdNumber_3->setObjectName("lcdNumber_3");
        sizePolicy5.setHeightForWidth(lcdNumber_3->sizePolicy().hasHeightForWidth());
        lcdNumber_3->setSizePolicy(sizePolicy5);
        lcdNumber_3->setFont(font5);
        lcdNumber_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));

        gridLayout_2->addWidget(lcdNumber_3, 1, 4, 1, 2);

        pushButton_23 = new QPushButton(groupBox_2);
        pushButton_23->setObjectName("pushButton_23");
        sizePolicy4.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy4);
        pushButton_23->setFont(font6);
        pushButton_23->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
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

        gridLayout_2->addWidget(pushButton_23, 2, 2, 1, 2);

        lineEdit_95 = new QLineEdit(groupBox_2);
        lineEdit_95->setObjectName("lineEdit_95");
        lineEdit_95->setFont(font4);

        gridLayout_2->addWidget(lineEdit_95, 6, 1, 1, 4);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName("label_18");
        sizePolicy6.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy6);
        QFont font8;
        font8.setPointSize(25);
        font8.setBold(false);
        font8.setStyleStrategy(QFont::PreferDefault);
        label_18->setFont(font8);
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setStyleSheet(QString::fromUtf8("border:none"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_18, 0, 0, 1, 2);

        lcdNumber = new QLCDNumber(groupBox_2);
        lcdNumber->setObjectName("lcdNumber");
        sizePolicy5.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy5);
        lcdNumber->setFont(font5);
        lcdNumber->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        lcdNumber->setProperty("intValue", QVariant(5));

        gridLayout_2->addWidget(lcdNumber, 1, 0, 1, 2);

        pushButton_94 = new QPushButton(groupBox_2);
        pushButton_94->setObjectName("pushButton_94");
        pushButton_94->setFont(font4);

        gridLayout_2->addWidget(pushButton_94, 6, 5, 1, 1);

        pushButton_20 = new QPushButton(groupBox_2);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy4.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy4);
        pushButton_20->setFont(font6);
        pushButton_20->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
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

        gridLayout_2->addWidget(pushButton_20, 2, 0, 1, 2);

        pushButton_21 = new QPushButton(groupBox_2);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setFont(font6);
        pushButton_21->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
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

        gridLayout_2->addWidget(pushButton_21, 3, 0, 1, 2);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName("label_23");
        sizePolicy6.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy6);
        label_23->setFont(font7);
        label_23->setStyleSheet(QString::fromUtf8("border:none"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_23, 0, 2, 1, 2);

        pushButton_24 = new QPushButton(groupBox_2);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setFont(font6);
        pushButton_24->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
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

        gridLayout_2->addWidget(pushButton_24, 3, 4, 1, 2);

        pushButton_25 = new QPushButton(groupBox_2);
        pushButton_25->setObjectName("pushButton_25");
        sizePolicy4.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy4);
        pushButton_25->setFont(font6);
        pushButton_25->setStyleSheet(QString::fromUtf8("                                          background-color: #FFFFFF;\n"
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

        gridLayout_2->addWidget(pushButton_25, 2, 4, 1, 2);

        label_127 = new QLabel(groupBox_2);
        label_127->setObjectName("label_127");
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Yu Gothic Medium")});
        font9.setPointSize(12);
        font9.setStyleStrategy(QFont::PreferAntialias);
        label_127->setFont(font9);
        label_127->setStyleSheet(QString::fromUtf8("border:none"));
        label_127->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_127, 6, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        sizePolicy6.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy6);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        horizontalLayout_3->addWidget(label_4);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName("spinBox");
        sizePolicy6.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy6);
        QFont font10;
        font10.setPointSize(12);
        font10.setBold(false);
        spinBox->setFont(font10);

        horizontalLayout_3->addWidget(spinBox);

        horizontalLayout_3->setStretch(1, 7);

        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName("label_24");
        sizePolicy6.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy6);
        label_24->setFont(font4);
        label_24->setStyleSheet(QString::fromUtf8("border:none"));

        horizontalLayout_4->addWidget(label_24);

        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName("spinBox_2");
        sizePolicy4.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy4);
        spinBox_2->setFont(font4);

        horizontalLayout_4->addWidget(spinBox_2);

        horizontalLayout_4->setStretch(1, 7);

        gridLayout_2->addLayout(horizontalLayout_4, 5, 0, 1, 6);

        gridLayout_2->setRowStretch(0, 10);

        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        textBrowser_console = new QTextBrowser(centralwidget);
        textBrowser_console->setObjectName("textBrowser_console");
        textBrowser_console->setFont(font4);

        gridLayout->addWidget(textBrowser_console, 2, 0, 1, 2);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 22);
        gridLayout->setRowStretch(2, 5);
        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1297, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton_port_connection->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " \320\236\321\202\320\272\320\273\321\216\321\207\320\265\320\275", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        lineEdit_working_volume->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\202\321\217\320\263\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        lineEdit_retraction_speed->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274 \320\272\320\260\320\277\320\273\320\270(\320\274\320\272\320\273)", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \320\276\320\261\321\212\320\265\320\274(\320\274\320\273)", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        lineEdit_dosing_coeff->setText(QCoreApplication::translate("MainWindow", "14.064", nullptr));
        lineEdit_drop_volume->setText(QCoreApplication::translate("MainWindow", "700", nullptr));
        label_174->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\273)", nullptr));
        lineEdit_extrusion_speed->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        lineEdit_coeff_retract->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \321\201\321\202\320\276\320\273\320\260", nullptr));
        label_12_->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\215\320\272\321\201\321\202\321\200\321\203\320\264\320\265\321\200\320\260", nullptr));
        pushButton_generate_simple_doz->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_save_simple_doz->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202", nullptr));
        pushButton_delete_simple_doz->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\276\320\265 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274 \320\272\320\260\320\277\320\273\320\270(\320\274\320\272\320\273)", nullptr));
        lineEdit_retraction_speed_imp->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_175->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\262\321\213\320\264\320\260\320\262\320\273\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217(\320\274\320\274/\320\274\320\273)", nullptr));
        lineEdit_coeff_retract_imp->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \320\276\320\261\321\212\320\265\320\274(\320\274\320\273)", nullptr));
        lineEdit_extrusion_speed_imp->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        lineEdit_dosing_coeff_imp->setText(QCoreApplication::translate("MainWindow", "14.064", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \321\201\321\202\320\276\320\273\320\260", nullptr));
        lineEdit_working_volume_imp->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260  \321\215\320\272\321\201\321\202\321\200\321\203\320\264\320\265\321\200\320\260", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\321\202\321\217\320\263\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        comboBox_imp_pause->setItemText(0, QCoreApplication::translate("MainWindow", "\320\246\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260", nullptr));
        comboBox_imp_pause->setItemText(1, QCoreApplication::translate("MainWindow", "\320\234\320\265\320\266\321\206\320\270\320\272\320\273\320\276\320\262\320\260\321\217 \320\277\320\260\321\203\320\267\320\260", nullptr));

        lineEdit_drop_volume_imp->setText(QCoreApplication::translate("MainWindow", "700", nullptr));
        lineEdit_pause_imp->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\277\320\260\321\203\320\267\321\213", nullptr));
        pushButton_generate_imp_doz->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_save_imp_doz->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202", nullptr));
        pushButton_delete_imp_doz->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\230\320\274\320\277\321\203\320\273\321\214\321\201\320\275\320\276\320\265 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "T1\360\237\241\207", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "T1\360\237\241\205", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        pushButton_94->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "E\360\237\241\205", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "E\360\237\241\207", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "T2\360\237\241\207", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "T2\360\237\241\205", nullptr));
        label_127->setText(QCoreApplication::translate("MainWindow", "G-code", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        textBrowser_console->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">CONSOLE CONSOLE CONSOLE CONSOLE CONSOLE CONSOLE CONSOLE CONSOLE </span></p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\200\320\262\320\270\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H