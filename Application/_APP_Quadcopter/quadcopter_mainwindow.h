#ifndef QUADCOPTER_MAINWINDOW_H
#define QUADCOPTER_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Quadcopter_MainWindow; }
QT_END_NAMESPACE

class Quadcopter_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Quadcopter_MainWindow(QWidget *parent = nullptr);
    ~Quadcopter_MainWindow();

private:
    Ui::Quadcopter_MainWindow *ui;
};
#endif // QUADCOPTER_MAINWINDOW_H
