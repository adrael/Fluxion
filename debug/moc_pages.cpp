/****************************************************************************
** Meta object code from reading C++ file 'pages.hpp'
**
** Created: Sat 29. Sep 09:52:50 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/pages.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pages.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pages[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      22,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,    6,    6,    6, 0x0a,
      45,    6,    6,    6, 0x0a,
      55,    6,    6,    6, 0x0a,
      65,    6,    6,    6, 0x0a,
      78,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Pages[] = {
    "Pages\0\0rightClicked()\0leftClicked()\0"
    "goLeft()\0goRight()\0addPage()\0removePage()\0"
    "end()\0"
};

void Pages::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Pages *_t = static_cast<Pages *>(_o);
        switch (_id) {
        case 0: _t->rightClicked(); break;
        case 1: _t->leftClicked(); break;
        case 2: _t->goLeft(); break;
        case 3: _t->goRight(); break;
        case 4: _t->addPage(); break;
        case 5: _t->removePage(); break;
        case 6: _t->end(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Pages::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Pages::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Pages,
      qt_meta_data_Pages, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pages::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pages::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pages::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pages))
        return static_cast<void*>(const_cast< Pages*>(this));
    return QWidget::qt_metacast(_clname);
}

int Pages::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Pages::rightClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Pages::leftClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
