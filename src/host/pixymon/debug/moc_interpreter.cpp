/****************************************************************************
** Meta object code from reading C++ file 'interpreter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interpreter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interpreter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Interpreter_t {
    QByteArrayData data[39];
    char stringdata[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interpreter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interpreter_t qt_meta_stringdata_Interpreter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Interpreter"
QT_MOC_LITERAL(1, 12, 8), // "runState"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "state"
QT_MOC_LITERAL(4, 28, 7), // "textOut"
QT_MOC_LITERAL(5, 36, 4), // "text"
QT_MOC_LITERAL(6, 41, 5), // "color"
QT_MOC_LITERAL(7, 47, 5), // "error"
QT_MOC_LITERAL(8, 53, 14), // "consoleCommand"
QT_MOC_LITERAL(9, 68, 6), // "prompt"
QT_MOC_LITERAL(10, 75, 10), // "videoInput"
QT_MOC_LITERAL(11, 86, 22), // "VideoWidget::InputMode"
QT_MOC_LITERAL(12, 109, 4), // "mode"
QT_MOC_LITERAL(13, 114, 13), // "enableConsole"
QT_MOC_LITERAL(14, 128, 6), // "enable"
QT_MOC_LITERAL(15, 135, 9), // "connected"
QT_MOC_LITERAL(16, 145, 6), // "Device"
QT_MOC_LITERAL(17, 152, 6), // "device"
QT_MOC_LITERAL(18, 159, 15), // "actionScriptlet"
QT_MOC_LITERAL(19, 175, 5), // "index"
QT_MOC_LITERAL(20, 181, 6), // "action"
QT_MOC_LITERAL(21, 188, 9), // "scriptlet"
QT_MOC_LITERAL(22, 198, 9), // "parameter"
QT_MOC_LITERAL(23, 208, 2), // "id"
QT_MOC_LITERAL(24, 211, 4), // "data"
QT_MOC_LITERAL(25, 216, 11), // "paramLoaded"
QT_MOC_LITERAL(26, 228, 7), // "version"
QT_MOC_LITERAL(27, 236, 5), // "major"
QT_MOC_LITERAL(28, 242, 5), // "minor"
QT_MOC_LITERAL(29, 248, 5), // "build"
QT_MOC_LITERAL(30, 254, 10), // "controlKey"
QT_MOC_LITERAL(31, 265, 7), // "Qt::Key"
QT_MOC_LITERAL(32, 273, 3), // "key"
QT_MOC_LITERAL(33, 277, 7), // "command"
QT_MOC_LITERAL(34, 285, 15), // "handleSelection"
QT_MOC_LITERAL(35, 301, 2), // "x0"
QT_MOC_LITERAL(36, 304, 2), // "y0"
QT_MOC_LITERAL(37, 307, 5), // "width"
QT_MOC_LITERAL(38, 313, 6) // "height"

    },
    "Interpreter\0runState\0\0state\0textOut\0"
    "text\0color\0error\0consoleCommand\0prompt\0"
    "videoInput\0VideoWidget::InputMode\0"
    "mode\0enableConsole\0enable\0connected\0"
    "Device\0device\0actionScriptlet\0index\0"
    "action\0scriptlet\0parameter\0id\0data\0"
    "paramLoaded\0version\0major\0minor\0build\0"
    "controlKey\0Qt::Key\0key\0command\0"
    "handleSelection\0x0\0y0\0width\0height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interpreter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    2,  102,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x26 /* Public | MethodCloned */,
       7,    1,  110,    2, 0x06 /* Public */,
       8,    1,  113,    2, 0x06 /* Public */,
       9,    1,  116,    2, 0x06 /* Public */,
      10,    1,  119,    2, 0x06 /* Public */,
      13,    1,  122,    2, 0x06 /* Public */,
      15,    2,  125,    2, 0x06 /* Public */,
      18,    3,  130,    2, 0x06 /* Public */,
      18,    2,  137,    2, 0x06 /* Public */,
      22,    2,  142,    2, 0x06 /* Public */,
      25,    0,  147,    2, 0x06 /* Public */,
      26,    3,  148,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  155,    2, 0x08 /* Private */,
      33,    1,  158,    2, 0x08 /* Private */,
      34,    4,  161,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Bool,   17,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QStringList,   19,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, QMetaType::UShort,   27,   28,   29,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   35,   36,   37,   38,

       0        // eod
};

void Interpreter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Interpreter *_t = static_cast<Interpreter *>(_o);
        switch (_id) {
        case 0: _t->runState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->textOut((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 2: _t->textOut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->consoleCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->prompt((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->videoInput((*reinterpret_cast< VideoWidget::InputMode(*)>(_a[1]))); break;
        case 7: _t->enableConsole((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->connected((*reinterpret_cast< Device(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->actionScriptlet((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 10: _t->actionScriptlet((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 11: _t->parameter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 12: _t->paramLoaded(); break;
        case 13: _t->version((*reinterpret_cast< ushort(*)>(_a[1])),(*reinterpret_cast< ushort(*)>(_a[2])),(*reinterpret_cast< ushort(*)>(_a[3]))); break;
        case 14: _t->controlKey((*reinterpret_cast< Qt::Key(*)>(_a[1]))); break;
        case 15: _t->command((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->handleSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Interpreter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::runState)) {
                *result = 0;
            }
        }
        {
            typedef void (Interpreter::*_t)(QString , QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::textOut)) {
                *result = 1;
            }
        }
        {
            typedef void (Interpreter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::error)) {
                *result = 3;
            }
        }
        {
            typedef void (Interpreter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::consoleCommand)) {
                *result = 4;
            }
        }
        {
            typedef void (Interpreter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::prompt)) {
                *result = 5;
            }
        }
        {
            typedef void (Interpreter::*_t)(VideoWidget::InputMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::videoInput)) {
                *result = 6;
            }
        }
        {
            typedef void (Interpreter::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::enableConsole)) {
                *result = 7;
            }
        }
        {
            typedef void (Interpreter::*_t)(Device , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::connected)) {
                *result = 8;
            }
        }
        {
            typedef void (Interpreter::*_t)(int , QString , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::actionScriptlet)) {
                *result = 9;
            }
        }
        {
            typedef void (Interpreter::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::actionScriptlet)) {
                *result = 10;
            }
        }
        {
            typedef void (Interpreter::*_t)(QString , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::parameter)) {
                *result = 11;
            }
        }
        {
            typedef void (Interpreter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::paramLoaded)) {
                *result = 12;
            }
        }
        {
            typedef void (Interpreter::*_t)(ushort , ushort , ushort );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Interpreter::version)) {
                *result = 13;
            }
        }
    }
}

const QMetaObject Interpreter::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Interpreter.data,
      qt_meta_data_Interpreter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Interpreter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interpreter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Interpreter.stringdata))
        return static_cast<void*>(const_cast< Interpreter*>(this));
    return QThread::qt_metacast(_clname);
}

int Interpreter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void Interpreter::runState(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Interpreter::textOut(QString _t1, QColor _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void Interpreter::error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Interpreter::consoleCommand(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Interpreter::prompt(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Interpreter::videoInput(VideoWidget::InputMode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Interpreter::enableConsole(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Interpreter::connected(Device _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Interpreter::actionScriptlet(int _t1, QString _t2, QStringList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Interpreter::actionScriptlet(QString _t1, QStringList _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Interpreter::parameter(QString _t1, QByteArray _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Interpreter::paramLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void Interpreter::version(ushort _t1, ushort _t2, ushort _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
