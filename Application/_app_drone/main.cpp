#include "_drone_main.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    _drone_main w;
    w.show();
    return a.exec();
}
