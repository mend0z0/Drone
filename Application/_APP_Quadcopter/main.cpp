#include "quadcopter_mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Quadcopter_MainWindow w;
    w.show();
    return a.exec();
}
