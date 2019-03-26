/****************************************************************************
** Meta object code from reading C++ file 'keyboardlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chaos_cryptor/keyboardlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboardlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_keyboardlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   38,   11,   11, 0x0a,
      65,   11,   11,   11, 0x0a,
      84,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_keyboardlg[] = {
    "keyboardlg\0\0sendstringSignal(QString)\0"
    "num\0buttonconfirmSlot(int)\0"
    "affirmstringSlot()\0deletestringSlot()\0"
};

void keyboardlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        keyboardlg *_t = static_cast<keyboardlg *>(_o);
        switch (_id) {
        case 0: _t->sendstringSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->buttonconfirmSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->affirmstringSlot(); break;
        case 3: _t->deletestringSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData keyboardlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject keyboardlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_keyboardlg,
      qt_meta_data_keyboardlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &keyboardlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *keyboardlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *keyboardlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_keyboardlg))
        return static_cast<void*>(const_cast< keyboardlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int keyboardlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void keyboardlg::sendstringSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
