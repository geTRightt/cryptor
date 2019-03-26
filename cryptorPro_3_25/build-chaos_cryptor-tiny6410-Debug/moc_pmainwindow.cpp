/****************************************************************************
** Meta object code from reading C++ file 'pmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chaos_cryptor/pmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   12,   12,   12, 0x0a,
      41,   12,   12,   12, 0x0a,
      55,   12,   12,   12, 0x0a,
      66,   12,   12,   12, 0x0a,
      82,   12,   12,   12, 0x0a,
     123,   98,   12,   12, 0x0a,
     196,  190,  182,   12, 0x0a,
     214,  190,  182,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pMainWindow[] = {
    "pMainWindow\0\0closeSignal()\0OpenPicSlot()\0"
    "SavePicSlot()\0QuitSlot()\0EncryptorSlot()\0"
    "DecryptorSlot()\0keytemp,x0,y0,z0,w0,size\0"
    "keygeneratorSlot(char*,double,double,double,double,qint64)\0"
    "QString\0title\0pickName(QString)\0"
    "pickDir(QString)\0"
};

void pMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pMainWindow *_t = static_cast<pMainWindow *>(_o);
        switch (_id) {
        case 0: _t->closeSignal(); break;
        case 1: _t->OpenPicSlot(); break;
        case 2: _t->SavePicSlot(); break;
        case 3: _t->QuitSlot(); break;
        case 4: _t->EncryptorSlot(); break;
        case 5: _t->DecryptorSlot(); break;
        case 6: _t->keygeneratorSlot((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6]))); break;
        case 7: { QString _r = _t->pickName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->pickDir((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pMainWindow,
      qt_meta_data_pMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pMainWindow))
        return static_cast<void*>(const_cast< pMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int pMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pMainWindow::closeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
