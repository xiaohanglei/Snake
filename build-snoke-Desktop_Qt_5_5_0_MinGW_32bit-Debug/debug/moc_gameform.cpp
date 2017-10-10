/****************************************************************************
** Meta object code from reading C++ file 'gameform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../snoke/gameform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameForm_t {
    QByteArrayData data[11];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameForm_t qt_meta_stringdata_GameForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameForm"
QT_MOC_LITERAL(1, 9, 17), // "on_btnret_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "checked"
QT_MOC_LITERAL(4, 36, 17), // "on_btnsta_clicked"
QT_MOC_LITERAL(5, 54, 17), // "on_btntop_clicked"
QT_MOC_LITERAL(6, 72, 19), // "on_btnright_clicked"
QT_MOC_LITERAL(7, 92, 17), // "on_btnbut_clicked"
QT_MOC_LITERAL(8, 110, 18), // "on_btnleft_clicked"
QT_MOC_LITERAL(9, 129, 3), // "sjd"
QT_MOC_LITERAL(10, 133, 18) // "on_btnstop_clicked"

    },
    "GameForm\0on_btnret_clicked\0\0checked\0"
    "on_btnsta_clicked\0on_btntop_clicked\0"
    "on_btnright_clicked\0on_btnbut_clicked\0"
    "on_btnleft_clicked\0sjd\0on_btnstop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void GameForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameForm *_t = static_cast<GameForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnret_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_btnsta_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_btntop_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_btnright_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_btnbut_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_btnleft_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sjd(); break;
        case 7: _t->on_btnstop_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GameForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameForm.data,
      qt_meta_data_GameForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameForm.stringdata0))
        return static_cast<void*>(const_cast< GameForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
