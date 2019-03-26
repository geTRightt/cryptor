/****************************************************************************
** Meta object code from reading C++ file 'logindlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chaos_cryptor/logindlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_loginDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      35,    9,    9,    9, 0x0a,
      58,    9,    9,    9, 0x0a,
      86,   77,    9,    9, 0x0a,
     120,  118,  113,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_loginDlg[] = {
    "loginDlg\0\0on_loginButton_clicked()\0"
    "on_setButton_clicked()\0showKeyboardSlot()\0"
    "inpuText\0confirmstringSlot(QString)\0"
    "bool\0,\0eventFilter(QObject*,QEvent*)\0"
};

void loginDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        loginDlg *_t = static_cast<loginDlg *>(_o);
        switch (_id) {
        case 0: _t->on_loginButton_clicked(); break;
        case 1: _t->on_setButton_clicked(); break;
        case 2: _t->showKeyboardSlot(); break;
        case 3: _t->confirmstringSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData loginDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject loginDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_loginDlg,
      qt_meta_data_loginDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &loginDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *loginDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *loginDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_loginDlg))
        return static_cast<void*>(const_cast< loginDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int loginDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
