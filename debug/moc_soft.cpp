/****************************************************************************
** Meta object code from reading C++ file 'soft.hpp'
**
** Created: Sat 29. Sep 16:10:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/soft.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soft.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Soft[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      19,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Soft[] = {
    "Soft\0\0deletePage()\0needPage()\0"
    "removeApp(int)\0"
};

void Soft::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Soft *_t = static_cast<Soft *>(_o);
        switch (_id) {
        case 0: _t->deletePage(); break;
        case 1: _t->needPage(); break;
        case 2: _t->removeApp((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Soft::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Soft::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Soft,
      qt_meta_data_Soft, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Soft::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Soft::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Soft::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Soft))
        return static_cast<void*>(const_cast< Soft*>(this));
    return QWidget::qt_metacast(_clname);
}

int Soft::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Soft::deletePage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Soft::needPage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
