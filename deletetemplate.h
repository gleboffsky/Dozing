#ifndef DELETETEMPLATE_H
#define DELETETEMPLATE_H
#include <iostream> 
#include <QDialog>

namespace Ui {
class DeleteTemplate;
}

class DeleteTemplate : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteTemplate(QWidget *parent = nullptr);
    ~DeleteTemplate();

private:
    Ui::DeleteTemplate *ui;

public slots:
    void change_template_name(std::string name);

};

#endif // DELETETEMPLATE_H
