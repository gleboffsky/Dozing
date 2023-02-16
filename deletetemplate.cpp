#include "deletetemplate.h"
#include "ui_deletetemplate.h"


DeleteTemplate::DeleteTemplate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteTemplate)
{
    ui->setupUi(this);
 
}

DeleteTemplate::~DeleteTemplate()
{
    delete ui;
}

void DeleteTemplate::change_template_name(std::string input_kind, std::string input_name) {
    if (kind == "simp") {
        ui->label->setText("\xd0\xa3\xd0\xb4\xd0\xb0\xd0\xbb\xd0\xb8\xd1\x82\xd1\x8c \xd0\xbf\xd1\x80\xd0\xbe\xd1\x81\xd1\x82\xd0\xbe\xd0\xb5 \xd0\xb4\xd0\xbe\xd0\xb7\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb0\xd0\xbd\xd0\xb8\xd0\xb5");
    }
    else {
        ui->label->setText("\xd0\xa3\xd0\xb4\xd0\xb0\xd0\xbb\xd0\xb8\xd1\x82\xd1\x8c \xd0\xb8\xd0\xbc\xd0\xbf\xd1\x83\xd0\xbb\xd1\x8c\xd1\x81\xd0\xbd\xd0\xbe\xd0\xb5 \xd0\xb4\xd0\xbe\xd0\xb7\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb0\xd0\xbd\xd0\xb8\xd0\xb5");
    }
    name = input_name;
    kind = input_kind;
}
void DeleteTemplate::on_buttonBox_accepted()
{

    if (kind == "simp") {
        std::fstream fread("C:\\Users\\betterty\\Documents\\Dozing\\simple_templates.json", std::fstream::in | std::fstream::out);
        nlohmann::json data = nlohmann::json::parse(fread);
        fread.close();
        data.erase(name);
        std::ofstream fwrite("C:\\Users\\betterty\\Documents\\Dozing\\simple_templates.json");
        fwrite << data;
        fwrite.close();
        emit template_deleted("simple");
        close();

    }
    else {

        std::ifstream fread("C:\\Users\\betterty\\Documents\\Dozing\\imp_templates.json");
        nlohmann::json data = nlohmann::json::parse(fread);
        fread.close();
        data.erase(name);
        std::ofstream fwrite("C:\\Users\\betterty\\Documents\\Dozing\\imp_templates.json");
        fwrite << data;
        fwrite.close();
        emit template_deleted("imp");
        close();

    }
}

