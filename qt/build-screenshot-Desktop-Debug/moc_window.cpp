/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../screenshot/window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_window_t {
    QByteArrayData data[23];
    char stringdata0[409];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_window_t qt_meta_stringdata_window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "window"
QT_MOC_LITERAL(1, 7, 11), // "captureMode"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "mode"
QT_MOC_LITERAL(4, 25, 21), // "on_buttonTake_clicked"
QT_MOC_LITERAL(5, 47, 21), // "on_buttonStop_clicked"
QT_MOC_LITERAL(6, 69, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(7, 94, 25), // "on_buttonSavePath_clicked"
QT_MOC_LITERAL(8, 120, 29), // "on_sliderOpacity_valueChanged"
QT_MOC_LITERAL(9, 150, 5), // "value"
QT_MOC_LITERAL(10, 156, 33), // "on_buttonResetSeriesCount_cli..."
QT_MOC_LITERAL(11, 190, 14), // "takeScreenshot"
QT_MOC_LITERAL(12, 205, 8), // "saveFile"
QT_MOC_LITERAL(13, 214, 13), // "updatePreview"
QT_MOC_LITERAL(14, 228, 11), // "setSavepath"
QT_MOC_LITERAL(15, 240, 22), // "updateNextScreenshotIn"
QT_MOC_LITERAL(16, 263, 23), // "setupNextScreenshotInfo"
QT_MOC_LITERAL(17, 287, 23), // "setRectangleCoordinates"
QT_MOC_LITERAL(18, 311, 5), // "start"
QT_MOC_LITERAL(19, 317, 3), // "end"
QT_MOC_LITERAL(20, 321, 23), // "on_actionTake_triggered"
QT_MOC_LITERAL(21, 345, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(22, 369, 39) // "on_buttonClearScreenshotPrevi..."

    },
    "window\0captureMode\0\0mode\0on_buttonTake_clicked\0"
    "on_buttonStop_clicked\0on_actionAbout_triggered\0"
    "on_buttonSavePath_clicked\0"
    "on_sliderOpacity_valueChanged\0value\0"
    "on_buttonResetSeriesCount_clicked\0"
    "takeScreenshot\0saveFile\0updatePreview\0"
    "setSavepath\0updateNextScreenshotIn\0"
    "setupNextScreenshotInfo\0setRectangleCoordinates\0"
    "start\0end\0on_actionTake_triggered\0"
    "on_actionSave_triggered\0"
    "on_buttonClearScreenshotPreview_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  102,    2, 0x08 /* Private */,
       5,    0,  103,    2, 0x08 /* Private */,
       6,    0,  104,    2, 0x08 /* Private */,
       7,    0,  105,    2, 0x08 /* Private */,
       8,    1,  106,    2, 0x08 /* Private */,
      10,    0,  109,    2, 0x08 /* Private */,
      11,    0,  110,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    2,  116,    2, 0x08 /* Private */,
      20,    0,  121,    2, 0x08 /* Private */,
      21,    0,  122,    2, 0x08 /* Private */,
      22,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        window *_t = static_cast<window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->captureMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_buttonTake_clicked(); break;
        case 2: _t->on_buttonStop_clicked(); break;
        case 3: _t->on_actionAbout_triggered(); break;
        case 4: _t->on_buttonSavePath_clicked(); break;
        case 5: _t->on_sliderOpacity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_buttonResetSeriesCount_clicked(); break;
        case 7: _t->takeScreenshot(); break;
        case 8: _t->saveFile(); break;
        case 9: _t->updatePreview(); break;
        case 10: _t->setSavepath(); break;
        case 11: _t->updateNextScreenshotIn(); break;
        case 12: _t->setupNextScreenshotInfo(); break;
        case 13: _t->setRectangleCoordinates((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 14: _t->on_actionTake_triggered(); break;
        case 15: _t->on_actionSave_triggered(); break;
        case 16: _t->on_buttonClearScreenshotPreview_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (window::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&window::captureMode)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_window.data,
      qt_meta_data_window,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void window::captureMode(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
