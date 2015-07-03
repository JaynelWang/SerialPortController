#ifndef SERIALPORTCONTROLLER_H
#define SERIALPORTCONTROLLER_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QTimer>

class SerialPortController : public QObject
{
    Q_OBJECT
public:
    explicit SerialPortController(QSerialPort *serialPort, QObject *parent = 0);
    ~SerialPortController();

    void write(const QByteArray &writeData);

signals:
    readDone(QByteArray readData);
    errorOccur(QString errorString);

public slots:

private slots:
    void handleReadyRead();
    void handleTimeout();
    void handleError(QSerialPort::SerialPortError error);

private:
    QSerialPort *m_serialPort;
    QByteArray m_readData;
    QTimer m_timer;

    void startTimer(QTimer &timer);
};

#endif // SERIALPORTCONTROLLER_H
