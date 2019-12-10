#ifndef ARENAS_H
#define ARENAS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include "data.h"

namespace Ui {
class arenas;
}

/*! Class arena is used to display all the arenas of the teams and the info that goes along with it*/
class arenas : public QWidget
{
    Q_OBJECT

public:
    explicit arenas(QWidget *parent = nullptr);

    //! destructor
    ~arenas();

    //! resets values to default
    void defaultReset();

private:
    Ui::arenas *ui;
    QSqlDatabase myDB;      //!< database connection
    class data datah;
};

#endif // ARENAS_H
