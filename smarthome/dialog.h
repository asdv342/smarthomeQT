#ifndef DIALOG_H
#define DIALOG_H
#include <serilportthread.h>
#include <sql.h>
#include <serialdatahandle.h>
#include <tcpserver.h>
#include <tcpclientthread.h>

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    serilportthread *myCom;
    Sql sql;
    SerialDataHandle *handle;
    TcpServer *server;
    TcpClientThread *client;
    
private:
    Ui::Dialog *ui;
private slots:
    void getdata(QByteArray array);
    void getandroiddata(QString type,unsigned int command,unsigned int cmdCode,unsigned int channel);
    void setdataonui(QString a,QString b,QString c);
    void receivewgdata();
    void on_checkBox_clicked(bool checked);
    void on_checkBox_2_clicked(bool checked);
    void on_checkBox_3_clicked(bool checked);
    void on_checkBox_4_clicked(bool checked);
    void on_checkBox_5_clicked(bool checked);
    void on_checkBox_6_clicked(bool checked);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // DIALOG_H
