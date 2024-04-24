/********************************************************************************
** Form generated from reading UI file 'quadcopter_login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUADCOPTER_LOGIN_PAGE_H
#define UI_QUADCOPTER_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_quadcopter_login_page
{
public:
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_valueUsername;
    QLineEdit *lineEdit_valuePassword;
    QLabel *label_loginPage;
    QPushButton *pushButton_lock;
    QPushButton *pushButton_check;

    void setupUi(QDialog *quadcopter_login_page)
    {
        if (quadcopter_login_page->objectName().isEmpty())
            quadcopter_login_page->setObjectName("quadcopter_login_page");
        quadcopter_login_page->resize(320, 240);
        label_username = new QLabel(quadcopter_login_page);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(20, 80, 75, 20));
        label_password = new QLabel(quadcopter_login_page);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(20, 120, 75, 20));
        lineEdit_valueUsername = new QLineEdit(quadcopter_login_page);
        lineEdit_valueUsername->setObjectName("lineEdit_valueUsername");
        lineEdit_valueUsername->setGeometry(QRect(100, 80, 200, 25));
        lineEdit_valuePassword = new QLineEdit(quadcopter_login_page);
        lineEdit_valuePassword->setObjectName("lineEdit_valuePassword");
        lineEdit_valuePassword->setGeometry(QRect(100, 120, 200, 25));
        lineEdit_valuePassword->setEchoMode(QLineEdit::Password);
        label_loginPage = new QLabel(quadcopter_login_page);
        label_loginPage->setObjectName("label_loginPage");
        label_loginPage->setGeometry(QRect(60, 20, 200, 40));
        pushButton_lock = new QPushButton(quadcopter_login_page);
        pushButton_lock->setObjectName("pushButton_lock");
        pushButton_lock->setGeometry(QRect(55, 170, 100, 29));
        pushButton_check = new QPushButton(quadcopter_login_page);
        pushButton_check->setObjectName("pushButton_check");
        pushButton_check->setGeometry(QRect(165, 170, 100, 29));

        retranslateUi(quadcopter_login_page);

        QMetaObject::connectSlotsByName(quadcopter_login_page);
    } // setupUi

    void retranslateUi(QDialog *quadcopter_login_page)
    {
        quadcopter_login_page->setWindowTitle(QCoreApplication::translate("quadcopter_login_page", "Dialog", nullptr));
        label_username->setText(QCoreApplication::translate("quadcopter_login_page", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("quadcopter_login_page", "Password:", nullptr));
        label_loginPage->setText(QCoreApplication::translate("quadcopter_login_page", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Login Page</span></p></body></html>", nullptr));
        pushButton_lock->setText(QCoreApplication::translate("quadcopter_login_page", "Lock", nullptr));
        pushButton_check->setText(QCoreApplication::translate("quadcopter_login_page", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quadcopter_login_page: public Ui_quadcopter_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADCOPTER_LOGIN_PAGE_H
