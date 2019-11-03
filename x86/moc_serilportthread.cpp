/****************************************************************************
** Meta object code from reading C++ file 'serilportthread.h'
**
** Created: Sat Nov 2 22:49:07 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../smarthome/serilportthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serilportthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_serilportthread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   16,   16,   16, 0x08,
      58,   56,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_serilportthread[] = {
    "serilportthread\0\0array\0senddata(QByteArray)\0"
    "startread()\0a\0send(QByteArray)\0"
};

void serilportthread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        serilportthread *_t = static_cast<serilportthread *>(_o);
        switch (_id) {
        case 0: _t->senddata((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->startread(); break;
        case 2: _t->send((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData serilportthread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject serilportthread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_serilportthread,
      qt_meta_data_serilportthread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &serilportthread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *serilportthread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *serilportthread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_serilportthread))
        return static_cast<void*>(const_cast< serilportthread*>(this));
    return QThread::qt_metacast(_clname);
}

int serilportthread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void serilportthread::senddata(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
