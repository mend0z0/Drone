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
    _drone_serialport.cpp \
    main.cpp \
    _drone_main.cpp

HEADERS += \
    _drone_login_page.h \
    _drone_main.h \
    _drone_serialport.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    _drone_login_page.ui \
    _drone_serialport.ui

RESOURCES += \
    _drone_resources.qrc
