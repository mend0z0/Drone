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
    "messageReceived",
    "message",
    "QMqttTopicName",
    "topic",
    "messageStatusChanged",
    "id",
    "QMqtt::MessageStatus",
    "s",
    "QMqttMessageStatusProperties",
    "properties",
    "messageSent",
    "pingResponseReceived",
    "brokerSessionRestored",
    "ProcessMsgs",
    "data",
    "QCopter_Connected",
    "QCopter_Disconnected",
    "mqttParamSet",
    "mqttConnect",
    "mqttPanelClose",
    "mqttDisconnect",
    "mqttSubscribeDefault",
    "PingResult",
    "mqttSubscribe",
    "uint8_t",
    "topicIndex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMQTTClientENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[8];
    char stringdata6[15];
    char stringdata7[6];
    char stringdata8[21];
    char stringdata9[3];
    char stringdata10[21];
    char stringdata11[2];
    char stringdata12[29];
    char stringdata13[11];
    char stringdata14[12];
    char stringdata15[21];
    char stringdata16[22];
    char stringdata17[12];
    char stringdata18[5];
    char stringdata19[18];
    char stringdata20[21];
    char stringdata21[13];
    char stringdata22[12];
    char stringdata23[15];
    char stringdata24[15];
    char stringdata25[21];
    char stringdata26[11];
    char stringdata27[14];
    char stringdata28[8];
    char stringdata29[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMQTTClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMQTTClientENDCLASS_t qt_meta_stringdata_CLASSMQTTClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MQTTClient"
        QT_MOC_LITERAL(11, 9),  // "connected"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "disconnected"
        QT_MOC_LITERAL(35, 15),  // "messageReceived"
        QT_MOC_LITERAL(51, 7),  // "message"
        QT_MOC_LITERAL(59, 14),  // "QMqttTopicName"
        QT_MOC_LITERAL(74, 5),  // "topic"
        QT_MOC_LITERAL(80, 20),  // "messageStatusChanged"
        QT_MOC_LITERAL(101, 2),  // "id"
        QT_MOC_LITERAL(104, 20),  // "QMqtt::MessageStatus"
        QT_MOC_LITERAL(125, 1),  // "s"
        QT_MOC_LITERAL(127, 28),  // "QMqttMessageStatusProperties"
        QT_MOC_LITERAL(156, 10),  // "properties"
        QT_MOC_LITERAL(167, 11),  // "messageSent"
        QT_MOC_LITERAL(179, 20),  // "pingResponseReceived"
        QT_MOC_LITERAL(200, 21),  // "brokerSessionRestored"
        QT_MOC_LITERAL(222, 11),  // "ProcessMsgs"
        QT_MOC_LITERAL(234, 4),  // "data"
        QT_MOC_LITERAL(239, 17),  // "QCopter_Connected"
        QT_MOC_LITERAL(257, 20),  // "QCopter_Disconnected"
        QT_MOC_LITERAL(278, 12),  // "mqttParamSet"
        QT_MOC_LITERAL(291, 11),  // "mqttConnect"
        QT_MOC_LITERAL(303, 14),  // "mqttPanelClose"
        QT_MOC_LITERAL(318, 14),  // "mqttDisconnect"
        QT_MOC_LITERAL(333, 20),  // "mqttSubscribeDefault"
        QT_MOC_LITERAL(354, 10),  // "PingResult"
        QT_MOC_LITERAL(365, 13),  // "mqttSubscribe"
        QT_MOC_LITERAL(379, 7),  // "uint8_t"
        QT_MOC_LITERAL(387, 10)   // "topicIndex"
    },
    "MQTTClient",
    "connected",
    "",
    "disconnected",
    "messageReceived",
    "message",
    "QMqttTopicName",
    "topic",
    "messageStatusChanged",
    "id",
    "QMqtt::MessageStatus",
    "s",
    "QMqttMessageStatusProperties",
    "properties",
    "messageSent",
    "pingResponseReceived",
    "brokerSessionRestored",
    "ProcessMsgs",
    "data",
    "QCopter_Connected",
    "QCopter_Disconnected",
    "mqttParamSet",
    "mqttConnect",
    "mqttPanelClose",
    "mqttDisconnect",
    "mqttSubscribeDefault",
    "PingResult",
    "mqttSubscribe",
    "uint8_t",
    "topicIndex"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMQTTClientENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x06,    1 /* Public */,
       3,    0,  123,    2, 0x06,    2 /* Public */,
       4,    2,  124,    2, 0x06,    3 /* Public */,
       4,    1,  129,    2, 0x26,    6 /* Public | MethodCloned */,
       8,    3,  132,    2, 0x06,    8 /* Public */,
      14,    1,  139,    2, 0x06,   12 /* Public */,
      15,    0,  142,    2, 0x06,   14 /* Public */,
      16,    0,  143,    2, 0x06,   15 /* Public */,
      17,    2,  144,    2, 0x06,   16 /* Public */,
      19,    0,  149,    2, 0x06,   19 /* Public */,
      20,    0,  150,    2, 0x06,   20 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    0,  151,    2, 0x08,   21 /* Private */,
      22,    0,  152,    2, 0x08,   22 /* Private */,
      23,    0,  153,    2, 0x08,   23 /* Private */,
      24,    0,  154,    2, 0x08,   24 /* Private */,
      25,    0,  155,    2, 0x08,   25 /* Private */,
      26,    0,  156,    2, 0x08,   26 /* Private */,
      27,    1,  157,    2, 0x0a,   27 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,   18,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 28,   29,

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
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMqttTopicName &, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
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
        // method 'ProcessMsgs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'QCopter_Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QCopter_Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttParamSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttPanelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttSubscribeDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PingResult'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mqttSubscribe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>
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
        case 2: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqttTopicName>>(_a[2]))); break;
        case 3: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 4: _t->messageStatusChanged((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMqtt::MessageStatus>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMqttMessageStatusProperties>>(_a[3]))); break;
        case 5: _t->messageSent((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 6: _t->pingResponseReceived(); break;
        case 7: _t->brokerSessionRestored(); break;
        case 8: _t->ProcessMsgs((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->QCopter_Connected(); break;
        case 10: _t->QCopter_Disconnected(); break;
        case 11: _t->mqttParamSet(); break;
        case 12: _t->mqttConnect(); break;
        case 13: _t->mqttPanelClose(); break;
        case 14: _t->mqttDisconnect(); break;
        case 15: _t->mqttSubscribeDefault(); break;
        case 16: { bool _r = _t->PingResult();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->mqttSubscribe((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMqttTopicName >(); break;
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
            using _t = void (MQTTClient::*)(const QByteArray & , const QMqttTopicName & );
            if (_t _q_method = &MQTTClient::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(qint32 , QMqtt::MessageStatus , const QMqttMessageStatusProperties & );
            if (_t _q_method = &MQTTClient::messageStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(qint32 );
            if (_t _q_method = &MQTTClient::messageSent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::pingResponseReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::brokerSessionRestored; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(QByteArray , QString );
            if (_t _q_method = &MQTTClient::ProcessMsgs; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::QCopter_Connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::QCopter_Disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
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
void MQTTClient::messageReceived(const QByteArray & _t1, const QMqttTopicName & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void MQTTClient::messageStatusChanged(qint32 _t1, QMqtt::MessageStatus _t2, const QMqttMessageStatusProperties & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MQTTClient::messageSent(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MQTTClient::pingResponseReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MQTTClient::brokerSessionRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MQTTClient::ProcessMsgs(QByteArray _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MQTTClient::QCopter_Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MQTTClient::QCopter_Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
