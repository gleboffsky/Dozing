#include "settings.h"
#include "ui_settings.h"
#include <fstream>
#include <filesystem>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{  
    ui->setupUi(this);
    fill_settings();
} 

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::fill_settings()
{
    try {
        std::vector<std::string> list_of_settings;
        std::string var;
        std::ifstream file;
        std::string settings_path = "C:\\Users\\" + std::string(getenv("username")) + "\\Documents\\Dozing\\settings.txt";
        if (!std::filesystem::exists(settings_path)) {
            std::ofstream file;
            file.open(settings_path);
            file << "COM5\n9600";
            file.close();
        }
        file.open(settings_path);
        for (; getline(file, var);) {
            list_of_settings.push_back(var);
        }
        file.close();
        ui->comboBox->setCurrentText(QString::fromStdString(list_of_settings[0]));
        ui->comboBox_2->setCurrentText(QString::fromStdString(list_of_settings[1]));
    }
    catch(...){
        qDebug() << "fill_settings error!";
    }
}

void Dialog::on_buttonBox_accepted()
{
    char* user = getenv("username");
    std::string commands_path = "C:\\Users\\" + std::string(user) + "\\Documents\\Dozing\\settings.txt";
    std::ofstream file;
    file.open(commands_path);
    file << ui->comboBox->currentText().toStdString()+"\n" << ui->comboBox_2->currentText().toInt()<<"\n";
    file.close();
}