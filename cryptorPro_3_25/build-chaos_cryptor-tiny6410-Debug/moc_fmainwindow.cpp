/****************************************************************************
** Meta object code from reading C++ file 'fmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chaos_cryptor/fmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   12,   12,   12, 0x0a,
      38,   12,   12,   12, 0x0a,
      53,   12,   12,   12, 0x0a,
      68,   12,   12,   12, 0x0a,
     107,   82,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FMainWindow[] = {
    "FMainWindow\0\0closeSignal()\0quitSlot()\0"
    "fileOpenSlot()\0fileSaveSlot()\0"
    "cryptorSlot()\0keytemp,x0,y0,z0,w0,size\0"
    "keygeneratorSlot(char*,double,double,double,double,qint64)\0"
};

void FMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FMainWindow *_t = static_cast<FMainWindow *>(_o);
        switch (_id) {
        case 0: _t->closeSignal(); break;
        case 1: _t->quitSlot(); break;
        case 2: _t->fileOpenSlot(); break;
        case 3: _t->fileSaveSlot(); break;
        case 4: _t->cryptorSlot(); break;
        case 5: _t->keygeneratorSlot((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FMainWindow,
      qt_meta_data_FMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FMainWindow))
        return static_cast<void*>(const_cast< FMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FMainWindow::closeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
