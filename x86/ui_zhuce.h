/********************************************************************************
** Form generated from reading UI file 'zhuce.ui'
**
** Created: Sat Nov 2 23:20:00 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_H
#define UI_ZHUCE_H

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

class Ui_zhuce
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;

    void setupUi(QWidget *zhuce)
    {
        if (zhuce->objectName().isEmpty())
            zhuce->setObjectName(QString::fromUtf8("zhuce"));
        zhuce->resize(640, 480);
        label = new QLabel(zhuce);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 115, 67, 17));
        label_2 = new QLabel(zhuce);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 165, 67, 17));
        label_3 = new QLabel(zhuce);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 215, 67, 17));
        lineEdit = new QLineEdit(zhuce);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 110, 113, 27));
        lineEdit_2 = new QLineEdit(zhuce);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 160, 113, 27));
        lineEdit_3 = new QLineEdit(zhuce);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 210, 113, 27));
        pushButton = new QPushButton(zhuce);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 260, 98, 27));
        pushButton_2 = new QPushButton(zhuce);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 420, 98, 27));
        label_4 = new QLabel(zhuce);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 640, 480));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/1201.jpg);"));
        label_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(zhuce);

        QMetaObject::connectSlotsByName(zhuce);
    } // setupUi

    void retranslateUi(QWidget *zhuce)
    {
        zhuce->setWindowTitle(QApplication::translate("zhuce", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("zhuce", "\345\270\220\345\217\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("zhuce", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("zhuce", "\347\241\256\350\256\244\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("zhuce", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("zhuce", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhuce: public Ui_zhuce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_H
