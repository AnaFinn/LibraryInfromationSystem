/****************************************************************************
** Meta object code from reading C++ file 'librarydatabase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QTLibraryFinal/librarydatabase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarydatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LibraryDataBase_t {
    const uint offsetsAndSize[56];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LibraryDataBase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LibraryDataBase_t qt_meta_stringdata_LibraryDataBase = {
    {
QT_MOC_LITERAL(0, 15), // "LibraryDataBase"
QT_MOC_LITERAL(16, 14), // "signUpDataBase"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 4), // "name"
QT_MOC_LITERAL(37, 4), // "pswd"
QT_MOC_LITERAL(42, 5), // "email"
QT_MOC_LITERAL(48, 1), // "n"
QT_MOC_LITERAL(50, 11), // "setUsername"
QT_MOC_LITERAL(62, 11), // "currentuser"
QT_MOC_LITERAL(74, 11), // "getUsername"
QT_MOC_LITERAL(86, 12), // "showAllUsers"
QT_MOC_LITERAL(99, 13), // "logInDataBase"
QT_MOC_LITERAL(113, 19), // "showAllBookDataBase"
QT_MOC_LITERAL(133, 11), // "setBookName"
QT_MOC_LITERAL(145, 11), // "getBookName"
QT_MOC_LITERAL(157, 13), // "setBookAuthor"
QT_MOC_LITERAL(171, 13), // "getBookAuthor"
QT_MOC_LITERAL(185, 18), // "setBookDescription"
QT_MOC_LITERAL(204, 18), // "getBookDescription"
QT_MOC_LITERAL(223, 14), // "findBookByName"
QT_MOC_LITERAL(238, 8), // "nameBook"
QT_MOC_LITERAL(247, 14), // "editUsersTable"
QT_MOC_LITERAL(262, 11), // "QTableView*"
QT_MOC_LITERAL(274, 5), // "table"
QT_MOC_LITERAL(280, 13), // "printDataBase"
QT_MOC_LITERAL(294, 4), // "type"
QT_MOC_LITERAL(299, 11), // "requestBook"
QT_MOC_LITERAL(311, 8) // "bookName"

    },
    "LibraryDataBase\0signUpDataBase\0\0name\0"
    "pswd\0email\0n\0setUsername\0currentuser\0"
    "getUsername\0showAllUsers\0logInDataBase\0"
    "showAllBookDataBase\0setBookName\0"
    "getBookName\0setBookAuthor\0getBookAuthor\0"
    "setBookDescription\0getBookDescription\0"
    "findBookByName\0nameBook\0editUsersTable\0"
    "QTableView*\0table\0printDataBase\0type\0"
    "requestBook\0bookName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryDataBase[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,  110,    2, 0x0a,    1 /* Public */,
       7,    1,  119,    2, 0x0a,    6 /* Public */,
       9,    0,  122,    2, 0x0a,    8 /* Public */,
      10,    0,  123,    2, 0x0a,    9 /* Public */,
      11,    4,  124,    2, 0x0a,   10 /* Public */,
      12,    0,  133,    2, 0x0a,   15 /* Public */,
      13,    1,  134,    2, 0x0a,   16 /* Public */,
      14,    0,  137,    2, 0x0a,   18 /* Public */,
      15,    1,  138,    2, 0x0a,   19 /* Public */,
      16,    0,  141,    2, 0x0a,   21 /* Public */,
      17,    1,  142,    2, 0x0a,   22 /* Public */,
      18,    0,  145,    2, 0x0a,   24 /* Public */,
      19,    1,  146,    2, 0x0a,   25 /* Public */,
      21,    1,  149,    2, 0x0a,   27 /* Public */,
      24,    2,  152,    2, 0x0a,   29 /* Public */,
      26,    2,  157,    2, 0x0a,   32 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    5,    4,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString,   23,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   27,

       0        // eod
};

void LibraryDataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryDataBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signUpDataBase((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 1: _t->setUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { QString _r = _t->getUsername();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->showAllUsers(); break;
        case 4: _t->logInDataBase((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 5: _t->showAllBookDataBase(); break;
        case 6: _t->setBookName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: { QString _r = _t->getBookName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setBookAuthor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: { QString _r = _t->getBookAuthor();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setBookDescription((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: { QString _r = _t->getBookDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->findBookByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->editUsersTable((*reinterpret_cast< std::add_pointer_t<QTableView*>>(_a[1]))); break;
        case 14: _t->printDataBase((*reinterpret_cast< std::add_pointer_t<QTableView*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->requestBook((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableView* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableView* >(); break;
            }
            break;
        }
    }
}

const QMetaObject LibraryDataBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LibraryDataBase.offsetsAndSize,
    qt_meta_data_LibraryDataBase,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LibraryDataBase_t
, QtPrivate::TypeAndForceComplete<LibraryDataBase, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableView *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableView *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *LibraryDataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryDataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryDataBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LibraryDataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
