#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <serialportcontroller.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void handleWrite();
    void handleRead(QByteArray readData);
    void handleError(QString errorString);

private:
    Ui::MainWindow *ui;
    SerialPortController *m_serialPortController;

    QSerialPort* identifyProbe();
};

#endif // MAINWINDOW_H
