#include "_drone_ui.h"
#include "ui__drone_ui.h"

_drone_UI::_drone_UI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::_drone_UI)
{
    ui->setupUi(this);
}

_drone_UI::~_drone_UI()
{
    delete ui;
}
