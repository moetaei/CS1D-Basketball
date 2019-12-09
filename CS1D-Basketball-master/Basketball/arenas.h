#ifndef ARENAS_H
#define ARENAS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

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

    void defaultReset();

private:
    Ui::arenas *ui;
    QSqlDatabase myDB;      //!< database connection
};

#endif // ARENAS_H
