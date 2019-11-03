/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Sat Nov 2 23:04:03 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_3;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(640, 480);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 145, 67, 17));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 185, 67, 17));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 140, 101, 27));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 180, 101, 27));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 270, 81, 27));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 360, 101, 27));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100);"));
        pushButton_2->setCheckable(false);
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 640, 480));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/1201.jpg);"));
        pushButton_3 = new QPushButton(login);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 270, 81, 27));
        label_3->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("login", "\345\270\220\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("login", "\345\205\263\351\227\255\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        pushButton_3->setText(QApplication::translate("login", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
