/****************************************************************************
** Meta object code from reading C++ file 'agatku.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../agatku.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agatku.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Agatku_t {
    QByteArrayData data[12];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Agatku_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Agatku_t qt_meta_stringdata_Agatku = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Agatku"
QT_MOC_LITERAL(1, 7, 9), // "choseFile"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "showPayments"
QT_MOC_LITERAL(4, 31, 12), // "readPayments"
QT_MOC_LITERAL(5, 44, 12), // "prepareTable"
QT_MOC_LITERAL(6, 57, 8), // "rowCount"
QT_MOC_LITERAL(7, 66, 13), // "printPayments"
QT_MOC_LITERAL(8, 80, 24), // "std::vector<PaymentsRow>"
QT_MOC_LITERAL(9, 105, 8), // "payments"
QT_MOC_LITERAL(10, 114, 8), // "reFilter"
QT_MOC_LITERAL(11, 123, 6) // "filter"

    },
    "Agatku\0choseFile\0\0showPayments\0"
    "readPayments\0prepareTable\0rowCount\0"
    "printPayments\0std::vector<PaymentsRow>\0"
    "payments\0reFilter\0filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Agatku[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void Agatku::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Agatku *_t = static_cast<Agatku *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->choseFile(); break;
        case 1: _t->showPayments(); break;
        case 2: { QStringList _r = _t->readPayments();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: _t->prepareTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->printPayments((*reinterpret_cast< std::vector<PaymentsRow>(*)>(_a[1]))); break;
        case 5: _t->reFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Agatku::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Agatku.data,
      qt_meta_data_Agatku,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Agatku::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Agatku::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Agatku.stringdata0))
        return static_cast<void*>(const_cast< Agatku*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Agatku::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
