#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ListCalc.h"
#include <QThread>
#include <QMainWindow>

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
    Ui::MainWindow* ui;
    QThread* thread;
    /**
     * @brief Object which contains methods that should be runned in another thread
     */
    Worker* worker;

private slots:
    void on_pushButton_port_connection_clicked();
    void on_pushButton_generate_simple_doz_clicked();
    void on_pushButton_generate_imp_doz_clicked();
};

#endif // MAINWINDOW_H
