/****************************************************************************
** Meta object code from reading C++ file 'QCommandLinkButtonModified.hpp'
**
** Created: Sat 29. Sep 15:54:30 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/QCommandLinkButtonModified.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCommandLinkButtonModified.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCommandLinkButtonModified[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QCommandLinkButtonModified[] = {
    "QCommandLinkButtonModified\0\0deleteMe(int)\0"
    "launchSignal()\0"
};

void QCommandLinkButtonModified::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCommandLinkButtonModified *_t = static_cast<QCommandLinkButtonModified *>(_o);
        switch (_id) {
        case 0: _t->deleteMe((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->launchSignal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCommandLinkButtonModified::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCommandLinkButtonModified::staticMetaObject = {
    { &QCommandLinkButton::staticMetaObject, qt_meta_stringdata_QCommandLinkButtonModified,
      qt_meta_data_QCommandLinkButtonModified, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCommandLinkButtonModified::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCommandLinkButtonModified::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCommandLinkButtonModified::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCommandLinkButtonModified))
        return static_cast<void*>(const_cast< QCommandLinkButtonModified*>(this));
    return QCommandLinkButton::qt_metacast(_clname);
}

int QCommandLinkButtonModified::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCommandLinkButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QCommandLinkButtonModified::deleteMe(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
