/****************************************************************************
** Meta object code from reading C++ file 'configdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConfigDialog_t {
    QByteArrayData data[12];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigDialog_t qt_meta_stringdata_ConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ConfigDialog"
QT_MOC_LITERAL(1, 13, 4), // "load"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "apply"
QT_MOC_LITERAL(4, 25, 16), // "QAbstractButton*"
QT_MOC_LITERAL(5, 42, 6), // "button"
QT_MOC_LITERAL(6, 49, 19), // "handleChangeClicked"
QT_MOC_LITERAL(7, 69, 14), // "handleCheckBox"
QT_MOC_LITERAL(8, 84, 12), // "handleSlider"
QT_MOC_LITERAL(9, 97, 8), // "position"
QT_MOC_LITERAL(10, 106, 6), // "accept"
QT_MOC_LITERAL(11, 113, 6) // "reject"

    },
    "ConfigDialog\0load\0\0apply\0QAbstractButton*\0"
    "button\0handleChangeClicked\0handleCheckBox\0"
    "handleSlider\0position\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    1,   55,    2, 0x09 /* Protected */,
      10,    0,   58,    2, 0x09 /* Protected */,
      11,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConfigDialog *_t = static_cast<ConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->apply((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->handleChangeClicked(); break;
        case 3: _t->handleCheckBox(); break;
        case 4: _t->handleSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->accept(); break;
        case 6: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject ConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConfigDialog.data,
      qt_meta_data_ConfigDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigDialog.stringdata))
        return static_cast<void*>(const_cast< ConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
