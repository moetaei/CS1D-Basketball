#ifndef CONFIRMDENVER_H
#define CONFIRMDENVER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>

namespace Ui {
class confirmDenver;
}

class confirmDenver : public QWidget
{
    Q_OBJECT

public:
    explicit confirmDenver(QWidget *parent = nullptr);
    //!< Constructor

    ~confirmDenver();
    //!< Destructor

    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.

private:
    Ui::confirmDenver *ui;  /*!< class object */

    QString startCity = "Nuggets";          /*!< the starting city */
    QSqlDatabase myDB;          /*!< database connection */
};

#endif // CONFIRMDENVER_H
