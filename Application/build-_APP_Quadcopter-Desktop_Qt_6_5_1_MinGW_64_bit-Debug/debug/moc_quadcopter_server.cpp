/****************************************************************************
** Meta object code from reading C++ file 'quadcopter_server.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../_APP_Quadcopter/quadcopter_server.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quadcopter_server.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSquadcopter_serverENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSquadcopter_serverENDCLASS = QtMocHelpers::stringData(
    "quadcopter_server",
    "connected",
    "",
    "disconnected",
    "messageStatusChanged",
    "id",
    "QMqtt::MessageStatus",
    "s",
    "QMqttMessageStatusProperties",
    "properties",
    "messageSent",
    "pingResponseReceived",
    "brokerSessionRestored",
    "messageReceived",
    "QMqttMessage",
    "msg",
    "QCopter_ApplicationIPV4",
    "ipv4",
    "QCopter_Connected",
    "QCopter_Disconnected",
    "QCopter_NewMsgGeneral",
    "QCopter_NewMsgStatus",
    "QCopter_NewMsgCommand",
    "QCopter_MQTTServerStatus",
    "status",
    "QCopter_UDPNewData",
    "QByteArray*",
    "data",
    "QHostAddress*",
    "host",
    "quint16*",
    "port",
    "QCopter_UDPUpdateState",
    "state",
    "ServerPanelClose",
    "ServerReadIPV4",
    "MQTTParamSet",
    "MQTTConnectDisconnectButton",
    "MQTTSubscribtion",
    "MQTTDisconnected",
    "MQTTPingResult",
    "MQTTNewReceivedGeneral",
    "MQTTNewReceivedStatus",
    "MQTTNewReceivedCommand",
    "MQTTSendTimerTimeout",
    "UDPConnect",
    "UDPReceivedData",
    "UDPPingResult",
    "UDPCheckConnection",
    "MQTTSendMsg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSquadcopter_serverENDCLASS_t {
    uint offsetsAndSizes[100];
    char stringdata0[18];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[21];
    char stringdata5[3];
    char stringdata6[21];
    char stringdata7[2];
    char stringdata8[29];
    char stringdata9[11];
    char stringdata10[12];
    char stringdata11[21];
    char stringdata12[22];
    char stringdata13[16];
    char stringdata14[13];
    char stringdata15[4];
    char stringdata16[24];
    char stringdata17[5];
    char stringdata18[18];
    char stringdata19[21];
    char stringdata20[22];
    char stringdata21[21];
    char stringdata22[22];
    char stringdata23[25];
    char stringdata24[7];
    char stringdata25[19];
    char stringdata26[12];
    char stringdata27[5];
    char stringdata28[14];
    char stringdata29[5];
    char stringdata30[9];
    char stringdata31[5];
    char stringdata32[23];
    char stringdata33[6];
    char stringdata34[17];
    char stringdata35[15];
    char stringdata36[13];
    char stringdata37[28];
    char stringdata38[17];
    char stringdata39[17];
    char stringdata40[15];
    char stringdata41[23];
    char stringdata42[22];
    char stringdata43[23];
    char stringdata44[21];
    char stringdata45[11];
    char stringdata46[16];
    char stringdata47[14];
    char stringdata48[19];
    char stringdata49[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSquadcopter_serverENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSquadcopter_serverENDCLASS_t qt_meta_stringdata_CLASSquadcopter_serverENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "quadcopter_server"
        QT_MOC_LITERAL(18, 9),  // "connected"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 12),  // "disconnected"
        QT_MOC_LITERAL(42, 20),  // "messageStatusChanged"
        QT_MOC_LITERAL(63, 2),  // "id"
        QT_MOC_LITERAL(66, 20),  // "QMqtt::MessageStatus"
        QT_MOC_LITERAL(87, 1),  // "s"
        QT_MOC_LITERAL(89, 28),  // "QMqttMessageStatusProperties"
        QT_MOC_LITERAL(118, 10),  // "properties"
        QT_MOC_LITERAL(129, 11),  // "messageSent"
        QT_MOC_LITERAL(141, 20),  // "pingResponseReceived"
        QT_MOC_LITERAL(162, 21),  // "brokerSessionRestored"
        QT_MOC_LITERAL(184, 15),  // "messageReceived"
        QT_MOC_LITERAL(200, 12),  // "QMqttMessage"
        QT_MOC_LITERAL(213, 3),  // "msg"
        QT_MOC_LITERAL(217, 23),  // "QCopter_ApplicationIPV4"
        QT_MOC_LITERAL(241, 4),  // "ipv4"
        QT_MOC_LITERAL(246, 17),  // "QCopter_Connected"
        QT_MOC_LITERAL(264, 20),  // "QCopter_Disconnected"
        QT_MOC_LITERAL(285, 21),  // "QCopter_NewMsgGeneral"
        QT_MOC_LITERAL(307, 20),  // "QCopter_NewMsgStatus"
        QT_MOC_LITERAL(328, 21),  // "QCopter_NewMsgCommand"
        QT_MOC_LITERAL(350, 24),  // "QCopter_MQTTServerStatus"
        QT_MOC_LITERAL(375, 6),  // "status"
        QT_MOC_LITERAL(382, 18),  // "QCopter_UDPNewData"
        QT_MOC_LITERAL(401, 11),  // "QByteArray*"
        QT_MOC_LITERAL(413, 4),  // "data"
        QT_MOC_LITERAL(418, 13),  // "QHostAddress*"
        QT_MOC_LITERAL(432, 4),  // "host"
        QT_MOC_LITERAL(437, 8),  // "quint16*"
        QT_MOC_LITERAL(446, 4),  // "port"
        QT_MOC_LITERAL(451, 22),  // "QCopter_UDPUpdateState"
        QT_MOC_LITERAL(474, 5),  // "state"
        QT_MOC_LITERAL(480, 16),  // "ServerPanelClose"
        QT_MOC_LITERAL(497, 14),  // "ServerReadIPV4"
        QT_MOC_LITERAL(512, 12),  // "MQTTParamSet"
        QT_MOC_LITERAL(525, 27),  // "MQTTConnectDisconnectButton"
        QT_MOC_LITERAL(553, 16),  // "MQTTSubscribtion"
        QT_MOC_LITERAL(570, 16),  // "MQTTDisconnected"
        QT_MOC_LITERAL(587, 14),  // "MQTTPingResult"
        QT_MOC_LITERAL(602, 22),  // "MQTTNewReceivedGeneral"
        QT_MOC_LITERAL(625, 21),  // "MQTTNewReceivedStatus"
        QT_MOC_LITERAL(647, 22),  // "MQTTNewReceivedCommand"
        QT_MOC_LITERAL(670, 20),  // "MQTTSendTimerTimeout"
        QT_MOC_LITERAL(691, 10),  // "UDPConnect"
        QT_MOC_LITERAL(702, 15),  // "UDPReceivedData"
        QT_MOC_LITERAL(718, 13),  // "UDPPingResult"
        QT_MOC_LITERAL(732, 18),  // "UDPCheckConnection"
        QT_MOC_LITERAL(751, 11)   // "MQTTSendMsg"
    },
    "quadcopter_server",
    "connected",
    "",
    "disconnected",
    "messageStatusChanged",
    "id",
    "QMqtt::MessageStatus",
    "s",
    "QMqttMessageStatusProperties",
    "properties",
    "messageSent",
    "pingResponseReceived",
    "brokerSessionRestored",
    "messageReceived",
    "QMqttMessage",
    "msg",
    "QCopter_ApplicationIPV4",
    "ipv4",
    "QCopter_Connected",
    "QCopter_Disconnected",
    "QCopter_NewMsgGeneral",
    "QCopter_NewMsgStatus",
    "QCopter_NewMsgCommand",
    "QCopter_MQTTServerStatus",
    "status",
    "QCopter_UDPNewData",
    "QByteArray*",
    "data",
    "QHostAddress*",
    "host",
    "quint16*",
    "port",
    "QCopter_UDPUpdateState",
    "state",
    "ServerPanelClose",
    "ServerReadIPV4",
    "MQTTParamSet",
    "MQTTConnectDisconnectButton",
    "MQTTSubscribtion",
    "MQTTDisconnected",
    "MQTTPingResult",
    "MQTTNewReceivedGeneral",
    "MQTTNewReceivedStatus",
    "MQTTNewReceivedCommand",
    "MQTTSendTimerTimeout",
    "UDPConnect",
    "UDPReceivedData",
    "UDPPingResult",
    "UDPCheckConnection",
    "MQTTSendMsg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSquadcopter_serverENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  218,    2, 0x06,    1 /* Public */,
       3,    0,  219,    2, 0x06,    2 /* Public */,
       4,    3,  220,    2, 0x06,    3 /* Public */,
      10,    1,  227,    2, 0x06,    7 /* Public */,
      11,    0,  230,    2, 0x06,    9 /* Public */,
      12,    0,  231,    2, 0x06,   10 /* Public */,
      13,    1,  232,    2, 0x06,   11 /* Public */,
      16,    1,  235,    2, 0x06,   13 /* Public */,
      18,    0,  238,    2, 0x06,   15 /* Public */,
      19,    0,  239,    2, 0x06,   16 /* Public */,
      20,    1,  240,    2, 0x06,   17 /* Public */,
      21,    1,  243,    2, 0x06,   19 /* Public */,
      22,    1,  246,    2, 0x06,   21 /* Public */,
      23,    1,  249,    2, 0x06,   23 /* Public */,
      25,    3,  252,    2, 0x06,   25 /* Public */,
      25,    2,  259,    2, 0x26,   29 /* Public | MethodCloned */,
      25,    1,  264,    2, 0x26,   32 /* Public | MethodCloned */,
      32,    1,  267,    2, 0x06,   34 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      34,    0,  270,    2, 0x08,   36 /* Private */,
      35,    0,  271,    2, 0x08,   37 /* Private */,
      36,    0,  272,    2, 0x08,   38 /* Private */,
      37,    0,  273,    2, 0x08,   39 /* Private */,
      38,    0,  274,    2, 0x08,   40 /* Private */,
      39,    0,  275,    2, 0x08,   41 /* Private */,
      40,    0,  276,    2, 0x08,   42 /* Private */,
      41,    1,  277,    2, 0x08,   43 /* Private */,
      42,    1,  280,    2, 0x08,   45 /* Private */,
      43,    1,  283,    2, 0x08,   47 /* Private */,
      44,    0,  286,    2, 0x08,   49 /* Private */,
      45,    0,  287,    2, 0x08,   50 /* Private */,
      46,    0,  288,    2, 0x08,   51 /* Private */,
      47,    0,  289,    2, 0x08,   52 /* Private */,
      48,    0,  290,    2, 0x08,   53 /* Private */,
      49,    1,  291,    2, 0x0a,   54 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 8,    5,    7,    9,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 28, 0x80000000 | 30,   27,   29,   31,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 28,   27,   29,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Bool,   33,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject quadcopter_server::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSquadcopter_serverENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSquadcopter_serverENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSquadcopter_serverENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<quadcopter_server, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqtt::MessageStatus, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttMessageStatusProperties &, std::false_type>,
        // method 'messageSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'pingResponseReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brokerSessionRestored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'QCopter_ApplicationIPV4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'QCopter_Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QCopter_Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QCopter_NewMsgGeneral'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'QCopter_NewMsgStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'QCopter_NewMsgCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'QCopter_MQTTServerStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'QCopter_UDPNewData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHostAddress *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16 *, std::false_type>,
        // method 'QCopter_UDPNewData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHostAddress *, std::false_type>,
        // method 'QCopter_UDPNewData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        // method 'QCopter_UDPUpdateState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ServerPanelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ServerReadIPV4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTParamSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTConnectDisconnectButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTSubscribtion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTPingResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTNewReceivedGeneral'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'MQTTNewReceivedStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'MQTTNewReceivedCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'MQTTSendTimerTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UDPConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UDPReceivedData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UDPPingResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UDPCheckConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MQTTSendMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
    >,
    nullptr
} };

void quadcopter_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<quadcopter_server *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->messageStatusChanged((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqtt::MessageStatus>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMqttMessageStatusProperties>>(_a[3]))); break;
        case 3: _t->messageSent((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 4: _t->pingResponseReceived(); break;
        case 5: _t->brokerSessionRestored(); break;
        case 6: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 7: _t->QCopter_ApplicationIPV4((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->QCopter_Connected(); break;
        case 9: _t->QCopter_Disconnected(); break;
        case 10: _t->QCopter_NewMsgGeneral((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 11: _t->QCopter_NewMsgStatus((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 12: _t->QCopter_NewMsgCommand((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 13: _t->QCopter_MQTTServerStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->QCopter_UDPNewData((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHostAddress*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16*>>(_a[3]))); break;
        case 15: _t->QCopter_UDPNewData((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHostAddress*>>(_a[2]))); break;
        case 16: _t->QCopter_UDPNewData((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1]))); break;
        case 17: _t->QCopter_UDPUpdateState((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->ServerPanelClose(); break;
        case 19: _t->ServerReadIPV4(); break;
        case 20: _t->MQTTParamSet(); break;
        case 21: _t->MQTTConnectDisconnectButton(); break;
        case 22: _t->MQTTSubscribtion(); break;
        case 23: _t->MQTTDisconnected(); break;
        case 24: _t->MQTTPingResult(); break;
        case 25: _t->MQTTNewReceivedGeneral((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 26: _t->MQTTNewReceivedStatus((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 27: _t->MQTTNewReceivedCommand((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 28: _t->MQTTSendTimerTimeout(); break;
        case 29: _t->UDPConnect(); break;
        case 30: _t->UDPReceivedData(); break;
        case 31: _t->UDPPingResult(); break;
        case 32: _t->UDPCheckConnection(); break;
        case 33: _t->MQTTSendMsg((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (quadcopter_server::*)();
            if (_t _q_method = &quadcopter_server::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)();
            if (_t _q_method = &quadcopter_server::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(qint32 , QMqtt::MessageStatus , const QMqttMessageStatusProperties & );
            if (_t _q_method = &quadcopter_server::messageStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(qint32 );
            if (_t _q_method = &quadcopter_server::messageSent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)();
            if (_t _q_method = &quadcopter_server::pingResponseReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)();
            if (_t _q_method = &quadcopter_server::brokerSessionRestored; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(QMqttMessage );
            if (_t _q_method = &quadcopter_server::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(QString );
            if (_t _q_method = &quadcopter_server::QCopter_ApplicationIPV4; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)();
            if (_t _q_method = &quadcopter_server::QCopter_Connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)();
            if (_t _q_method = &quadcopter_server::QCopter_Disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(QMqttMessage );
            if (_t _q_method = &quadcopter_server::QCopter_NewMsgGeneral; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(QMqttMessage );
            if (_t _q_method = &quadcopter_server::QCopter_NewMsgStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(QMqttMessage );
            if (_t _q_method = &quadcopter_server::QCopter_NewMsgCommand; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(bool );
            if (_t _q_method = &quadcopter_server::QCopter_MQTTServerStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(QByteArray * , QHostAddress * , quint16 * );
            if (_t _q_method = &quadcopter_server::QCopter_UDPNewData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (quadcopter_server::*)(bool );
            if (_t _q_method = &quadcopter_server::QCopter_UDPUpdateState; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject *quadcopter_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *quadcopter_server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSquadcopter_serverENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int quadcopter_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void quadcopter_server::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void quadcopter_server::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void quadcopter_server::messageStatusChanged(qint32 _t1, QMqtt::MessageStatus _t2, const QMqttMessageStatusProperties & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void quadcopter_server::messageSent(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void quadcopter_server::pingResponseReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void quadcopter_server::brokerSessionRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void quadcopter_server::messageReceived(QMqttMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void quadcopter_server::QCopter_ApplicationIPV4(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void quadcopter_server::QCopter_Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void quadcopter_server::QCopter_Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void quadcopter_server::QCopter_NewMsgGeneral(QMqttMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void quadcopter_server::QCopter_NewMsgStatus(QMqttMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void quadcopter_server::QCopter_NewMsgCommand(QMqttMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void quadcopter_server::QCopter_MQTTServerStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void quadcopter_server::QCopter_UDPNewData(QByteArray * _t1, QHostAddress * _t2, quint16 * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 17
void quadcopter_server::QCopter_UDPUpdateState(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
