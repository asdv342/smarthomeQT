/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Sat Nov 2 22:49:01 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../smarthome/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x08,
      63,   34,    7,    7, 0x08,
     108,  102,    7,    7, 0x08,
     145,    7,    7,    7, 0x08,
     169,  161,    7,    7, 0x08,
     195,  161,    7,    7, 0x08,
     223,  161,    7,    7, 0x08,
     251,  161,    7,    7, 0x08,
     279,  161,    7,    7, 0x08,
     307,  161,    7,    7, 0x08,
     335,    7,    7,    7, 0x08,
     359,    7,    7,    7, 0x08,
     385,    7,    7,    7, 0x08,
     411,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0array\0getdata(QByteArray)\0"
    "type,command,cmdCode,channel\0"
    "getandroiddata(QString,uint,uint,uint)\0"
    "a,b,c\0setdataonui(QString,QString,QString)\0"
    "receivewgdata()\0checked\0"
    "on_checkBox_clicked(bool)\0"
    "on_checkBox_2_clicked(bool)\0"
    "on_checkBox_3_clicked(bool)\0"
    "on_checkBox_4_clicked(bool)\0"
    "on_checkBox_5_clicked(bool)\0"
    "on_checkBox_6_clicked(bool)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog *_t = static_cast<Dialog *>(_o);
        switch (_id) {
        case 0: _t->getdata((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->getandroiddata((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 2: _t->setdataonui((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->receivewgdata(); break;
        case 4: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_checkBox_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_checkBox_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_5_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_checkBox_6_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_pushButton_3_clicked(); break;
        case 13: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
