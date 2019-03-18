/****************************************************************************
** Meta object code from reading C++ file 'filefoldermainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CryptorPro_test2/filefoldermainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filefoldermainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_filefoldermainwindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   21,   21,   21, 0x0a,
      62,   21,   21,   21, 0x0a,
      88,   21,   21,   21, 0x0a,
     115,   21,   21,   21, 0x0a,
     159,  142,   21,   21, 0x0a,
     234,  209,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_filefoldermainwindow[] = {
    "filefoldermainwindow\0\0closeSignal()\0"
    "on_cancelButton_clicked()\0"
    "on_browseButton_clicked()\0"
    "on_encryptButton_clicked()\0"
    "on_decryptButton_clicked()\0path,x0,y0,z0,w0\0"
    "findfileSlot(QString,double,double,double,double)\0"
    "keytemp,x0,y0,z0,w0,size\0"
    "keygeneratorSlot(char*,double,double,double,double,qint64)\0"
};

void filefoldermainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        filefoldermainwindow *_t = static_cast<filefoldermainwindow *>(_o);
        switch (_id) {
        case 0: _t->closeSignal(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: _t->on_browseButton_clicked(); break;
        case 3: _t->on_encryptButton_clicked(); break;
        case 4: _t->on_decryptButton_clicked(); break;
        case 5: _t->findfileSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 6: _t->keygeneratorSlot((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData filefoldermainwindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject filefoldermainwindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_filefoldermainwindow,
      qt_meta_data_filefoldermainwindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &filefoldermainwindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *filefoldermainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *filefoldermainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_filefoldermainwindow))
        return static_cast<void*>(const_cast< filefoldermainwindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int filefoldermainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void filefoldermainwindow::closeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
