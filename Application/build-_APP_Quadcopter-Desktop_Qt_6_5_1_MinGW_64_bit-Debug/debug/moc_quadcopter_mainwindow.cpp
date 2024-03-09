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
    "MQTTConsole",
    "",
    "MQTTReceivedMsgGeneral",
    "QMqttMessage",
    "msg",
    "MQTTReceivedMsgStatus",
    "MQTTReceivedMsgCommand",
    "MQTTSentMsg",
    "MQTTUpdateServerStatus",
    "status",
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
    "UpdateDroneIndex",
    "uint8_t",
    "index",
    "QuadcopterParamInit",
    "QuadcopterParamUpdate",
    "inputObj",
    "ClockInit",
    "ClockUpdate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[22];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[13];
    char stringdata5[4];
    char stringdata6[22];
    char stringdata7[23];
    char stringdata8[12];
    char stringdata9[23];
    char stringdata10[7];
    char stringdata11[18];
    char stringdata12[17];
    char stringdata13[17];
    char stringdata14[14];
    char stringdata15[14];
    char stringdata16[11];
    char stringdata17[12];
    char stringdata18[23];
    char stringdata19[23];
    char stringdata20[20];
    char stringdata21[21];
    char stringdata22[19];
    char stringdata23[6];
    char stringdata24[9];
    char stringdata25[16];
    char stringdata26[20];
    char stringdata27[20];
    char stringdata28[17];
    char stringdata29[8];
    char stringdata30[6];
    char stringdata31[20];
    char stringdata32[22];
    char stringdata33[9];
    char stringdata34[10];
    char stringdata35[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS_t qt_meta_stringdata_CLASSQuadcopter_MainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "Quadcopter_MainWindow"
        QT_MOC_LITERAL(22, 11),  // "MQTTConsole"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 22),  // "MQTTReceivedMsgGeneral"
        QT_MOC_LITERAL(58, 12),  // "QMqttMessage"
        QT_MOC_LITERAL(71, 3),  // "msg"
        QT_MOC_LITERAL(75, 21),  // "MQTTReceivedMsgStatus"
        QT_MOC_LITERAL(97, 22),  // "MQTTReceivedMsgCommand"
        QT_MOC_LITERAL(120, 11),  // "MQTTSentMsg"
        QT_MOC_LITERAL(132, 22),  // "MQTTUpdateServerStatus"
        QT_MOC_LITERAL(155, 6),  // "status"
        QT_MOC_LITERAL(162, 17),  // "ButtonReadDisable"
        QT_MOC_LITERAL(180, 16),  // "ButtonReadEnable"
        QT_MOC_LITERAL(197, 16),  // "ButtonReadStatus"
        QT_MOC_LITERAL(214, 13),  // "ButtonForward"
        QT_MOC_LITERAL(228, 13),  // "ButtonReverse"
        QT_MOC_LITERAL(242, 10),  // "ButtonLeft"
        QT_MOC_LITERAL(253, 11),  // "ButtonRight"
        QT_MOC_LITERAL(265, 22),  // "AnimationButtonForward"
        QT_MOC_LITERAL(288, 22),  // "AnimationButtonReverse"
        QT_MOC_LITERAL(311, 19),  // "AnimationButtonLeft"
        QT_MOC_LITERAL(331, 20),  // "AnimationButtonRight"
        QT_MOC_LITERAL(352, 18),  // "GeologicalPosition"
        QT_MOC_LITERAL(371, 5),  // "value"
        QT_MOC_LITERAL(377, 8),  // "Throttle"
        QT_MOC_LITERAL(386, 15),  // "DroneSelectNext"
        QT_MOC_LITERAL(402, 19),  // "DroneSelectPrevious"
        QT_MOC_LITERAL(422, 19),  // "ButtonCameraShutter"
        QT_MOC_LITERAL(442, 16),  // "UpdateDroneIndex"
        QT_MOC_LITERAL(459, 7),  // "uint8_t"
        QT_MOC_LITERAL(467, 5),  // "index"
        QT_MOC_LITERAL(473, 19),  // "QuadcopterParamInit"
        QT_MOC_LITERAL(493, 21),  // "QuadcopterParamUpdate"
        QT_MOC_LITERAL(515, 8),  // "inputObj"
        QT_MOC_LITERAL(524, 9),  // "ClockInit"
        QT_MOC_LITERAL(534, 11)   // "ClockUpdate"
    },
    "Quadcopter_MainWindow",
    "MQTTConsole",
    "",
    "MQTTReceivedMsgGeneral",
    "QMqttMessage",
    "msg",
    "MQTTReceivedMsgStatus",
    "MQTTReceivedMsgCommand",
    "MQTTSentMsg",
    "MQTTUpdateServerStatus",
    "status",
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
    "UpdateDroneIndex",
    "uint8_t",
    "index",
    "QuadcopterParamInit",
    "QuadcopterParamUpdate",
    "inputObj",
    "ClockInit",
    "ClockUpdate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuadcopter_MainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  176,    2, 0x08,    1 /* Private */,
       3,    1,  177,    2, 0x08,    2 /* Private */,
       6,    1,  180,    2, 0x08,    4 /* Private */,
       7,    1,  183,    2, 0x08,    6 /* Private */,
       8,    1,  186,    2, 0x08,    8 /* Private */,
       9,    1,  189,    2, 0x08,   10 /* Private */,
      11,    0,  192,    2, 0x08,   12 /* Private */,
      12,    0,  193,    2, 0x08,   13 /* Private */,
      13,    0,  194,    2, 0x08,   14 /* Private */,
      14,    0,  195,    2, 0x08,   15 /* Private */,
      15,    0,  196,    2, 0x08,   16 /* Private */,
      16,    0,  197,    2, 0x08,   17 /* Private */,
      17,    0,  198,    2, 0x08,   18 /* Private */,
      18,    0,  199,    2, 0x08,   19 /* Private */,
      19,    0,  200,    2, 0x08,   20 /* Private */,
      20,    0,  201,    2, 0x08,   21 /* Private */,
      21,    0,  202,    2, 0x08,   22 /* Private */,
      22,    1,  203,    2, 0x08,   23 /* Private */,
      24,    1,  206,    2, 0x08,   25 /* Private */,
      25,    0,  209,    2, 0x08,   27 /* Private */,
      26,    0,  210,    2, 0x08,   28 /* Private */,
      27,    0,  211,    2, 0x08,   29 /* Private */,
      28,    1,  212,    2, 0x08,   30 /* Private */,
      31,    0,  215,    2, 0x08,   32 /* Private */,
      32,    1,  216,    2, 0x08,   33 /* Private */,
      34,    0,  219,    2, 0x08,   35 /* Private */,
      35,    0,  220,    2, 0x08,   36 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
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
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   33,
    QMetaType::Void,
    QMetaType::Void,

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
        // method 'MQTTConsole'
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
        // method 'UpdateDroneIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'QuadcopterParamInit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'QuadcopterParamUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'ClockInit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ClockUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Quadcopter_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Quadcopter_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->MQTTConsole(); break;
        case 1: _t->MQTTReceivedMsgGeneral((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 2: _t->MQTTReceivedMsgStatus((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 3: _t->MQTTReceivedMsgCommand((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 4: _t->MQTTSentMsg((*reinterpret_cast< std::add_pointer_t<QMqttMessage>>(_a[1]))); break;
        case 5: _t->MQTTUpdateServerStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->ButtonReadDisable(); break;
        case 7: _t->ButtonReadEnable(); break;
        case 8: _t->ButtonReadStatus(); break;
        case 9: _t->ButtonForward(); break;
        case 10: _t->ButtonReverse(); break;
        case 11: _t->ButtonLeft(); break;
        case 12: _t->ButtonRight(); break;
        case 13: _t->AnimationButtonForward(); break;
        case 14: _t->AnimationButtonReverse(); break;
        case 15: _t->AnimationButtonLeft(); break;
        case 16: _t->AnimationButtonRight(); break;
        case 17: _t->GeologicalPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->Throttle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->DroneSelectNext(); break;
        case 20: _t->DroneSelectPrevious(); break;
        case 21: _t->ButtonCameraShutter(); break;
        case 22: _t->UpdateDroneIndex((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 23: _t->QuadcopterParamInit(); break;
        case 24: _t->QuadcopterParamUpdate((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 25: _t->ClockInit(); break;
        case 26: _t->ClockUpdate(); break;
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
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
