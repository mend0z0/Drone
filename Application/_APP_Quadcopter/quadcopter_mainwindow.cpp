#include "quadcopter_mainwindow.h"
#include "ui_quadcopter_mainwindow.h"

Quadcopter_MainWindow::Quadcopter_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quadcopter_MainWindow)
{
    ui->setupUi(this);
    qcopterConsole->ObjectsDisable();       //I should disable them at first, so they have a valid state.

    ConnectFunctions();

}

Quadcopter_MainWindow::~Quadcopter_MainWindow()
{
    delete ui;
}

void Quadcopter_MainWindow::MQTTConsole()
{
    qcopterConsole->exec();
}

void Quadcopter_MainWindow::PlainTextUpdate(QString data)
{
    ui->plainTextEdit_DiagnosticText->appendPlainText(data);
}

void Quadcopter_MainWindow::ConnectFunctions()
{
    connect(ui->pushButton_ConnectServer, SIGNAL(clicked(bool)), this, SLOT(MQTTConsole()));
    connect(qcopterConsole, SIGNAL(QCopter_NewMessage(QString)), this, SLOT(PlainTextUpdate(QString)));
}

