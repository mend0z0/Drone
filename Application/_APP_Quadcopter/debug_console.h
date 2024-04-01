#ifndef DEBUG_CONSOLE_H
#define DEBUG_CONSOLE_H

#include <QDialog>

namespace Ui {
class debug_console;
}

class debug_console : public QDialog
{
    Q_OBJECT

public:
    explicit debug_console(QWidget *parent = nullptr);
    ~debug_console();

private:
    Ui::debug_console *ui;
};

#endif // DEBUG_CONSOLE_H
