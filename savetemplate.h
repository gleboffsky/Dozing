#ifndef SAVETEMPLATE_H
#define SAVETEMPLATE_H

#include <QDialog>

namespace Ui {
class SaveTemplate;
}

class SaveTemplate : public QDialog
{
    Q_OBJECT

public:
    explicit SaveTemplate(QWidget *parent = nullptr);
    ~SaveTemplate();

private:
    Ui::SaveTemplate *ui;

private slots:
    void on_buttonBox_accepted();

public slots:
    void change_template_name(std::string name);

signals:
    void save_simple_confirm(std::string);
    void save_imp_confirm(std::string);

};

#endif // SAVETEMPLATE_H
