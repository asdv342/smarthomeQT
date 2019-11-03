#include <QtGui/QApplication>
#include "dialog.h"
#include <login.h>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QSqlDatabase db;
       db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName("db_modelRoom.db");
       db.open();
       QSqlQuery sql;
       sql.exec("create table user(name,password)");
    QApplication a(argc, argv);
    login w;
    w.show();
    
    return a.exec();
}
