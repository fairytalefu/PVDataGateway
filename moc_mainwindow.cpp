/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "TimeOutSignal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "on_OpenSerial_clicked"
QT_MOC_LITERAL(4, 48, 22), // "on_CloseSerial_clicked"
QT_MOC_LITERAL(5, 71, 23), // "on_HistoryTable_clicked"
QT_MOC_LITERAL(6, 95, 23), // "on_TestDataBase_clicked"
QT_MOC_LITERAL(7, 119, 16), // "on_Fresh_clicked"
QT_MOC_LITERAL(8, 136, 22), // "on_video_start_clicked"
QT_MOC_LITERAL(9, 159, 21), // "on_video_stop_clicked"
QT_MOC_LITERAL(10, 181, 21), // "PvStationIDcomboxInfo"
QT_MOC_LITERAL(11, 203, 5), // "index"
QT_MOC_LITERAL(12, 209, 10), // "comboxInfo"
QT_MOC_LITERAL(13, 220, 23), // "timeInterval_comboxInfo"
QT_MOC_LITERAL(14, 244, 9), // "onTimeOut"
QT_MOC_LITERAL(15, 254, 13), // "onDateTimeOut"
QT_MOC_LITERAL(16, 268, 12), // "TimeOutEvent"
QT_MOC_LITERAL(17, 281, 14), // "processStarted"
QT_MOC_LITERAL(18, 296, 15), // "processFinished"
QT_MOC_LITERAL(19, 312, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(20, 336, 14) // "OnVideoTimeOut"

    },
    "MainWindow\0TimeOutSignal\0\0"
    "on_OpenSerial_clicked\0on_CloseSerial_clicked\0"
    "on_HistoryTable_clicked\0on_TestDataBase_clicked\0"
    "on_Fresh_clicked\0on_video_start_clicked\0"
    "on_video_stop_clicked\0PvStationIDcomboxInfo\0"
    "index\0comboxInfo\0timeInterval_comboxInfo\0"
    "onTimeOut\0onDateTimeOut\0TimeOutEvent\0"
    "processStarted\0processFinished\0"
    "readyReadStandardOutput\0OnVideoTimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    1,  112,    2, 0x0a /* Public */,
      12,    1,  115,    2, 0x0a /* Public */,
      13,    1,  118,    2, 0x0a /* Public */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x0a /* Public */,
      16,    0,  123,    2, 0x0a /* Public */,
      17,    0,  124,    2, 0x0a /* Public */,
      18,    0,  125,    2, 0x0a /* Public */,
      19,    0,  126,    2, 0x0a /* Public */,
      20,    0,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TimeOutSignal(); break;
        case 1: _t->on_OpenSerial_clicked(); break;
        case 2: _t->on_CloseSerial_clicked(); break;
        case 3: _t->on_HistoryTable_clicked(); break;
        case 4: _t->on_TestDataBase_clicked(); break;
        case 5: _t->on_Fresh_clicked(); break;
        case 6: _t->on_video_start_clicked(); break;
        case 7: _t->on_video_stop_clicked(); break;
        case 8: _t->PvStationIDcomboxInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->comboxInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->timeInterval_comboxInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onTimeOut(); break;
        case 12: _t->onDateTimeOut(); break;
        case 13: _t->TimeOutEvent(); break;
        case 14: _t->processStarted(); break;
        case 15: _t->processFinished(); break;
        case 16: _t->readyReadStandardOutput(); break;
        case 17: _t->OnVideoTimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::TimeOutSignal)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::TimeOutSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
