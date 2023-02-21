#ifndef DELETETEMPLATE_H
#define DELETETEMPLATE_H
#include <iostream> 
#include <QDialog>
#include <nlohmann/json.hpp>
#include <fstream>

namespace Ui {
class DeleteTemplate;
}

class DeleteTemplate : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteTemplate(QWidget *parent = nullptr);
    ~DeleteTemplate();

signals:
    void template_deleted(std::string);

private:
    std::string name;
    std::string kind;
    Ui::DeleteTemplate *ui;
    char* user = getenv("username");
    std::string commands_path = "C:\\Users\\" + std::string(user) + "\\Documents\\Dozing";

public slots:
    void change_template_name(std::string kind, std::string name);

private slots:
    void on_buttonBox_accepted();
};

#endif // DELETETEMPLATE_H
