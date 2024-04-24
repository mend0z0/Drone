#include "quadcopter_login_page.h"
#include "ui_quadcopter_login_page.h"

quadcopter_login_page::quadcopter_login_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quadcopter_login_page)
{
    ui->setupUi(this);

    login_page.username = "admin_drone";
    login_page.password = "quadcopter_mend0z0";

    ui->lineEdit_valuePassword->setText(login_page.password);
    ui->lineEdit_valueUsername->setText(login_page.username);

    connect(ui->pushButton_check, SIGNAL(clicked(bool)), this, SLOT(LoginCheckResult()));
    connect(ui->pushButton_lock, SIGNAL(clicked(bool)), this, SLOT(LoginLockPanel()));
}

quadcopter_login_page::~quadcopter_login_page()
{
    delete ui;
}

void quadcopter_login_page::LoginCheckResult()
{
    QString tempPassword, tempUsername;

    tempPassword = ui->lineEdit_valuePassword->text();
    tempUsername = ui->lineEdit_valueUsername->text();

    if((tempPassword != login_page.password) || (tempUsername != login_page.username))
    {
        emit LoginPageCheckResult(false);
    }
    else
    {
        emit LoginPageCheckResult(true);
    }
}

void quadcopter_login_page::LoginLockPanel()
{
    //uncomment these stuff later
    //ui->lineEdit_valuePassword->clear();
    //ui->lineEdit_valueUsername->clear();
    emit LoginPageCheckResult(false);
}
