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

public slots:
    void change_template_name(std::string name);
};

#endif // SAVETEMPLATE_H
