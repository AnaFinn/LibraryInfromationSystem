/****************************************************************************
** Meta object code from reading C++ file 'accountdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QTLibraryFinal/accountdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountDialog_t {
    const uint offsetsAndSize[26];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AccountDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AccountDialog_t qt_meta_stringdata_AccountDialog = {
    {
QT_MOC_LITERAL(0, 13), // "AccountDialog"
QT_MOC_LITERAL(14, 9), // "logInMove"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(47, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(69, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(93, 7), // "setPswd"
QT_MOC_LITERAL(101, 4), // "pswd"
QT_MOC_LITERAL(106, 7), // "getPswd"
QT_MOC_LITERAL(114, 15), // "setEmailAccount"
QT_MOC_LITERAL(130, 2), // "em"
QT_MOC_LITERAL(133, 15), // "getEmailAccount"
QT_MOC_LITERAL(149, 14) // "signOutclicked"

    },
    "AccountDialog\0logInMove\0\0on_pushButton_clicked\0"
    "on_buttonBox_accepted\0on_pushButton_2_clicked\0"
    "setPswd\0pswd\0getPswd\0setEmailAccount\0"
    "em\0getEmailAccount\0signOutclicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    1,   72,    2, 0x0a,    5 /* Public */,
       8,    0,   75,    2, 0x0a,    7 /* Public */,
       9,    1,   76,    2, 0x0a,    8 /* Public */,
      11,    0,   79,    2, 0x0a,   10 /* Public */,
      12,    0,   80,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::QString,
    QMetaType::Bool,

       0        // eod
};

void AccountDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logInMove(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->setPswd((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: { QString _r = _t->getPswd();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setEmailAccount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: { QString _r = _t->getEmailAccount();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->signOutclicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountDialog::logInMove)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AccountDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AccountDialog.offsetsAndSize,
    qt_meta_data_AccountDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AccountDialog_t
, QtPrivate::TypeAndForceComplete<AccountDialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *AccountDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AccountDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AccountDialog::logInMove()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
