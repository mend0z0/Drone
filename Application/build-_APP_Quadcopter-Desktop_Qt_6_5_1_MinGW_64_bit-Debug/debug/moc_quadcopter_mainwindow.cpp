/****************************************************************************
** Meta object code from reading C++ file 'quadcopter_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../_APP_Quadcopter/quadcopter_mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quadcopter_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS = QtMocHelpers::stringData(
    "Quadcopter_MainWindow",
    "ServerConsole",
    "",
    "MQTTReceivedMsgGeneral",
    "QMqttMessage",
    "msg",
    "MQTTReceivedMsgStatus",
    "MQTTReceivedMsgCommand",
    "MQTTSentMsg",
    "MQTTUpdateServerStatus",
    "status",
    "UDPUpdateConnectionStatus",
    "LoRaWANUpdateConnectionStatus",
    "ButtonReadDisable",
    "ButtonReadEnable",
    "ButtonReadStatus",
    "ButtonForward",
    "ButtonReverse",
    "ButtonLeft",
    "ButtonRight",
    "AnimationButtonForward",
    "AnimationButtonReverse",
    "AnimationButtonLeft",
    "AnimationButtonRight",
    "GeologicalPosition",
    "value",
    "Throttle",
    "DroneSelectNext",
    "DroneSelectPrevious",
    "ButtonCameraShutter",
    "DroneDisplayCamera",
    "QByteArray*",
    "data",
    "QHostAddress*",
    "host",
    "quint16*",
    "port",
    "SaveLogFile",
    "QuadcopterPanelInit",
    "QuadcopterParamInit",
    "ClockInit",
    "LogPanelInit",
    "UpdateValueTemperature",
    "UpdateValueHumidity",
    "UpdateValuePressure",
    "UpdateValueBattery",
    "UpdateValueDisplacement",
    "UpdateValueSpeed",
    "UpdateValueHeight",
    "UpdateGeoPos",
    "UpdateDroneIndex",
    "uint8_t",
    "index",
    "UpdateDroneIPV4",
    "ipv4",
    "ClockUpdate",
    "KeyboardTimerUpdate",
    "QuadcopterParamUpdate",
    "inputObj"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t {
    uint offsetsAndSizes[118];
    char stringdata0[22];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[13];
    char stringdata5[4];
    char stringdata6[22];
    char stringdata7[23];
    char stringdata8[12];
    char stringdata9[23];
    char stringdata10[7];
    char stringdata11[26];
    char stringdata12[30];
    char stringdata13[18];
    char stringdata14[17];
    char stringdata15[17];
    char stringdata16[14];
    char stringdata17[14];
    char stringdata18[11];
    char stringdata19[12];
    char stringdata20[23];
    char stringdata21[23];
    char stringdata22[20];
    char stringdata23[21];
    char stringdata24[19];
    char stringdata25[6];
    char stringdata26[9];
    char stringdata27[16];
    char stringdata28[20];
    char stringdata29[20];
    char stringdata30[19];
    char stringdata31[12];
    char stringdata32[5];
    char stringdata33[14];
    char stringdata34[5];
    char stringdata35[9];
    char stringdata36[5];
    char stringdata37[12];
    char stringdata38[20];
    char stringdata39[20];
    char stringdata40[10];
    char stringdata41[13];
    char stringdata42[23];
    char stringdata43[20];
    char stringdata44[20];
    char stringdata45[19];
    char stringdata46[24];
    char stringdata47[17];
    char stringdata48[18];
    char stringdata49[13];
    char stringdata50[17];
    char stringdata51[8];
    char stringdata52[6];
    char stringdata53[16];
    char stringdata54[5];
    char stringdata55[12];
    char stringdata56[20];
    char stringdata57[22];
    char stringdata58[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "Quadcopter_MainWindow"
        QT_MOC_LITERAL(22, 13),  // "ServerConsole"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 22),  // "MQTTReceivedMsgGeneral"
        QT_MOC_LITERAL(60, 12),  // "QMqttMessage"
        QT_MOC_LITERAL(73, 3),  // "msg"
        QT_MOC_LITERAL(77, 21),  // "MQTTReceivedMsgStatus"
        QT_MOC_LITERAL(99, 22),  // "MQTTReceivedMsgCommand"
        QT_MOC_LITERAL(122, 11),  // "MQTTSentMsg"
        QT_MOC_LITERAL(134, 22),  // "MQTTUpdateServerStatus"
        QT_MOC_LITERAL(157, 6),  // "status"
        QT_MOC_LITERAL(164, 25),  // "UDPUpdateConnectionStatus"
        QT_MOC_LITERAL(190, 29),  // "LoRaWANUpdateConnectionStatus"
        QT_MOC_LITERAL(220, 17),  // "ButtonReadDisable"
        QT_MOC_LITERAL(238, 16),  // "ButtonReadEnable"
        QT_MOC_LITERAL(255, 16),  // "ButtonReadStatus"
        QT_MOC_LITERAL(272, 13),  // "ButtonForward"
        QT_MOC_LITERAL(286, 13),  // "ButtonReverse"
        QT_MOC_LITERAL(300, 10),  // "ButtonLeft"
        QT_MOC_LITERAL(311, 11),  // "ButtonRight"
        QT_MOC_LITERAL(323, 22),  // "AnimationButtonForward"
        QT_MOC_LITERAL(346, 22),  // "AnimationButtonReverse"
        QT_MOC_LITERAL(369, 19),  // "AnimationButtonLeft"
        QT_MOC_LITERAL(389, 20),  // "AnimationButtonRight"
        QT_MOC_LITERAL(410, 18),  // "GeologicalPosition"
        QT_MOC_LITERAL(429, 5),  // "value"
        QT_MOC_LITERAL(435, 8),  // "Throttle"
        QT_MOC_LITERAL(444, 15),  // "DroneSelectNext"
        QT_MOC_LITERAL(460, 19),  // "DroneSelectPrevious"
        QT_MOC_LITERAL(480, 19),  // "ButtonCameraShutter"
        QT_MOC_LITERAL(500, 18),  // "DroneDisplayCamera"
        QT_MOC_LITERAL(519, 11),  // "QByteArray*"
        QT_MOC_LITERAL(531, 4),  // "data"
        QT_MOC_LITERAL(536, 13),  // "QHostAddress*"
        QT_MOC_LITERAL(550, 4),  // "host"
        QT_MOC_LITERAL(555, 8),  // "quint16*"
        QT_MOC_LITERAL(564, 4),  // "port"
        QT_MOC_LITERAL(569, 11),  // "SaveLogFile"
        QT_MOC_LITERAL(581, 19),  // "QuadcopterPanelInit"
        QT_MOC_LITERAL(601, 19),  // "QuadcopterParamInit"
        QT_MOC_LITERAL(621, 9),  // "ClockInit"
        QT_MOC_LITERAL(631, 12),  // "LogPanelInit"
        QT_MOC_LITERAL(644, 22),  // "UpdateValueTemperature"
        QT_MOC_LITERAL(667, 19),  // "UpdateValueHumidity"
        QT_MOC_LITERAL(687, 19),  // "UpdateValuePressure"
        QT_MOC_LITERAL(707, 18),  // "UpdateValueBattery"
        QT_MOC_LITERAL(726, 23),  // "UpdateValueDisplacement"
        QT_MOC_LITERAL(750, 16),  // "UpdateValueSpeed"
        QT_MOC_LITERAL(767, 17),  // "UpdateValueHeight"
        QT_MOC_LITERAL(785, 12),  // "UpdateGeoPos"
        QT_MOC_LITERAL(798, 16),  // "UpdateDroneIndex"
        QT_MOC_LITERAL(815, 7),  // "uint8_t"
        QT_MOC_LITERAL(823, 5),  // "index"
        QT_MOC_LITERAL(829, 15),  // "UpdateDroneIPV4"
        QT_MOC_LITERAL(845, 4),  // "ipv4"
        QT_MOC_LITERAL(850, 11),  // "ClockUpdate"
        QT_MOC_LITERAL(862, 19),  // "KeyboardTimerUpdate"
        QT_MOC_LITERAL(882, 21),  // "QuadcopterParamUpdate"
        QT_MOC_LITERAL(904, 8)   // "inputObj"
    },
    "Quadcopter_MainWindow",
    "ServerConsole",
    "",
    "MQTTReceivedMsgGeneral",
    "QMqttMessage",
    "msg",
    "MQTTReceivedMsgStatus",
    "MQTTReceivedMsgCommand",
    "MQTTSentMsg",
    "MQTTUpdateServerStatus",
    "status",
    "UDPUpdateConnectionStatus",
    "LoRaWANUpdateConnectionStatus",
    "ButtonReadDisable",
    "ButtonReadEnable",
    "ButtonReadStatus",
    "ButtonForward",
    "ButtonReverse",
    "ButtonLeft",
    "ButtonRight",
    "AnimationButtonForward",
    "AnimationButtonReverse",
    "AnimationButtonLeft",
    "AnimationButtonRight",
    "GeologicalPosition",
    "value",
    "Throttle",
    "DroneSelectNext",
    "DroneSelectPrevious",
    "ButtonCameraShutter",
    "DroneDisplayCamera",
    "QByteArray*",
    "data",
    "QHostAddress*",
    "host",
    "quint16*",
    "port",
    "SaveLogFile",
    "QuadcopterPanelInit",
    "QuadcopterParamInit",
    "ClockInit",
    "LogPanelInit",
    "UpdateValueTemperature",
    "UpdateValueHumidity",
    "UpdateValuePressure",
    "UpdateValueBattery",
    "UpdateValueDisplacement",
    "UpdateValueSpeed",
    "UpdateValueHeight",
    "UpdateGeoPos",
    "UpdateDroneIndex",
    "uint8_t",
    "index",
    "UpdateDroneIPV4",
    "ipv4",
    "ClockUpdate",
    "KeyboardTimerUpdate",
    "QuadcopterParamUpdate",
    "inputObj"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuadcopter_MainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  284,    2, 0x08,    1 /* Private */,
       3,    1,  285,    2, 0x08,    2 /* Private */,
       6,    1,  288,    2, 0x08,    4 /* Private */,
       7,    1,  291,    2, 0x08,    6 /* Private */,
       8,    1,  294,    2, 0x08,    8 /* Private */,
       9,    1,  297,    2, 0x08,   10 /* Private */,
      11,    1,  300,    2, 0x08,   12 /* Private */,
      12,    1,  303,    2, 0x08,   14 /* Private */,
      13,    0,  306,    2, 0x08,   16 /* Private */,
      14,    0,  307,    2, 0x08,   17 /* Private */,
      15,    0,  308,    2, 0x08,   18 /* Private */,
      16,    0,  309,    2, 0x08,   19 /* Private */,
      17,    0,  310,    2, 0x08,   20 /* Private */,
      18,    0,  311,    2, 0x08,   21 /* Private */,
      19,    0,  312,    2, 0x08,   22 /* Private */,
      20,    0,  313,    2, 0x08,   23 /* Private */,
      21,    0,  314,    2, 0x08,   24 /* Private */,
      22,    0,  315,    2, 0x08,   25 /* Private */,
      23,    0,  316,    2, 0x08,   26 /* Private */,
      24,    1,  317,    2, 0x08,   27 /* Private */,
      26,    1,  320,    2, 0x08,   29 /* Private */,
      27,    0,  323,    2, 0x08,   31 /* Private */,
      28,    0,  324,    2, 0x08,   32 /* Private */,
      29,    0,  325,    2, 0x08,   33 /* Private */,
      30,    3,  326,    2, 0x08,   34 /* Private */,
      30,    2,  333,    2, 0x28,   38 /* Private | MethodCloned */,
      30,    1,  338,    2, 0x28,   41 /* Private | MethodCloned */,
      37,    0,  341,    2, 0x08,   43 /* Private */,
      38,    0,  342,    2, 0x08,   44 /* Private */,
      39,    0,  343,    2, 0x08,   45 /* Private */,
      40,    0,  344,    2, 0x08,   46 /* Private */,
      41,    0,  345,    2, 0x08,   47 /* Private */,
      42,    1,  346,    2, 0x08,   48 /* Private */,
      43,    1,  349,    2, 0x08,   50 /* Private */,
      44,    1,  352,    2, 0x08,   52 /* Private */,
      45,    1,  355,    2, 0x08,   54 /* Private */,
      46,    1,  358,    2, 0x08,   56 /* Private */,
      47,    1,  361,    2, 0x08,   58 /* Private */,
      48,    1,  364,    2, 0x08,   60 /* Private */,
      49,    1,  367,    2, 0x08,   62 /* Private */,
      50,    1,  370,    2, 0x08,   64 /* Private */,
      53,    1,  373,    2, 0x08,   66 /* Private */,
      55,    0,  376,    2, 0x08,   68 /* Private */,
      56,    0,  377,    2, 0x08,   69 /* Private */,
      57,    1,  378,    2, 0x08,   70 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 33, 0x80000000 | 35,   32,   34,   36,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 33,   32,   34,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   58,

       0        // eod
};

Q_CONSTINIT const QMetaObject Quadcopter_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQuadcopter_MainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Quadcopter_MainWindow, std::true_type>,
        // method 'ServerConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTReceivedMsgGeneral'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'MQTTReceivedMsgStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'MQTTReceivedMsgCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'MQTTSentMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'MQTTUpdateServerStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'UDPUpdateConnectionStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'LoRaWANUpdateConnectionStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ButtonReadDisable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ButtonReadEnable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ButtonReadStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ButtonForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ButtonReverse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ButtonLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ButtonRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AnimationButtonForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AnimationButtonReverse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AnimationButtonLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AnimationButtonRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GeologicalPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'Throttle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'DroneSelectNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DroneSelectPrevious'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ButtonCameraShutter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DroneDisplayCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHostAddress *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16 *, std::false_type>,
        // method 'DroneDisplayCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHostAddress *, std::false_type>,
        // method 'DroneDisplayCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        // method 'SaveLogFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QuadcopterPanelInit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QuadcopterParamInit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ClockInit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LogPanelInit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateValueTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateValueHumidity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateValuePressure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateValueBattery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateValueDisplacement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateValueSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateValueHeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateGeoPos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateDroneIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'UpdateDroneIPV4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ClockUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'KeyboardTimerUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QuadcopterParamUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>
    >,
    nullptr
} };

void Quadcopter_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Quadcopter_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ServerConsole(); break;
        case 1: _t->MQTTReceivedMsgGeneral((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 2: _t->MQTTReceivedMsgStatus((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 3: _t->MQTTReceivedMsgCommand((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 4: _t->MQTTSentMsg((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 5: _t->MQTTUpdateServerStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->UDPUpdateConnectionStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->LoRaWANUpdateConnectionStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->ButtonReadDisable(); break;
        case 9: _t->ButtonReadEnable(); break;
        case 10: _t->ButtonReadStatus(); break;
        case 11: _t->ButtonForward(); break;
        case 12: _t->ButtonReverse(); break;
        case 13: _t->ButtonLeft(); break;
        case 14: _t->ButtonRight(); break;
        case 15: _t->AnimationButtonForward(); break;
        case 16: _t->AnimationButtonReverse(); break;
        case 17: _t->AnimationButtonLeft(); break;
        case 18: _t->AnimationButtonRight(); break;
        case 19: _t->GeologicalPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->Throttle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->DroneSelectNext(); break;
        case 22: _t->DroneSelectPrevious(); break;
        case 23: _t->ButtonCameraShutter(); break;
        case 24: _t->DroneDisplayCamera((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHostAddress*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16*>>(_a[3]))); break;
        case 25: _t->DroneDisplayCamera((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHostAddress*>>(_a[2]))); break;
        case 26: _t->DroneDisplayCamera((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1]))); break;
        case 27: _t->SaveLogFile(); break;
        case 28: _t->QuadcopterPanelInit(); break;
        case 29: _t->QuadcopterParamInit(); break;
        case 30: _t->ClockInit(); break;
        case 31: _t->LogPanelInit(); break;
        case 32: _t->UpdateValueTemperature((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->UpdateValueHumidity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->UpdateValuePressure((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->UpdateValueBattery((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->UpdateValueDisplacement((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->UpdateValueSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->UpdateValueHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->UpdateGeoPos((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->UpdateDroneIndex((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 41: _t->UpdateDroneIPV4((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 42: _t->ClockUpdate(); break;
        case 43: _t->KeyboardTimerUpdate(); break;
        case 44: _t->QuadcopterParamUpdate((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Quadcopter_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Quadcopter_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Quadcopter_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}
QT_WARNING_POP
