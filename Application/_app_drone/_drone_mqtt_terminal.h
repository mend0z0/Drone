#ifndef _DRONE_MQTT_TERMINAL_H
#define _DRONE_MQTT_TERMINAL_H

#include <QDialog>

namespace Ui {
class _drone_mqtt_terminal;
}

class _drone_mqtt_terminal : public QDialog
{
    Q_OBJECT

public:
    explicit _drone_mqtt_terminal(QWidget *parent = nullptr);
    ~_drone_mqtt_terminal();

private:
    Ui::_drone_mqtt_terminal *ui;
};

#endif // _DRONE_MQTT_TERMINAL_H
