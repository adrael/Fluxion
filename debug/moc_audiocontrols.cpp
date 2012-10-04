/****************************************************************************
** Meta object code from reading C++ file 'audiocontrols.hpp'
**
** Created: Wed 26. Sep 19:08:39 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/audiocontrols.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiocontrols.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AudioControls[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      29,   14,   14,   14, 0x05,
      44,   14,   14,   14, 0x05,
      58,   14,   14,   14, 0x05,
      75,   14,   14,   14, 0x05,
      93,   14,   14,   14, 0x05,
     111,   14,   14,   14, 0x05,
     125,   14,   14,   14, 0x05,
     141,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     157,   14,   14,   14, 0x08,
     164,   14,   14,   14, 0x08,
     172,   14,   14,   14, 0x08,
     179,   14,   14,   14, 0x08,
     189,   14,   14,   14, 0x08,
     200,   14,   14,   14, 0x08,
     207,   14,   14,   14, 0x08,
     218,   14,   14,   14, 0x08,
     228,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AudioControls[] = {
    "AudioControls\0\0playPressed()\0"
    "pausePressed()\0stopPressed()\0"
    "forwardPressed()\0backwardPressed()\0"
    "previousPressed()\0nextPressed()\0"
    "shufflePresed()\0repeatPressed()\0play()\0"
    "pause()\0stop()\0forward()\0backward()\0"
    "next()\0previous()\0shuffle()\0repeat()\0"
};

void AudioControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AudioControls *_t = static_cast<AudioControls *>(_o);
        switch (_id) {
        case 0: _t->playPressed(); break;
        case 1: _t->pausePressed(); break;
        case 2: _t->stopPressed(); break;
        case 3: _t->forwardPressed(); break;
        case 4: _t->backwardPressed(); break;
        case 5: _t->previousPressed(); break;
        case 6: _t->nextPressed(); break;
        case 7: _t->shufflePresed(); break;
        case 8: _t->repeatPressed(); break;
        case 9: _t->play(); break;
        case 10: _t->pause(); break;
        case 11: _t->stop(); break;
        case 12: _t->forward(); break;
        case 13: _t->backward(); break;
        case 14: _t->next(); break;
        case 15: _t->previous(); break;
        case 16: _t->shuffle(); break;
        case 17: _t->repeat(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AudioControls::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AudioControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AudioControls,
      qt_meta_data_AudioControls, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AudioControls::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AudioControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AudioControls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AudioControls))
        return static_cast<void*>(const_cast< AudioControls*>(this));
    return QWidget::qt_metacast(_clname);
}

int AudioControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void AudioControls::playPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AudioControls::pausePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AudioControls::stopPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void AudioControls::forwardPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void AudioControls::backwardPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void AudioControls::previousPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void AudioControls::nextPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void AudioControls::shufflePresed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void AudioControls::repeatPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
