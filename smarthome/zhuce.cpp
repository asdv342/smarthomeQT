#include "zhuce.h"
#include "ui_zhuce.h"
#include <QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>

zhuce::zhuce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhuce)
{
    ui->setupUi(this);
}

zhuce::~zhuce()
{
    delete ui;
}

void zhuce::on_pushButton_2_clicked()
{
    this->close();
}

void zhuce::on_pushButton_clicked()
{
            QString regname = ui->lineEdit->text();
            QString psw = ui->lineEdit_2->text();
            QString cpsw = ui->lineEdit_3->text();
            if(regname == "")
                {
                QMessageBox::critical(NULL,"注册错误","用户名不能为空！");
                }
            else if(psw == "")
                {
                QMessageBox::critical(NULL,"注册错误","密码不能为空！");
                }
            else if(cpsw == "")
                {
                QMessageBox::critical(NULL,"注册错误","确认密码不能为空！");
                }
            else if (psw!=cpsw)
                {
                QMessageBox::critical(NULL,"注册错误","两次密码不同！");
            }
            else
                    {
                        QString s=QString("select * from user where name='"+regname+"'");
                                       QSqlQuery query;
                                       if(query.exec(s)&&query.next()){
                                           QMessageBox::about(NULL,"警告","用户已存在");
                                       }
                        else
                        {
                            query.prepare("insert into user values (:name,:password)");
                            query.bindValue(":name ",ui->lineEdit->text());
                            query.bindValue(":password ",ui->lineEdit_2->text());
                            query.exec();
                            QMessageBox::about(NULL,"注册成功","欢迎使用");
                            this->close();
                        }
                    }
}
