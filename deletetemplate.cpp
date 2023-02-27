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

    QString str = QString::fromStdString(input_name);
    ui->label->setText("\xd0\xa2\xd0\xbe\xd1\x87\xd0\xbd\xd0\xbe \xd1\x83\xd0\xb4\xd0\xb0\xd0\xbb\xd0\xb8\xd1\x82\xd1\x8c " + str + "?");
    name = input_name;
    kind = input_kind;
    
}
void DeleteTemplate::on_buttonBox_accepted()
{

    if (kind == "simp") {
        std::fstream fread(commands_path + "\\simple_templates.json", std::fstream::in | std::fstream::out);
        nlohmann::json data = nlohmann::json::parse(fread);
        fread.close();
        data.erase(name);
        std::ofstream fwrite(commands_path + "\\simple_templates.json");
        fwrite << data;
        fwrite.close();
        emit template_deleted("simple");
        close();
    }
    else {

        std::ifstream fread(commands_path + "\\imp_templates.json");
        nlohmann::json data = nlohmann::json::parse(fread);
        fread.close();
        data.erase(name);
        std::ofstream fwrite(commands_path + "\\imp_templates.json");
        fwrite << data;
        fwrite.close();
        emit template_deleted("imp");
        close();
    }
}

void DeleteTemplate::on_buttonBox_rejected() {
    close();
}