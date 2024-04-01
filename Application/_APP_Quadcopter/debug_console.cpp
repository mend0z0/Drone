#include "debug_console.h"
#include "ui_debug_console.h"

debug_console::debug_console(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::debug_console)
{
    ui->setupUi(this);
}

debug_console::~debug_console()
{
    delete ui;
}
