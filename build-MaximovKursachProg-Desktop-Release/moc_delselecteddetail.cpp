/****************************************************************************
** Meta object code from reading C++ file 'delselecteddetail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MaximovKursachProg/delselecteddetail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delselecteddetail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DelSelectedDetail_t {
    QByteArrayData data[6];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelSelectedDetail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelSelectedDetail_t qt_meta_stringdata_DelSelectedDetail = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DelSelectedDetail"
QT_MOC_LITERAL(1, 18, 19), // "DSDNo_button_cliked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "DSDYes_button_cliked"
QT_MOC_LITERAL(4, 60, 26), // "on_DSDNopushButton_clicked"
QT_MOC_LITERAL(5, 87, 27) // "on_DSDYespushButton_clicked"

    },
    "DelSelectedDetail\0DSDNo_button_cliked\0"
    "\0DSDYes_button_cliked\0on_DSDNopushButton_clicked\0"
    "on_DSDYespushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelSelectedDetail[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DelSelectedDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelSelectedDetail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DSDNo_button_cliked(); break;
        case 1: _t->DSDYes_button_cliked(); break;
        case 2: _t->on_DSDNopushButton_clicked(); break;
        case 3: _t->on_DSDYespushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelSelectedDetail::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelSelectedDetail::DSDNo_button_cliked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DelSelectedDetail::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelSelectedDetail::DSDYes_button_cliked)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DelSelectedDetail::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DelSelectedDetail.data,
    qt_meta_data_DelSelectedDetail,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelSelectedDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelSelectedDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelSelectedDetail.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DelSelectedDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DelSelectedDetail::DSDNo_button_cliked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DelSelectedDetail::DSDYes_button_cliked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
