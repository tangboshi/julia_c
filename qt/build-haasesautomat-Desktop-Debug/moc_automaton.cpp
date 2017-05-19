/****************************************************************************
** Meta object code from reading C++ file 'automaton.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../haasesautomat/automaton.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'automaton.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_automaton_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_automaton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_automaton_t qt_meta_stringdata_automaton = {
    {
QT_MOC_LITERAL(0, 0, 9), // "automaton"
QT_MOC_LITERAL(1, 10, 19), // "vendorDisplayStatus"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "status"
QT_MOC_LITERAL(4, 38, 20), // "vendorDisplayDetails"
QT_MOC_LITERAL(5, 59, 7), // "details"
QT_MOC_LITERAL(6, 67, 7), // "revenue"
QT_MOC_LITERAL(7, 75, 6), // "amount"
QT_MOC_LITERAL(8, 82, 11), // "vendorState"
QT_MOC_LITERAL(9, 94, 8), // "newState"
QT_MOC_LITERAL(10, 103, 16), // "deactivateButton"
QT_MOC_LITERAL(11, 120, 6), // "button"
QT_MOC_LITERAL(12, 127, 14), // "activateButton"
QT_MOC_LITERAL(13, 142, 15) // "vendorStateSlot"

    },
    "automaton\0vendorDisplayStatus\0\0status\0"
    "vendorDisplayDetails\0details\0revenue\0"
    "amount\0vendorState\0newState\0"
    "deactivateButton\0button\0activateButton\0"
    "vendorStateSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_automaton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
      10,    1,   61,    2, 0x06 /* Public */,
      12,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    9,

       0        // eod
};

void automaton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        automaton *_t = static_cast<automaton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vendorDisplayStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->vendorDisplayDetails((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->revenue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->vendorState((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->deactivateButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->activateButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->vendorStateSlot((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (automaton::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&automaton::vendorDisplayStatus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (automaton::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&automaton::vendorDisplayDetails)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (automaton::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&automaton::revenue)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (automaton::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&automaton::vendorState)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (automaton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&automaton::deactivateButton)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (automaton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&automaton::activateButton)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject automaton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_automaton.data,
      qt_meta_data_automaton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *automaton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *automaton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_automaton.stringdata0))
        return static_cast<void*>(const_cast< automaton*>(this));
    return QObject::qt_metacast(_clname);
}

int automaton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void automaton::vendorDisplayStatus(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void automaton::vendorDisplayDetails(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void automaton::revenue(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void automaton::vendorState(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void automaton::deactivateButton(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void automaton::activateButton(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
