/****************************************************************************
** Meta object code from reading C++ file 'setdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chaos_cryptor/setdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      35,    7,    7,    7, 0x0a,
      69,    7,   61,    7, 0x0a,
      86,    7,   61,    7, 0x0a,
     104,    7,    7,    7, 0x0a,
     123,    7,    7,    7, 0x0a,
     157,  155,  150,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_setDlg[] = {
    "setDlg\0\0on_confirmButton_clicked()\0"
    "on_cancelButton_clicked()\0QString\0"
    "sendNewUsrSlot()\0sendNewPawdSlot()\0"
    "showKeyboardSlot()\0confirmstringSlot(QString)\0"
    "bool\0,\0eventFilter(QObject*,QEvent*)\0"
};

void setDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        setDlg *_t = static_cast<setDlg *>(_o);
        switch (_id) {
        case 0: _t->on_confirmButton_clicked(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: { QString _r = _t->sendNewUsrSlot();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->sendNewPawdSlot();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->showKeyboardSlot(); break;
        case 5: _t->confirmstringSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData setDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject setDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setDlg,
      qt_meta_data_setDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setDlg))
        return static_cast<void*>(const_cast< setDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int setDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
