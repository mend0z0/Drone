/****************************************************************************
** Meta object code from reading C++ file 'debug_console.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../_APP_Quadcopter/debug_console.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debug_console.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdebug_consoleENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSdebug_consoleENDCLASS = QtMocHelpers::stringData(
    "debug_console",
    "DebugPortConnectStatus",
    "",
    "SendDataToDebugConsole",
    "data",
    "SendDataToMainConsole",
    "Data",
    "ShowSerialPortErrors",
    "QSerialPort::SerialPortError",
    "SerialPortDataRead",
    "CheckAvailabePorts",
    "SetPortName",
    "index",
    "SetBaudRate",
    "SetNBits",
    "SetParity",
    "SetStopBits",
    "SerialPortConnection",
    "SerialRxClear",
    "SerialRxSave",
    "SerialDataFromMainWindow",
    "ConnectMainWindowToDebugConsole",
    "SerialTxCMDSend",
    "SerialTxCMDClear"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdebug_consoleENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[14];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[5];
    char stringdata5[22];
    char stringdata6[5];
    char stringdata7[21];
    char stringdata8[29];
    char stringdata9[19];
    char stringdata10[19];
    char stringdata11[12];
    char stringdata12[6];
    char stringdata13[12];
    char stringdata14[9];
    char stringdata15[10];
    char stringdata16[12];
    char stringdata17[21];
    char stringdata18[14];
    char stringdata19[13];
    char stringdata20[25];
    char stringdata21[32];
    char stringdata22[16];
    char stringdata23[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdebug_consoleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdebug_consoleENDCLASS_t qt_meta_stringdata_CLASSdebug_consoleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "debug_console"
        QT_MOC_LITERAL(14, 22),  // "DebugPortConnectStatus"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 22),  // "SendDataToDebugConsole"
        QT_MOC_LITERAL(61, 4),  // "data"
        QT_MOC_LITERAL(66, 21),  // "SendDataToMainConsole"
        QT_MOC_LITERAL(88, 4),  // "Data"
        QT_MOC_LITERAL(93, 20),  // "ShowSerialPortErrors"
        QT_MOC_LITERAL(114, 28),  // "QSerialPort::SerialPortError"
        QT_MOC_LITERAL(143, 18),  // "SerialPortDataRead"
        QT_MOC_LITERAL(162, 18),  // "CheckAvailabePorts"
        QT_MOC_LITERAL(181, 11),  // "SetPortName"
        QT_MOC_LITERAL(193, 5),  // "index"
        QT_MOC_LITERAL(199, 11),  // "SetBaudRate"
        QT_MOC_LITERAL(211, 8),  // "SetNBits"
        QT_MOC_LITERAL(220, 9),  // "SetParity"
        QT_MOC_LITERAL(230, 11),  // "SetStopBits"
        QT_MOC_LITERAL(242, 20),  // "SerialPortConnection"
        QT_MOC_LITERAL(263, 13),  // "SerialRxClear"
        QT_MOC_LITERAL(277, 12),  // "SerialRxSave"
        QT_MOC_LITERAL(290, 24),  // "SerialDataFromMainWindow"
        QT_MOC_LITERAL(315, 31),  // "ConnectMainWindowToDebugConsole"
        QT_MOC_LITERAL(347, 15),  // "SerialTxCMDSend"
        QT_MOC_LITERAL(363, 16)   // "SerialTxCMDClear"
    },
    "debug_console",
    "DebugPortConnectStatus",
    "",
    "SendDataToDebugConsole",
    "data",
    "SendDataToMainConsole",
    "Data",
    "ShowSerialPortErrors",
    "QSerialPort::SerialPortError",
    "SerialPortDataRead",
    "CheckAvailabePorts",
    "SetPortName",
    "index",
    "SetBaudRate",
    "SetNBits",
    "SetParity",
    "SetStopBits",
    "SerialPortConnection",
    "SerialRxClear",
    "SerialRxSave",
    "SerialDataFromMainWindow",
    "ConnectMainWindowToDebugConsole",
    "SerialTxCMDSend",
    "SerialTxCMDClear"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdebug_consoleENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       3,    1,  125,    2, 0x06,    3 /* Public */,
       5,    1,  128,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,  131,    2, 0x08,    7 /* Private */,
       9,    0,  134,    2, 0x08,    9 /* Private */,
      10,    0,  135,    2, 0x08,   10 /* Private */,
      11,    1,  136,    2, 0x08,   11 /* Private */,
      13,    1,  139,    2, 0x08,   13 /* Private */,
      14,    1,  142,    2, 0x08,   15 /* Private */,
      15,    1,  145,    2, 0x08,   17 /* Private */,
      16,    1,  148,    2, 0x08,   19 /* Private */,
      17,    0,  151,    2, 0x08,   21 /* Private */,
      18,    0,  152,    2, 0x08,   22 /* Private */,
      19,    0,  153,    2, 0x08,   23 /* Private */,
      20,    1,  154,    2, 0x08,   24 /* Private */,
      21,    0,  157,    2, 0x08,   26 /* Private */,
      22,    0,  158,    2, 0x08,   27 /* Private */,
      23,    0,  159,    2, 0x08,   28 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject debug_console::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdebug_consoleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdebug_consoleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdebug_consoleENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<debug_console, std::true_type>,
        // method 'DebugPortConnectStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'SendDataToDebugConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'SendDataToMainConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ShowSerialPortErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSerialPort::SerialPortError, std::false_type>,
        // method 'SerialPortDataRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CheckAvailabePorts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetPortName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SetBaudRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SetNBits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SetParity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SetStopBits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SerialPortConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SerialRxClear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SerialRxSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SerialDataFromMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ConnectMainWindowToDebugConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SerialTxCMDSend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SerialTxCMDClear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void debug_console::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<debug_console *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DebugPortConnectStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->SendDataToDebugConsole((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->SendDataToMainConsole((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->ShowSerialPortErrors((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 4: _t->SerialPortDataRead(); break;
        case 5: _t->CheckAvailabePorts(); break;
        case 6: _t->SetPortName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->SetBaudRate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->SetNBits((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->SetParity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->SetStopBits((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->SerialPortConnection(); break;
        case 12: _t->SerialRxClear(); break;
        case 13: _t->SerialRxSave(); break;
        case 14: _t->SerialDataFromMainWindow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->ConnectMainWindowToDebugConsole(); break;
        case 16: _t->SerialTxCMDSend(); break;
        case 17: _t->SerialTxCMDClear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (debug_console::*)(bool );
            if (_t _q_method = &debug_console::DebugPortConnectStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (debug_console::*)(QString );
            if (_t _q_method = &debug_console::SendDataToDebugConsole; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (debug_console::*)(QString );
            if (_t _q_method = &debug_console::SendDataToMainConsole; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *debug_console::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *debug_console::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdebug_consoleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int debug_console::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void debug_console::DebugPortConnectStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void debug_console::SendDataToDebugConsole(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void debug_console::SendDataToMainConsole(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
