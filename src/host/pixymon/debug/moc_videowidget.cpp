/****************************************************************************
** Meta object code from reading C++ file 'videowidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../videowidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoWidget_t {
    QByteArrayData data[13];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoWidget_t qt_meta_stringdata_VideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoWidget"
QT_MOC_LITERAL(1, 12, 9), // "selection"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "x0"
QT_MOC_LITERAL(4, 26, 2), // "y0"
QT_MOC_LITERAL(5, 29, 5), // "width"
QT_MOC_LITERAL(6, 35, 6), // "height"
QT_MOC_LITERAL(7, 42, 11), // "handleImage"
QT_MOC_LITERAL(8, 54, 5), // "image"
QT_MOC_LITERAL(9, 60, 11), // "renderFlags"
QT_MOC_LITERAL(10, 72, 11), // "acceptInput"
QT_MOC_LITERAL(11, 84, 22), // "VideoWidget::InputMode"
QT_MOC_LITERAL(12, 107, 4) // "mode"

    },
    "VideoWidget\0selection\0\0x0\0y0\0width\0"
    "height\0handleImage\0image\0renderFlags\0"
    "acceptInput\0VideoWidget::InputMode\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   38,    2, 0x0a /* Public */,
      10,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::UChar,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void VideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoWidget *_t = static_cast<VideoWidget *>(_o);
        switch (_id) {
        case 0: _t->selection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->handleImage((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2]))); break;
        case 2: _t->acceptInput((*reinterpret_cast< VideoWidget::InputMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoWidget::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::selection)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject VideoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoWidget.data,
      qt_meta_data_VideoWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWidget.stringdata))
        return static_cast<void*>(const_cast< VideoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void VideoWidget::selection(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
