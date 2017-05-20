/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../haasesautomat/window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_window_t {
    QByteArrayData data[19];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_window_t qt_meta_stringdata_window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "window"
QT_MOC_LITERAL(1, 7, 25), // "changeVendorDisplayStatus"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "status"
QT_MOC_LITERAL(4, 41, 26), // "changeVendorDisplayDetails"
QT_MOC_LITERAL(5, 68, 7), // "details"
QT_MOC_LITERAL(6, 76, 20), // "deactivateButtonSlot"
QT_MOC_LITERAL(7, 97, 2), // "id"
QT_MOC_LITERAL(8, 100, 18), // "activateButtonSlot"
QT_MOC_LITERAL(9, 119, 27), // "on_productOneButton_clicked"
QT_MOC_LITERAL(10, 147, 27), // "on_insertCoinButton_clicked"
QT_MOC_LITERAL(11, 175, 27), // "on_productTwoButton_clicked"
QT_MOC_LITERAL(12, 203, 29), // "on_productThreeButton_clicked"
QT_MOC_LITERAL(13, 233, 28), // "on_productFourButton_clicked"
QT_MOC_LITERAL(14, 262, 28), // "on_productFiveButton_clicked"
QT_MOC_LITERAL(15, 291, 23), // "on_refundButton_clicked"
QT_MOC_LITERAL(16, 315, 14), // "uiNewStateSlot"
QT_MOC_LITERAL(17, 330, 5), // "state"
QT_MOC_LITERAL(18, 336, 24) // "on_actionAbout_triggered"

    },
    "window\0changeVendorDisplayStatus\0\0"
    "status\0changeVendorDisplayDetails\0"
    "details\0deactivateButtonSlot\0id\0"
    "activateButtonSlot\0on_productOneButton_clicked\0"
    "on_insertCoinButton_clicked\0"
    "on_productTwoButton_clicked\0"
    "on_productThreeButton_clicked\0"
    "on_productFourButton_clicked\0"
    "on_productFiveButton_clicked\0"
    "on_refundButton_clicked\0uiNewStateSlot\0"
    "state\0on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x0a /* Public */,
       6,    1,   85,    2, 0x0a /* Public */,
       8,    1,   88,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    1,   98,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   17,
    QMetaType::Void,

       0        // eod
};

void window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        window *_t = static_cast<window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeVendorDisplayStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changeVendorDisplayDetails((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->deactivateButtonSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->activateButtonSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_productOneButton_clicked(); break;
        case 5: _t->on_insertCoinButton_clicked(); break;
        case 6: _t->on_productTwoButton_clicked(); break;
        case 7: _t->on_productThreeButton_clicked(); break;
        case 8: _t->on_productFourButton_clicked(); break;
        case 9: _t->on_productFiveButton_clicked(); break;
        case 10: _t->on_refundButton_clicked(); break;
        case 11: _t->uiNewStateSlot((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 12: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_window.data,
      qt_meta_data_window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_window.stringdata0))
        return static_cast<void*>(const_cast< window*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
