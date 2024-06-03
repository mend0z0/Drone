/********************************************************************************
** Form generated from reading UI file '_drone_login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI__DRONE_LOGIN_PAGE_H
#define UI__DRONE_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui__drone_login_page
{
public:
    QPushButton *pushButton_login;
    QPushButton *pushButton_exit;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_username;
    QLabel *label_password;
    QPushButton *pushButton_showPassword;

    void setupUi(QDialog *_drone_login_page)
    {
        if (_drone_login_page->objectName().isEmpty())
            _drone_login_page->setObjectName("_drone_login_page");
        _drone_login_page->resize(320, 240);
        pushButton_login = new QPushButton(_drone_login_page);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(210, 190, 93, 29));
        pushButton_exit = new QPushButton(_drone_login_page);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(90, 190, 93, 29));
        lineEdit_username = new QLineEdit(_drone_login_page);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(90, 90, 113, 26));
        lineEdit_password = new QLineEdit(_drone_login_page);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(90, 130, 113, 26));
        label_username = new QLabel(_drone_login_page);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(10, 100, 63, 20));
        label_password = new QLabel(_drone_login_page);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(10, 140, 63, 20));
        pushButton_showPassword = new QPushButton(_drone_login_page);
        pushButton_showPassword->setObjectName("pushButton_showPassword");
        pushButton_showPassword->setGeometry(QRect(210, 130, 21, 21));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/Icons/show-password.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showPassword->setIcon(icon);

        retranslateUi(_drone_login_page);

        QMetaObject::connectSlotsByName(_drone_login_page);
    } // setupUi

    void retranslateUi(QDialog *_drone_login_page)
    {
        _drone_login_page->setWindowTitle(QCoreApplication::translate("_drone_login_page", "Dialog", nullptr));
        pushButton_login->setText(QCoreApplication::translate("_drone_login_page", "Login", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("_drone_login_page", "Exit", nullptr));
        label_username->setText(QCoreApplication::translate("_drone_login_page", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("_drone_login_page", "Password:", nullptr));
        pushButton_showPassword->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class _drone_login_page: public Ui__drone_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__DRONE_LOGIN_PAGE_H
