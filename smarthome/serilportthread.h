#ifndef SERILPORTTHREAD_H
#define SERILPORTTHREAD_H
#include <QThread>
#include <qextserialport.h>
#include <serialportreceive.h>
#include <sql.h>

class serilportthread:public QThread
{
    Q_OBJECT
public:
    serilportthread();
    void run();
    QextSerialPort *myCom;
    SerialPortReceive *spr;
    Sql sql;

private slots:
    void startread();
    void send(QByteArray a);
signals:
    void senddata(QByteArray array);
};

#endif // SERILPORTTHREAD_H
