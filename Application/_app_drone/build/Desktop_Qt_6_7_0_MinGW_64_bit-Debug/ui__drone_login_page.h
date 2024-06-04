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
    QLabel *label_userLoginLbl;

    void setupUi(QDialog *_drone_login_page)
    {
        if (_drone_login_page->objectName().isEmpty())
            _drone_login_page->setObjectName("_drone_login_page");
        _drone_login_page->resize(240, 320);
        pushButton_login = new QPushButton(_drone_login_page);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(70, 230, 93, 29));
        pushButton_exit = new QPushButton(_drone_login_page);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(70, 270, 93, 29));
        lineEdit_username = new QLineEdit(_drone_login_page);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(50, 110, 171, 26));
        lineEdit_password = new QLineEdit(_drone_login_page);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(50, 150, 171, 26));
        label_username = new QLabel(_drone_login_page);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(10, 110, 26, 26));
        label_username->setPixmap(QPixmap(QString::fromUtf8(":/resources/Icons/username icon.png")));
        label_username->setScaledContents(true);
        label_password = new QLabel(_drone_login_page);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(10, 150, 26, 26));
        label_password->setPixmap(QPixmap(QString::fromUtf8(":/resources/Icons/Password icon.png")));
        label_password->setScaledContents(true);
        pushButton_showPassword = new QPushButton(_drone_login_page);
        pushButton_showPassword->setObjectName("pushButton_showPassword");
        pushButton_showPassword->setGeometry(QRect(195, 150, 26, 26));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/Icons/show-password.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showPassword->setIcon(icon);
        label_userLoginLbl = new QLabel(_drone_login_page);
        label_userLoginLbl->setObjectName("label_userLoginLbl");
        label_userLoginLbl->setGeometry(QRect(10, 20, 211, 41));

        retranslateUi(_drone_login_page);

        QMetaObject::connectSlotsByName(_drone_login_page);
    } // setupUi

    void retranslateUi(QDialog *_drone_login_page)
    {
        _drone_login_page->setWindowTitle(QCoreApplication::translate("_drone_login_page", "Dialog", nullptr));
        pushButton_login->setText(QCoreApplication::translate("_drone_login_page", "Log in", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("_drone_login_page", "Exit", nullptr));
        lineEdit_username->setText(QCoreApplication::translate("_drone_login_page", "User name / ID", nullptr));
        lineEdit_password->setText(QCoreApplication::translate("_drone_login_page", "Password", nullptr));
        label_username->setText(QString());
        label_password->setText(QString());
        pushButton_showPassword->setText(QString());
        label_userLoginLbl->setText(QCoreApplication::translate("_drone_login_page", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">USER LOGIN</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class _drone_login_page: public Ui__drone_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__DRONE_LOGIN_PAGE_H
