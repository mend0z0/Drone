#include "_drone_login_page.h"
#include "ui__drone_login_page.h"

_drone_login_page::_drone_login_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::_drone_login_page)
{
    ui->setupUi(this);
}

_drone_login_page::~_drone_login_page()
{
    delete ui;
}
