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
    "FCTRLDebugConsole",
    "RCTRLDebugConsole",
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
    uint offsetsAndSizes[122];
    char stringdata0[22];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[18];
    char stringdata5[23];
    char stringdata6[13];
    char stringdata7[4];
    char stringdata8[22];
    char stringdata9[23];
    char stringdata10[12];
    char stringdata11[23];
    char stringdata12[7];
    char stringdata13[26];
    char stringdata14[30];
    char stringdata15[18];
    char stringdata16[17];
    char stringdata17[17];
    char stringdata18[14];
    char stringdata19[14];
    char stringdata20[11];
    char stringdata21[12];
    char stringdata22[23];
    char stringdata23[23];
    char stringdata24[20];
    char stringdata25[21];
    char stringdata26[19];
    char stringdata27[6];
    char stringdata28[9];
    char stringdata29[16];
    char stringdata30[20];
    char stringdata31[20];
    char stringdata32[19];
    char stringdata33[12];
    char stringdata34[5];
    char stringdata35[14];
    char stringdata36[5];
    char stringdata37[9];
    char stringdata38[5];
    char stringdata39[12];
    char stringdata40[20];
    char stringdata41[20];
    char stringdata42[10];
    char stringdata43[13];
    char stringdata44[23];
    char stringdata45[20];
    char stringdata46[20];
    char stringdata47[19];
    char stringdata48[24];
    char stringdata49[17];
    char stringdata50[18];
    char stringdata51[13];
    char stringdata52[17];
    char stringdata53[8];
    char stringdata54[6];
    char stringdata55[16];
    char stringdata56[5];
    char stringdata57[12];
    char stringdata58[20];
    char stringdata59[22];
    char stringdata60[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "Quadcopter_MainWindow"
        QT_MOC_LITERAL(22, 13),  // "ServerConsole"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 17),  // "FCTRLDebugConsole"
        QT_MOC_LITERAL(55, 17),  // "RCTRLDebugConsole"
        QT_MOC_LITERAL(73, 22),  // "MQTTReceivedMsgGeneral"
        QT_MOC_LITERAL(96, 12),  // "QMqttMessage"
        QT_MOC_LITERAL(109, 3),  // "msg"
        QT_MOC_LITERAL(113, 21),  // "MQTTReceivedMsgStatus"
        QT_MOC_LITERAL(135, 22),  // "MQTTReceivedMsgCommand"
        QT_MOC_LITERAL(158, 11),  // "MQTTSentMsg"
        QT_MOC_LITERAL(170, 22),  // "MQTTUpdateServerStatus"
        QT_MOC_LITERAL(193, 6),  // "status"
        QT_MOC_LITERAL(200, 25),  // "UDPUpdateConnectionStatus"
        QT_MOC_LITERAL(226, 29),  // "LoRaWANUpdateConnectionStatus"
        QT_MOC_LITERAL(256, 17),  // "ButtonReadDisable"
        QT_MOC_LITERAL(274, 16),  // "ButtonReadEnable"
        QT_MOC_LITERAL(291, 16),  // "ButtonReadStatus"
        QT_MOC_LITERAL(308, 13),  // "ButtonForward"
        QT_MOC_LITERAL(322, 13),  // "ButtonReverse"
        QT_MOC_LITERAL(336, 10),  // "ButtonLeft"
        QT_MOC_LITERAL(347, 11),  // "ButtonRight"
        QT_MOC_LITERAL(359, 22),  // "AnimationButtonForward"
        QT_MOC_LITERAL(382, 22),  // "AnimationButtonReverse"
        QT_MOC_LITERAL(405, 19),  // "AnimationButtonLeft"
        QT_MOC_LITERAL(425, 20),  // "AnimationButtonRight"
        QT_MOC_LITERAL(446, 18),  // "GeologicalPosition"
        QT_MOC_LITERAL(465, 5),  // "value"
        QT_MOC_LITERAL(471, 8),  // "Throttle"
        QT_MOC_LITERAL(480, 15),  // "DroneSelectNext"
        QT_MOC_LITERAL(496, 19),  // "DroneSelectPrevious"
        QT_MOC_LITERAL(516, 19),  // "ButtonCameraShutter"
        QT_MOC_LITERAL(536, 18),  // "DroneDisplayCamera"
        QT_MOC_LITERAL(555, 11),  // "QByteArray*"
        QT_MOC_LITERAL(567, 4),  // "data"
        QT_MOC_LITERAL(572, 13),  // "QHostAddress*"
        QT_MOC_LITERAL(586, 4),  // "host"
        QT_MOC_LITERAL(591, 8),  // "quint16*"
        QT_MOC_LITERAL(600, 4),  // "port"
        QT_MOC_LITERAL(605, 11),  // "SaveLogFile"
        QT_MOC_LITERAL(617, 19),  // "QuadcopterPanelInit"
        QT_MOC_LITERAL(637, 19),  // "QuadcopterParamInit"
        QT_MOC_LITERAL(657, 9),  // "ClockInit"
        QT_MOC_LITERAL(667, 12),  // "LogPanelInit"
        QT_MOC_LITERAL(680, 22),  // "UpdateValueTemperature"
        QT_MOC_LITERAL(703, 19),  // "UpdateValueHumidity"
        QT_MOC_LITERAL(723, 19),  // "UpdateValuePressure"
        QT_MOC_LITERAL(743, 18),  // "UpdateValueBattery"
        QT_MOC_LITERAL(762, 23),  // "UpdateValueDisplacement"
        QT_MOC_LITERAL(786, 16),  // "UpdateValueSpeed"
        QT_MOC_LITERAL(803, 17),  // "UpdateValueHeight"
        QT_MOC_LITERAL(821, 12),  // "UpdateGeoPos"
        QT_MOC_LITERAL(834, 16),  // "UpdateDroneIndex"
        QT_MOC_LITERAL(851, 7),  // "uint8_t"
        QT_MOC_LITERAL(859, 5),  // "index"
        QT_MOC_LITERAL(865, 15),  // "UpdateDroneIPV4"
        QT_MOC_LITERAL(881, 4),  // "ipv4"
        QT_MOC_LITERAL(886, 11),  // "ClockUpdate"
        QT_MOC_LITERAL(898, 19),  // "KeyboardTimerUpdate"
        QT_MOC_LITERAL(918, 21),  // "QuadcopterParamUpdate"
        QT_MOC_LITERAL(940, 8)   // "inputObj"
    },
    "Quadcopter_MainWindow",
    "ServerConsole",
    "",
    "FCTRLDebugConsole",
    "RCTRLDebugConsole",
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
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  296,    2, 0x08,    1 /* Private */,
       3,    0,  297,    2, 0x08,    2 /* Private */,
       4,    0,  298,    2, 0x08,    3 /* Private */,
       5,    1,  299,    2, 0x08,    4 /* Private */,
       8,    1,  302,    2, 0x08,    6 /* Private */,
       9,    1,  305,    2, 0x08,    8 /* Private */,
      10,    1,  308,    2, 0x08,   10 /* Private */,
      11,    1,  311,    2, 0x08,   12 /* Private */,
      13,    1,  314,    2, 0x08,   14 /* Private */,
      14,    1,  317,    2, 0x08,   16 /* Private */,
      15,    0,  320,    2, 0x08,   18 /* Private */,
      16,    0,  321,    2, 0x08,   19 /* Private */,
      17,    0,  322,    2, 0x08,   20 /* Private */,
      18,    0,  323,    2, 0x08,   21 /* Private */,
      19,    0,  324,    2, 0x08,   22 /* Private */,
      20,    0,  325,    2, 0x08,   23 /* Private */,
      21,    0,  326,    2, 0x08,   24 /* Private */,
      22,    0,  327,    2, 0x08,   25 /* Private */,
      23,    0,  328,    2, 0x08,   26 /* Private */,
      24,    0,  329,    2, 0x08,   27 /* Private */,
      25,    0,  330,    2, 0x08,   28 /* Private */,
      26,    1,  331,    2, 0x08,   29 /* Private */,
      28,    1,  334,    2, 0x08,   31 /* Private */,
      29,    0,  337,    2, 0x08,   33 /* Private */,
      30,    0,  338,    2, 0x08,   34 /* Private */,
      31,    0,  339,    2, 0x08,   35 /* Private */,
      32,    3,  340,    2, 0x08,   36 /* Private */,
      32,    2,  347,    2, 0x28,   40 /* Private | MethodCloned */,
      32,    1,  352,    2, 0x28,   43 /* Private | MethodCloned */,
      39,    0,  355,    2, 0x08,   45 /* Private */,
      40,    0,  356,    2, 0x08,   46 /* Private */,
      41,    0,  357,    2, 0x08,   47 /* Private */,
      42,    0,  358,    2, 0x08,   48 /* Private */,
      43,    0,  359,    2, 0x08,   49 /* Private */,
      44,    1,  360,    2, 0x08,   50 /* Private */,
      45,    1,  363,    2, 0x08,   52 /* Private */,
      46,    1,  366,    2, 0x08,   54 /* Private */,
      47,    1,  369,    2, 0x08,   56 /* Private */,
      48,    1,  372,    2, 0x08,   58 /* Private */,
      49,    1,  375,    2, 0x08,   60 /* Private */,
      50,    1,  378,    2, 0x08,   62 /* Private */,
      51,    1,  381,    2, 0x08,   64 /* Private */,
      52,    1,  384,    2, 0x08,   66 /* Private */,
      55,    1,  387,    2, 0x08,   68 /* Private */,
      57,    0,  390,    2, 0x08,   70 /* Private */,
      58,    0,  391,    2, 0x08,   71 /* Private */,
      59,    1,  392,    2, 0x08,   72 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
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
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 35, 0x80000000 | 37,   34,   36,   38,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 35,   34,   36,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   60,

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
        // method 'FCTRLDebugConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RCTRLDebugConsole'
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
        case 1: _t->FCTRLDebugConsole(); break;
        case 2: _t->RCTRLDebugConsole(); break;
        case 3: _t->MQTTReceivedMsgGeneral((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 4: _t->MQTTReceivedMsgStatus((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 5: _t->MQTTReceivedMsgCommand((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 6: _t->MQTTSentMsg((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 7: _t->MQTTUpdateServerStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->UDPUpdateConnectionStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->LoRaWANUpdateConnectionStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->ButtonReadDisable(); break;
        case 11: _t->ButtonReadEnable(); break;
        case 12: _t->ButtonReadStatus(); break;
        case 13: _t->ButtonForward(); break;
        case 14: _t->ButtonReverse(); break;
        case 15: _t->ButtonLeft(); break;
        case 16: _t->ButtonRight(); break;
        case 17: _t->AnimationButtonForward(); break;
        case 18: _t->AnimationButtonReverse(); break;
        case 19: _t->AnimationButtonLeft(); break;
        case 20: _t->AnimationButtonRight(); break;
        case 21: _t->GeologicalPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->Throttle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->DroneSelectNext(); break;
        case 24: _t->DroneSelectPrevious(); break;
        case 25: _t->ButtonCameraShutter(); break;
        case 26: _t->DroneDisplayCamera((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHostAddress*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16*>>(_a[3]))); break;
        case 27: _t->DroneDisplayCamera((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHostAddress*>>(_a[2]))); break;
        case 28: _t->DroneDisplayCamera((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1]))); break;
        case 29: _t->SaveLogFile(); break;
        case 30: _t->QuadcopterPanelInit(); break;
        case 31: _t->QuadcopterParamInit(); break;
        case 32: _t->ClockInit(); break;
        case 33: _t->LogPanelInit(); break;
        case 34: _t->UpdateValueTemperature((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->UpdateValueHumidity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->UpdateValuePressure((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->UpdateValueBattery((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->UpdateValueDisplacement((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->UpdateValueSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->UpdateValueHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 41: _t->UpdateGeoPos((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 42: _t->UpdateDroneIndex((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 43: _t->UpdateDroneIPV4((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->ClockUpdate(); break;
        case 45: _t->KeyboardTimerUpdate(); break;
        case 46: _t->QuadcopterParamUpdate((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
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
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 6:
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
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}
QT_WARNING_POP
