/****************************************************************************
** Meta object code from reading C++ file 'simulacion.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Lab6/simulacion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulacion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Simulacion_t {
    const uint offsetsAndSize[20];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Simulacion_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Simulacion_t qt_meta_stringdata_Simulacion = {
    {
QT_MOC_LITERAL(0, 10), // "Simulacion"
QT_MOC_LITERAL(11, 10), // "actualizar"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 22), // "on_nuevoCuerpo_clicked"
QT_MOC_LITERAL(46, 28), // "on_iniciarSimulacion_clicked"
QT_MOC_LITERAL(75, 24), // "on_listaPlanetas_clicked"
QT_MOC_LITERAL(100, 18), // "on_Cambios_clicked"
QT_MOC_LITERAL(119, 18), // "on_Detener_clicked"
QT_MOC_LITERAL(138, 33), // "on_posicionInicialX_C_textCha..."
QT_MOC_LITERAL(172, 4) // "arg1"

    },
    "Simulacion\0actualizar\0\0on_nuevoCuerpo_clicked\0"
    "on_iniciarSimulacion_clicked\0"
    "on_listaPlanetas_clicked\0on_Cambios_clicked\0"
    "on_Detener_clicked\0on_posicionInicialX_C_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Simulacion[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    1,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void Simulacion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulacion *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actualizar(); break;
        case 1: _t->on_nuevoCuerpo_clicked(); break;
        case 2: _t->on_iniciarSimulacion_clicked(); break;
        case 3: _t->on_listaPlanetas_clicked(); break;
        case 4: _t->on_Cambios_clicked(); break;
        case 5: _t->on_Detener_clicked(); break;
        case 6: break;
        default: ;
        }
    }
}

const QMetaObject Simulacion::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Simulacion.offsetsAndSize,
    qt_meta_data_Simulacion,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Simulacion_t
, QtPrivate::TypeAndForceComplete<Simulacion, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Simulacion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Simulacion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Simulacion.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Simulacion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
