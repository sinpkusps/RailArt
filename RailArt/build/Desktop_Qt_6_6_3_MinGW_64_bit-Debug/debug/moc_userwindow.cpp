/****************************************************************************
** Meta object code from reading C++ file 'userwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../userwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSUserWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUserWindowENDCLASS = QtMocHelpers::stringData(
    "UserWindow",
    "on_actionAccount_triggered",
    "",
    "on_actionQuit_triggered",
    "on_tabWidget_currentChanged",
    "index",
    "on_tableViewGoods_doubleClicked",
    "QModelIndex",
    "on_pushButtonGoodsCart_clicked",
    "on_pushButtonGoodsReturn_clicked",
    "on_pushButtonGoodsSearch_clicked",
    "on_pushButtonGoodsRefresh_clicked",
    "on_tableViewRecordation_doubleClicked",
    "on_pushButtonRecordationSearch_clicked",
    "on_pushButtonRecordationRefresh_clicked",
    "on_tableViewMyGoods_doubleClicked",
    "on_pushButtonMyGoodsAdd_clicked",
    "on_pushButtonMyGoodsRemove_clicked",
    "on_pushButtonMyGoodsSearch_clicked",
    "on_pushButtonMyGoodsRefresh_clicked",
    "on_pushButtonCartPay_clicked",
    "on_pushButtonCartRemove_clicked",
    "on_pushButtonCartRefresh_clicked",
    "on_tableViewCart_doubleClicked",
    "on_tableViewInvitation_doubleClicked",
    "on_pushButtonInvitationAdd_clicked",
    "on_pushButtonInvitationRefresh_clicked",
    "on_pushButtonShoucangRefresh_clicked",
    "on_pushButto_update_clicked",
    "on_pushButto_create_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUserWindowENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[11];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[28];
    char stringdata5[6];
    char stringdata6[32];
    char stringdata7[12];
    char stringdata8[31];
    char stringdata9[33];
    char stringdata10[33];
    char stringdata11[34];
    char stringdata12[38];
    char stringdata13[39];
    char stringdata14[40];
    char stringdata15[34];
    char stringdata16[32];
    char stringdata17[35];
    char stringdata18[35];
    char stringdata19[36];
    char stringdata20[29];
    char stringdata21[32];
    char stringdata22[33];
    char stringdata23[31];
    char stringdata24[37];
    char stringdata25[35];
    char stringdata26[39];
    char stringdata27[37];
    char stringdata28[28];
    char stringdata29[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUserWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUserWindowENDCLASS_t qt_meta_stringdata_CLASSUserWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "UserWindow"
        QT_MOC_LITERAL(11, 26),  // "on_actionAccount_triggered"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 23),  // "on_actionQuit_triggered"
        QT_MOC_LITERAL(63, 27),  // "on_tabWidget_currentChanged"
        QT_MOC_LITERAL(91, 5),  // "index"
        QT_MOC_LITERAL(97, 31),  // "on_tableViewGoods_doubleClicked"
        QT_MOC_LITERAL(129, 11),  // "QModelIndex"
        QT_MOC_LITERAL(141, 30),  // "on_pushButtonGoodsCart_clicked"
        QT_MOC_LITERAL(172, 32),  // "on_pushButtonGoodsReturn_clicked"
        QT_MOC_LITERAL(205, 32),  // "on_pushButtonGoodsSearch_clicked"
        QT_MOC_LITERAL(238, 33),  // "on_pushButtonGoodsRefresh_cli..."
        QT_MOC_LITERAL(272, 37),  // "on_tableViewRecordation_doubl..."
        QT_MOC_LITERAL(310, 38),  // "on_pushButtonRecordationSearc..."
        QT_MOC_LITERAL(349, 39),  // "on_pushButtonRecordationRefre..."
        QT_MOC_LITERAL(389, 33),  // "on_tableViewMyGoods_doubleCli..."
        QT_MOC_LITERAL(423, 31),  // "on_pushButtonMyGoodsAdd_clicked"
        QT_MOC_LITERAL(455, 34),  // "on_pushButtonMyGoodsRemove_cl..."
        QT_MOC_LITERAL(490, 34),  // "on_pushButtonMyGoodsSearch_cl..."
        QT_MOC_LITERAL(525, 35),  // "on_pushButtonMyGoodsRefresh_c..."
        QT_MOC_LITERAL(561, 28),  // "on_pushButtonCartPay_clicked"
        QT_MOC_LITERAL(590, 31),  // "on_pushButtonCartRemove_clicked"
        QT_MOC_LITERAL(622, 32),  // "on_pushButtonCartRefresh_clicked"
        QT_MOC_LITERAL(655, 30),  // "on_tableViewCart_doubleClicked"
        QT_MOC_LITERAL(686, 36),  // "on_tableViewInvitation_double..."
        QT_MOC_LITERAL(723, 34),  // "on_pushButtonInvitationAdd_cl..."
        QT_MOC_LITERAL(758, 38),  // "on_pushButtonInvitationRefres..."
        QT_MOC_LITERAL(797, 36),  // "on_pushButtonShoucangRefresh_..."
        QT_MOC_LITERAL(834, 27),  // "on_pushButto_update_clicked"
        QT_MOC_LITERAL(862, 27)   // "on_pushButto_create_clicked"
    },
    "UserWindow",
    "on_actionAccount_triggered",
    "",
    "on_actionQuit_triggered",
    "on_tabWidget_currentChanged",
    "index",
    "on_tableViewGoods_doubleClicked",
    "QModelIndex",
    "on_pushButtonGoodsCart_clicked",
    "on_pushButtonGoodsReturn_clicked",
    "on_pushButtonGoodsSearch_clicked",
    "on_pushButtonGoodsRefresh_clicked",
    "on_tableViewRecordation_doubleClicked",
    "on_pushButtonRecordationSearch_clicked",
    "on_pushButtonRecordationRefresh_clicked",
    "on_tableViewMyGoods_doubleClicked",
    "on_pushButtonMyGoodsAdd_clicked",
    "on_pushButtonMyGoodsRemove_clicked",
    "on_pushButtonMyGoodsSearch_clicked",
    "on_pushButtonMyGoodsRefresh_clicked",
    "on_pushButtonCartPay_clicked",
    "on_pushButtonCartRemove_clicked",
    "on_pushButtonCartRefresh_clicked",
    "on_tableViewCart_doubleClicked",
    "on_tableViewInvitation_doubleClicked",
    "on_pushButtonInvitationAdd_clicked",
    "on_pushButtonInvitationRefresh_clicked",
    "on_pushButtonShoucangRefresh_clicked",
    "on_pushButto_update_clicked",
    "on_pushButto_create_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    1,  172,    2, 0x08,    3 /* Private */,
       6,    1,  175,    2, 0x08,    5 /* Private */,
       8,    0,  178,    2, 0x08,    7 /* Private */,
       9,    0,  179,    2, 0x08,    8 /* Private */,
      10,    0,  180,    2, 0x08,    9 /* Private */,
      11,    0,  181,    2, 0x08,   10 /* Private */,
      12,    1,  182,    2, 0x08,   11 /* Private */,
      13,    0,  185,    2, 0x08,   13 /* Private */,
      14,    0,  186,    2, 0x08,   14 /* Private */,
      15,    1,  187,    2, 0x08,   15 /* Private */,
      16,    0,  190,    2, 0x08,   17 /* Private */,
      17,    0,  191,    2, 0x08,   18 /* Private */,
      18,    0,  192,    2, 0x08,   19 /* Private */,
      19,    0,  193,    2, 0x08,   20 /* Private */,
      20,    0,  194,    2, 0x08,   21 /* Private */,
      21,    0,  195,    2, 0x08,   22 /* Private */,
      22,    0,  196,    2, 0x08,   23 /* Private */,
      23,    1,  197,    2, 0x08,   24 /* Private */,
      24,    1,  200,    2, 0x08,   26 /* Private */,
      25,    0,  203,    2, 0x08,   28 /* Private */,
      26,    0,  204,    2, 0x08,   29 /* Private */,
      27,    0,  205,    2, 0x08,   30 /* Private */,
      28,    0,  206,    2, 0x08,   31 /* Private */,
      29,    0,  207,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserWindow, std::true_type>,
        // method 'on_actionAccount_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionQuit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tabWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableViewGoods_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButtonGoodsCart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonGoodsReturn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonGoodsSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonGoodsRefresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewRecordation_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButtonRecordationSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonRecordationRefresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewMyGoods_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButtonMyGoodsAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonMyGoodsRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonMyGoodsSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonMyGoodsRefresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonCartPay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonCartRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonCartRefresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewCart_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableViewInvitation_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButtonInvitationAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonInvitationRefresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonShoucangRefresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButto_update_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButto_create_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionAccount_triggered(); break;
        case 1: _t->on_actionQuit_triggered(); break;
        case 2: _t->on_tabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_tableViewGoods_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_pushButtonGoodsCart_clicked(); break;
        case 5: _t->on_pushButtonGoodsReturn_clicked(); break;
        case 6: _t->on_pushButtonGoodsSearch_clicked(); break;
        case 7: _t->on_pushButtonGoodsRefresh_clicked(); break;
        case 8: _t->on_tableViewRecordation_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->on_pushButtonRecordationSearch_clicked(); break;
        case 10: _t->on_pushButtonRecordationRefresh_clicked(); break;
        case 11: _t->on_tableViewMyGoods_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->on_pushButtonMyGoodsAdd_clicked(); break;
        case 13: _t->on_pushButtonMyGoodsRemove_clicked(); break;
        case 14: _t->on_pushButtonMyGoodsSearch_clicked(); break;
        case 15: _t->on_pushButtonMyGoodsRefresh_clicked(); break;
        case 16: _t->on_pushButtonCartPay_clicked(); break;
        case 17: _t->on_pushButtonCartRemove_clicked(); break;
        case 18: _t->on_pushButtonCartRefresh_clicked(); break;
        case 19: _t->on_tableViewCart_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_tableViewInvitation_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 21: _t->on_pushButtonInvitationAdd_clicked(); break;
        case 22: _t->on_pushButtonInvitationRefresh_clicked(); break;
        case 23: _t->on_pushButtonShoucangRefresh_clicked(); break;
        case 24: _t->on_pushButto_update_clicked(); break;
        case 25: _t->on_pushButto_create_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *UserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
