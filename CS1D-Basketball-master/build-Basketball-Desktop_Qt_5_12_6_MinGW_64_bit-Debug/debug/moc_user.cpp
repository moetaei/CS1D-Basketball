/****************************************************************************
** Meta object code from reading C++ file 'user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Basketball/user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_t {
    QByteArrayData data[17];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_t qt_meta_stringdata_user = {
    {
QT_MOC_LITERAL(0, 0, 4), // "user"
QT_MOC_LITERAL(1, 5, 27), // "on_travelPackButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_teamButton_clicked"
QT_MOC_LITERAL(4, 56, 22), // "on_arenaButton_clicked"
QT_MOC_LITERAL(5, 79, 21), // "on_infoButton_clicked"
QT_MOC_LITERAL(6, 101, 22), // "on_coachButton_clicked"
QT_MOC_LITERAL(7, 124, 26), // "on_confrenceButton_clicked"
QT_MOC_LITERAL(8, 151, 25), // "on_divisionButton_clicked"
QT_MOC_LITERAL(9, 177, 23), // "on_logoutButton_clicked"
QT_MOC_LITERAL(10, 201, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 223, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 247, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(13, 271, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(14, 295, 14), // "on_dfs_clicked"
QT_MOC_LITERAL(15, 310, 14), // "on_mst_clicked"
QT_MOC_LITERAL(16, 325, 14) // "on_bfs_clicked"

    },
    "user\0on_travelPackButton_clicked\0\0"
    "on_teamButton_clicked\0on_arenaButton_clicked\0"
    "on_infoButton_clicked\0on_coachButton_clicked\0"
    "on_confrenceButton_clicked\0"
    "on_divisionButton_clicked\0"
    "on_logoutButton_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_dfs_clicked\0"
    "on_mst_clicked\0on_bfs_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<user *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_travelPackButton_clicked(); break;
        case 1: _t->on_teamButton_clicked(); break;
        case 2: _t->on_arenaButton_clicked(); break;
        case 3: _t->on_infoButton_clicked(); break;
        case 4: _t->on_coachButton_clicked(); break;
        case 5: _t->on_confrenceButton_clicked(); break;
        case 6: _t->on_divisionButton_clicked(); break;
        case 7: _t->on_logoutButton_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        case 11: _t->on_pushButton_4_clicked(); break;
        case 12: _t->on_dfs_clicked(); break;
        case 13: _t->on_mst_clicked(); break;
        case 14: _t->on_bfs_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject user::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_user.data,
    qt_meta_data_user,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
