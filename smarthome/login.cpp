#include "login.h"
#include "ui_login.h"
#include <QString>
#include <QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{
    this->close();
}

void login::on_pushButton_clicked()
        {
            QString name=this->ui->lineEdit->text();
            QString psw=this->ui->lineEdit_2->text();
            QString s=QString("select * from user where name='"+name+"' and password='"+psw+"'");
                   QSqlQuery query;
                   if(query.exec(s)&&query.next()){
                        dialog_win=new Dialog;
                        dialog_win->show();
                       this->close();

                   }
              else {
                       QMessageBox::warning(NULL,"警告","帐号或密码错误！");
                   }
        }


void login::on_pushButton_3_clicked()
{
    zhuce_win=new zhuce;
    zhuce_win->show();
}
