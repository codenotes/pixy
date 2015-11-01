/****************************************************************************
** Meta object code from reading C++ file 'console.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../console.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'console.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConsoleWidget_t {
    QByteArrayData data[17];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsoleWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsoleWidget_t qt_meta_stringdata_ConsoleWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConsoleWidget"
QT_MOC_LITERAL(1, 14, 8), // "textLine"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "line"
QT_MOC_LITERAL(4, 29, 10), // "controlKey"
QT_MOC_LITERAL(5, 40, 7), // "Qt::Key"
QT_MOC_LITERAL(6, 48, 3), // "key"
QT_MOC_LITERAL(7, 52, 5), // "print"
QT_MOC_LITERAL(8, 58, 4), // "text"
QT_MOC_LITERAL(9, 63, 5), // "color"
QT_MOC_LITERAL(10, 69, 7), // "command"
QT_MOC_LITERAL(11, 77, 5), // "error"
QT_MOC_LITERAL(12, 83, 6), // "prompt"
QT_MOC_LITERAL(13, 90, 4), // "type"
QT_MOC_LITERAL(14, 95, 11), // "acceptInput"
QT_MOC_LITERAL(15, 107, 6), // "accept"
QT_MOC_LITERAL(16, 114, 11) // "handleTimer"

    },
    "ConsoleWidget\0textLine\0\0line\0controlKey\0"
    "Qt::Key\0key\0print\0text\0color\0command\0"
    "error\0prompt\0type\0acceptInput\0accept\0"
    "handleTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   75,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x2a /* Public | MethodCloned */,
      10,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    1,   93,    2, 0x0a /* Public */,
      14,    1,   96,    2, 0x0a /* Public */,
      16,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void ConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConsoleWidget *_t = static_cast<ConsoleWidget *>(_o);
        switch (_id) {
        case 0: _t->textLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->controlKey((*reinterpret_cast< Qt::Key(*)>(_a[1]))); break;
        case 2: _t->print((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 3: _t->print((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->command((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->prompt((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->prompt(); break;
        case 8: _t->type((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->acceptInput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->handleTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConsoleWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConsoleWidget::textLine)) {
                *result = 0;
            }
        }
        {
            typedef void (ConsoleWidget::*_t)(Qt::Key );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConsoleWidget::controlKey)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ConsoleWidget::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_ConsoleWidget.data,
      qt_meta_data_ConsoleWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleWidget.stringdata))
        return static_cast<void*>(const_cast< ConsoleWidget*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int ConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ConsoleWidget::textLine(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConsoleWidget::controlKey(Qt::Key _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
