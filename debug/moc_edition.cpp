/****************************************************************************
** Meta object code from reading C++ file 'edition.hpp'
**
** Created: Sat 29. Sep 01:00:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/edition.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edition.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Edition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      22,    8,    8,    8, 0x05,
      36,    8,    8,    8, 0x05,
      52,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,    8,    8,    8, 0x08,
      79,    8,    8,    8, 0x08,
      93,    8,    8,    8, 0x08,
     108,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Edition[] = {
    "Edition\0\0addClicked()\0editClicked()\0"
    "cancelClicked()\0validClicked()\0"
    "addButton()\0validButton()\0cancelButton()\0"
    "editButton()\0"
};

void Edition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Edition *_t = static_cast<Edition *>(_o);
        switch (_id) {
        case 0: _t->addClicked(); break;
        case 1: _t->editClicked(); break;
        case 2: _t->cancelClicked(); break;
        case 3: _t->validClicked(); break;
        case 4: _t->addButton(); break;
        case 5: _t->validButton(); break;
        case 6: _t->cancelButton(); break;
        case 7: _t->editButton(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Edition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Edition::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Edition,
      qt_meta_data_Edition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Edition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Edition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Edition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Edition))
        return static_cast<void*>(const_cast< Edition*>(this));
    return QWidget::qt_metacast(_clname);
}

int Edition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Edition::addClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Edition::editClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Edition::cancelClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Edition::validClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
