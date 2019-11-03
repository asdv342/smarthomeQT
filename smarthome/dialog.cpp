#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    sql.sqlConnect("db_modelRoom.db");
    myCom=new serilportthread;
    myCom->start();
    connect(myCom,SIGNAL(senddata(QByteArray)),this,SLOT(getdata(QByteArray)));
    handle=new SerialDataHandle;
    connect(handle,SIGNAL(evt_deviceState(QString,QString,QString)),
            this,SLOT(setdataonui(QString,QString,QString)));
    server=new TcpServer(this);
    server->listen(QHostAddress::Any,6001);
    connect(server,SIGNAL(evt_configBoardId()),this,SLOT(receivewgdata()));
    client=new TcpClientThread();
    client->serverIP="192.168.1.1";
    connect(client,SIGNAL(evt_socket_receive(QString,uint,uint,uint)),
            this,SLOT(getandroiddata(QString,uint,uint,uint)));
    client->start();
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::receivewgdata()
{
    handle->init();
}
void Dialog::getandroiddata(QString type, unsigned int command, unsigned int cmdCode, unsigned int channel)
{
    unsigned int pcmd[9];
    pcmd[0]=0;
    pcmd[1]=0;
    pcmd[2]=0x01;
    pcmd[3]=0xee;
    pcmd[4]=0x03;
    pcmd[5]=0;
    pcmd[6]=cmdCode;
    pcmd[7]=command;
    pcmd[8]=channel;
    handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[type],pcmd,9);
}

void Dialog::getdata(QByteArray array)
{
    handle->receive(array);
}
void Dialog::setdataonui(QString type, QString cmdCode, QString value)
{
    if (client->getTcpClientFlag())
            client->upload(type,cmdCode,value);
    if(type==TEMP_SERVE)
    {
        ui->wendu->setText(value);
    }
    if(type==HUM_SERVE)
    {
        ui->shidu->setText(value);
    }
    if(type==ILL_SERVE)
    {
        ui->guangzhao->setText(value);
    }
    if(type==SMK_SERVE)
    {
        ui->yanwu->setText(value);
    }
    if(type==GAS_SERVE)
    {
        ui->ranqi->setText(value);
    }
    if(type==PM25_SERVE)
    {
        ui->pm25->setText(value);
    }
    if(type==CO2_SERVE)
    {
        ui->co2->setText(value);
    }
    if(type==AP_SERVE)
    {
        ui->qiya->setText(value);
    }
    if(type==HI_SERVE)
    {
        ui->rentihongwai->setText(value);
    }
}

void Dialog::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x01;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=SWITCH_ON;
        pcmd[8]=CHANNEL_ALL;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[LAMP_SERVE],pcmd,9);
    }
    else
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x01;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=SWITCH_OFF;
        pcmd[8]=CHANNEL_ALL;
    handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[LAMP_SERVE],pcmd,9);
    }
}

void Dialog::on_checkBox_2_clicked(bool checked)
{
    if(checked)
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x01;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=SWITCH_ON;
        pcmd[8]=CHANNEL_ALL;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[FAN_SERVE],pcmd,9);
    }
    else
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x01;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=SWITCH_OFF;
        pcmd[8]=CHANNEL_ALL;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[FAN_SERVE],pcmd,9);
    }
}

void Dialog::on_checkBox_3_clicked(bool checked)
{
    if(checked)
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x01;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=SWITCH_ON;
        pcmd[8]=CHANNEL_ALL;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[WL_SERVE],pcmd,9);
    }
    else
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x01;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=SWITCH_OFF;
        pcmd[8]=CHANNEL_ALL;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[WL_SERVE],pcmd,9);
    }
}

void Dialog::on_checkBox_4_clicked(bool checked)
{
    if(checked)
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x0B;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=(TV_OPEN&0xf);
        pcmd[8]=(TV_OPEN>>8)&0xf;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[INFRARED_SERVE],pcmd,9);
    }
    else
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x0B;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=(TV_CLOSE&0xf);
        pcmd[8]=(TV_CLOSE>>8)&0xf;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[INFRARED_SERVE],pcmd,9);
    }
}

void Dialog::on_checkBox_5_clicked(bool checked)
{
    if(checked)
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x0B;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=(AIR_OPEN&0xf);
        pcmd[8]=(AIR_OPEN>>8)&0xf;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[INFRARED_SERVE],pcmd,9);
    }
    else
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x0B;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=(AIR_CLOSE&0xf);
        pcmd[8]=(AIR_CLOSE>>8)&0xf;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[INFRARED_SERVE],pcmd,9);
    }
}

void Dialog::on_checkBox_6_clicked(bool checked)
{
    if(checked)
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x0B;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=(DVD_OPEN&0xf);
        pcmd[8]=(DVD_OPEN>>8)&0xf;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[INFRARED_SERVE],pcmd,9);
    }
    else
    {
        unsigned int pcmd[9];
        pcmd[0]=0;
        pcmd[1]=0;
        pcmd[2]=0x0B;
        pcmd[3]=0xee;
        pcmd[4]=0x03;
        pcmd[5]=0;
        pcmd[6]=SWITCH;
        pcmd[7]=(DVD_CLOSE&0xf);
        pcmd[8]=(TV_CLOSE>>8)&0xf;
        handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[INFRARED_SERVE],pcmd,9);
    }
}

void Dialog::on_pushButton_clicked()
{
    unsigned int pcmd[9];
    pcmd[0]=0;
    pcmd[1]=0;
    pcmd[2]=0x0a;
    pcmd[3]=0xee;
    pcmd[4]=0x03;
    pcmd[5]=0;
    pcmd[6]=SWITCH;
    pcmd[7]=OPEN_DOOR;
    pcmd[8]=CHANNEL_1;
    handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[DC_SERVE],pcmd,9);
}

void Dialog::on_pushButton_2_clicked()
{
    unsigned int pcmd[9];
    pcmd[0]=0;
    pcmd[1]=0;
    pcmd[2]=0x01;
    pcmd[3]=0xee;
    pcmd[4]=0x03;
    pcmd[5]=0;
    pcmd[6]=SWITCH;
    pcmd[7]=SWITCH_ON;
    pcmd[8]=CURTAIN_ON;
    handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[CT_SERVE],pcmd,9);
}

void Dialog::on_pushButton_3_clicked()
{
    unsigned int pcmd[9];
    pcmd[0]=0;
    pcmd[1]=0;
    pcmd[2]=0x01;
    pcmd[3]=0xee;
    pcmd[4]=0x03;
    pcmd[5]=0;
    pcmd[6]=SWITCH;
    pcmd[7]=SWITCH_ON;
    pcmd[8]=CURTAIN_OFF;
    handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[CT_SERVE],pcmd,9);
}

void Dialog::on_pushButton_4_clicked()
{
    unsigned int pcmd[9];
    pcmd[0]=0;
    pcmd[1]=0;
    pcmd[2]=0x01;
    pcmd[3]=0xee;
    pcmd[4]=0x03;
    pcmd[5]=0;
    pcmd[6]=SWITCH;
    pcmd[7]=SWITCH_ON;
    pcmd[8]=CURTAIN_STOP;
    handle->sendingDataHandle(CONTROL,handle->sensorTypeToBoardIdMap[CT_SERVE],pcmd,9);
}
