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
    "QCopter_Connected",
    "",
    "QCopter_Disconnected",
    "QCopter_NewMessage",
    "data",
    "mqttConnect",
    "mqttPanelClose",
    "mqttDisconnect",
    "mqttSubscribeDefault",
    "mqttReceivedMessages",
    "QMqttMessage&",
    "msg",
    "mqttSubscribe",
    "uint8_t",
    "topicIndex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMQTTClientENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[19];
    char stringdata5[5];
    char stringdata6[12];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[21];
    char stringdata10[21];
    char stringdata11[14];
    char stringdata12[4];
    char stringdata13[14];
    char stringdata14[8];
    char stringdata15[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMQTTClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMQTTClientENDCLASS_t qt_meta_stringdata_CLASSMQTTClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MQTTClient"
        QT_MOC_LITERAL(11, 17),  // "QCopter_Connected"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 20),  // "QCopter_Disconnected"
        QT_MOC_LITERAL(51, 18),  // "QCopter_NewMessage"
        QT_MOC_LITERAL(70, 4),  // "data"
        QT_MOC_LITERAL(75, 11),  // "mqttConnect"
        QT_MOC_LITERAL(87, 14),  // "mqttPanelClose"
        QT_MOC_LITERAL(102, 14),  // "mqttDisconnect"
        QT_MOC_LITERAL(117, 20),  // "mqttSubscribeDefault"
        QT_MOC_LITERAL(138, 20),  // "mqttReceivedMessages"
        QT_MOC_LITERAL(159, 13),  // "QMqttMessage&"
        QT_MOC_LITERAL(173, 3),  // "msg"
        QT_MOC_LITERAL(177, 13),  // "mqttSubscribe"
        QT_MOC_LITERAL(191, 7),  // "uint8_t"
        QT_MOC_LITERAL(199, 10)   // "topicIndex"
    },
    "MQTTClient",
    "QCopter_Connected",
    "",
    "QCopter_Disconnected",
    "QCopter_NewMessage",
    "data",
    "mqttConnect",
    "mqttPanelClose",
    "mqttDisconnect",
    "mqttSubscribeDefault",
    "mqttReceivedMessages",
    "QMqttMessage&",
    "msg",
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
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,
       4,    1,   70,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   73,    2, 0x08,    5 /* Private */,
       7,    0,   74,    2, 0x08,    6 /* Private */,
       8,    0,   75,    2, 0x08,    7 /* Private */,
       9,    0,   76,    2, 0x08,    8 /* Private */,
      10,    1,   77,    2, 0x08,    9 /* Private */,
      13,    1,   80,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

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
        // method 'QCopter_Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QCopter_Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QCopter_NewMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'mqttConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttPanelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttSubscribeDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mqttReceivedMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMqttMessage &, std::false_type>,
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
        case 0: _t->QCopter_Connected(); break;
        case 1: _t->QCopter_Disconnected(); break;
        case 2: _t->QCopter_NewMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->mqttConnect(); break;
        case 4: _t->mqttPanelClose(); break;
        case 5: _t->mqttDisconnect(); break;
        case 6: _t->mqttSubscribeDefault(); break;
        case 7: _t->mqttReceivedMessages((*reinterpret_cast< std::add_pointer_t<QMqttMessage&>>(_a[1]))); break;
        case 8: _t->mqttSubscribe((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::QCopter_Connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)();
            if (_t _q_method = &MQTTClient::QCopter_Disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MQTTClient::*)(QString );
            if (_t _q_method = &MQTTClient::QCopter_NewMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MQTTClient::QCopter_Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MQTTClient::QCopter_Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MQTTClient::QCopter_NewMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
