/****************************************************************************
** Meta object code from reading C++ file 'mqttclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../_APP_Quadcopter/mqttclient.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mqttclient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMQTTClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMQTTClientENDCLASS = QtMocHelpers::stringData(
    "MQTTClient",
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
    "QCopter_Connected",
    "QCopter_Disconnected",
    "QCopter_NewMessage",
    "mqttParamSet",
    "mqttConnectDisconnectButton",
    "mqttPanelClose",
    "mqttSubscribeDefault",
    "mqttDisconnected",
    "PingResult",
    "mqttNewReceivedMessage",
    "mqttSubscribeSwitch",
    "uint8_t",
    "topicIndex",
    "mqttSendMsg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMQTTClientENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[11];
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
    char stringdata16[18];
    char stringdata17[21];
    char stringdata18[19];
    char stringdata19[13];
    char stringdata20[28];
    char stringdata21[15];
    char stringdata22[21];
    char stringdata23[17];
    char stringdata24[11];
    char stringdata25[23];
    char stringdata26[20];
    char stringdata27[8];
    char stringdata28[11];
    char stringdata29[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMQTTClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMQTTClientENDCLASS_t qt_meta_stringdata_CLASSMQTTClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MQTTClient"
        QT_MOC_LITERAL(11, 9),  // "connected"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "disconnected"
        QT_MOC_LITERAL(35, 20),  // "messageStatusChanged"
        QT_MOC_LITERAL(56, 2),  // "id"
        QT_MOC_LITERAL(59, 20),  // "QMqtt::MessageStatus"
        QT_MOC_LITERAL(80, 1),  // "s"
        QT_MOC_LITERAL(82, 28),  // "QMqttMessageStatusProperties"
        QT_MOC_LITERAL(111, 10),  // "properties"
        QT_MOC_LITERAL(122, 11),  // "messageSent"
        QT_MOC_LITERAL(134, 20),  // "pingResponseReceived"
        QT_MOC_LITERAL(155, 21),  // "brokerSessionRestored"
        QT_MOC_LITERAL(177, 15),  // "messageReceived"
        QT_MOC_LITERAL(193, 12),  // "QMqttMessage"
        QT_MOC_LITERAL(206, 3),  // "msg"
        QT_MOC_LITERAL(210, 17),  // "QCopter_Connected"
        QT_MOC_LITERAL(228, 20),  // "QCopter_Disconnected"
        QT_MOC_LITERAL(249, 18),  // "QCopter_NewMessage"
        QT_MOC_LITERAL(268, 12),  // "mqttParamSet"
        QT_MOC_LITERAL(281, 27),  // "mqttConnectDisconnectButton"
        QT_MOC_LITERAL(309, 14),  // "mqttPanelClose"
        QT_MOC_LITERAL(324, 20),  // "mqttSubscribeDefault"
        QT_MOC_LITERAL(345, 16),  // "mqttDisconnected"
        QT_MOC_LITERAL(362, 10),  // "PingResult"
        QT_MOC_LITERAL(373, 22),  // "mqttNewReceivedMessage"
        QT_MOC_LITERAL(396, 19),  // "mqttSubscribeSwitch"
        QT_MOC_LITERAL(416, 7),  // "uint8_t"
        QT_MOC_LITERAL(424, 10),  // "topicIndex"
        QT_MOC_LITERAL(435, 11)   // "mqttSendMsg"
    },
    "MQTTClient",
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
    "QCopter_Connected",
    "QCopter_Disconnected",
    "QCopter_NewMessage",
    "mqttParamSet",
    "mqttConnectDisconnectButton",
    "mqttPanelClose",
    "mqttSubscribeDefault",
    "mqttDisconnected",
    "PingResult",
    "mqttNewReceivedMessage",
    "mqttSubscribeSwitch",
    "uint8_t",
    "topicIndex",
    "mqttSendMsg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMQTTClientENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    1 /* Public */,
       3,    0,  129,    2, 0x06,    2 /* Public */,
       4,    3,  130,    2, 0x06,    3 /* Public */,
      10,    1,  137,    2, 0x06,    7 /* Public */,
      11,    0,  140,    2, 0x06,    9 /* Public */,
      12,    0,  141,    2, 0x06,   10 /* Public */,
      13,    1,  142,    2, 0x06,   11 /* Public */,
      16,    0,  145,    2, 0x06,   13 /* Public */,
      17,    0,  146,    2, 0x06,   14 /* Public */,
      18,    1,  147,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    0,  150,    2, 0x08,   17 /* Private */,
      20,    0,  151,    2, 0x08,   18 /* Private */,
      21,    0,  152,    2, 0x08,   19 /* Private */,
      22,    0,  153,    2, 0x08,   20 /* Private */,
      23,    0,  154,    2, 0x08,   21 /* Private */,
      24,    0,  155,    2, 0x08,   22 /* Private */,
      25,    1,  156,    2, 0x08,   23 /* Private */,
      26,    1,  159,    2, 0x0a,   25 /* Public */,
      29,    1,  162,    2, 0x0a,   27 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 8,    5,    7,    9,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::QByteArray,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject MQTTClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSMQTTClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMQTTClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMQTTClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MQTTClient, std::true_type>,
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
        // method 'QCopter_Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QCopter_Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QCopter_NewMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'mqttParamSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttConnectDisconnectButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttPanelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttSubscribeDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PingResult'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mqttNewReceivedMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage, std::false_type>,
        // method 'mqttSubscribeSwitch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'mqttSendMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
    >,
    nullptr
} };

void MQTTClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MQTTClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->messageStatusChanged((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqtt::MessageStatus>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMqttMessageStatusProperties>>(_a[3]))); break;
        case 3: _t->messageSent((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 4: _t->pingResponseReceived(); break;
        case 5: _t->brokerSessionRestored(); break;
        case 6: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 7: _t->QCopter_Connected(); break;
        case 8: _t->QCopter_Disconnected(); break;
        case 9: _t->QCopter_NewMessage((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 10: _t->mqttParamSet(); break;
        case 11: _t->mqttConnectDisconnectButton(); break;
        case 12: _t->mqttPanelClose(); break;
        case 13: _t->mqttSubscribeDefault(); break;
        case 14: _t->mqttDisconnected(); break;
        case 15: { bool _r = _t->PingResult();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->mqttNewReceivedMessage((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 17: _t->mqttSubscribeSwitch((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 18: _t->mqttSendMsg((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
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
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttMessage >(); break;
            }
            break;
        case 16:
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
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(qint32 , QMqtt::MessageStatus , const QMqttMessageStatusProperties & );
            if (_t _q_method = &MQTTClient::messageStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(qint32 );
            if (_t _q_method = &MQTTClient::messageSent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::pingResponseReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::brokerSessionRestored; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(QMqttMessage );
            if (_t _q_method = &MQTTClient::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::QCopter_Connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::QCopter_Disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(QMqttMessage );
            if (_t _q_method = &MQTTClient::QCopter_NewMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *MQTTClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MQTTClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMQTTClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MQTTClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MQTTClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MQTTClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MQTTClient::messageStatusChanged(qint32 _t1, QMqtt::MessageStatus _t2, const QMqttMessageStatusProperties & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MQTTClient::messageSent(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MQTTClient::pingResponseReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MQTTClient::brokerSessionRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MQTTClient::messageReceived(QMqttMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MQTTClient::QCopter_Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MQTTClient::QCopter_Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MQTTClient::QCopter_NewMessage(QMqttMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
