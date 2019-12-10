#ifndef ADMINSOUVENIRS_H
#define ADMINSOUVENIRS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class adminSouvenirs;
}

/*! Class for editing souvenirs for the teams */
class adminSouvenirs : public QWidget
{
    Q_OBJECT

public:
    explicit adminSouvenirs(QWidget *parent = nullptr);

    //! destructor
    ~adminSouvenirs();

    void defaultReset();


private:
    Ui::adminSouvenirs *ui;
    QSqlDatabase myDB;
};

#endif // ADMINSOUVENIRS_H
