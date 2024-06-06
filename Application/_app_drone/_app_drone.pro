QT  += core gui
QT  += serialport
QT  += network
QT  += multimedia
QT  += mqtt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    _drone_login_page.cpp \
    _drone_mqtt_terminal.cpp \
    _drone_serial_terminal.cpp \
    _drone_udp_terminal.cpp \
    _drone_ui.cpp \
    _drone_wlr_terminal.cpp \
    main.cpp \
    _drone_main.cpp

HEADERS += \
    _drone_login_page.h \
    _drone_main.h \
    _drone_mqtt_terminal.h \
    _drone_serial_terminal.h \
    _drone_udp_terminal.h \
    _drone_ui.h \
    _drone_wlr_terminal.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    _drone_login_page.ui \
    _drone_mqtt_terminal.ui \
    _drone_serial_terminal.ui \
    _drone_udp_terminal.ui \
    _drone_ui.ui \
    _drone_wlr_terminal.ui

RESOURCES += \
    _drone_resources.qrc
