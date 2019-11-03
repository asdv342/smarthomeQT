#include "serilportthread.h"
#include <QDebug>
serilportthread::serilportthread()
{
}
void serilportthread::run()
{
myCom=new QextSerialPort("/dev/ttyUSB0",QextSerialPort::EventDriven);
myCom->setBaudRate(BAUD115200);
myCom->setDataBits(DATA_8);
myCom->setStopBits(STOP_1);
myCom->setFlowControl(FLOW_OFF);
myCom->setParity(PAR_NONE);
if(myCom->open(QIODevice::ReadWrite==true))
{
    qDebug("打开串口成功");
connect(myCom,SIGNAL(readyRead(startread())),this,SLOT(startread()));
spr=new SerialPortReceive;
connect(spr,SIGNAL(byteFinish(QByteArray)),this,SIGNAL(senddata(QByteArray)));
}
else
{
    qDebug("打开串口失败");
}
}
void serilportthread::startread()
{
QByteArray data=myCom->readAll();
spr->dataHandle(data);
}
void serilportthread::send(QByteArray a)
{
    myCom->flush();
    myCom->write(a);
}
