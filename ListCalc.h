#ifndef ListCalc_H
#define Listcalc_H

#include <QObject>
#include <QMutex>
#include <fstream>

class Worker : public QObject
{
    Q_OBJECT

public:
    explicit Worker(QObject* parent = 0);
    /**
     * @brief Requests the process to start
     *
     * It is thread safe as it uses #mutex to protect access to #_working variable.
     */
    void requestWork();
    /**
     * @brief Requests the process to abort
     *
     * It is thread safe as it uses #mutex to protect access to #_abort variable.
     */
    void abort();
    bool connection_status;

private:

    /**
     * @brief Process is aborted when @em true
     */
    bool _abort;
    /**
     * @brief @em true when Worker is doing work
     */
    bool _working;
    /**
     * @brief Protects access to #_abort
     */
    QMutex mutex;

    char* user = getenv("username");
    std::string commands_path = "C:\\Users\\" + std::string(user) + "\\Documents\\Dozing\\scenario.txt";
    std::string settings_path = "C:\\Users\\" + std::string(user) + "\\Documents\\Dozing\\settings.txt";


signals:
    /**
     * @brief This signal is emitted when the Worker request to Work
     * @sa requestWork()
     */
    void workRequested();
    /**
     * @brief This signal is emitted when counted value is changed (every sec)
     */
    void valueChanged(const QString& value);
    /**
     * @brief This signal is emitted when process is finished (either by counting 60 sec or being aborted)
     */
    void finished();
    void data_update(std::string);



public slots:

    void doWork();

    void monitoring_coordinates(std::string current_command);

};

#endif // ListCalc_H