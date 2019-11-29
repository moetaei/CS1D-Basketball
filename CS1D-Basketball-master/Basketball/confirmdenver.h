#ifndef CONFIRMDENVER_H
#define CONFIRMDENVER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>
#include "denverto.h"

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

private slots:

    void on_denverList_itemClicked(QListWidgetItem *item);

private:
    Ui::confirmDenver *ui;  /*!< class object */
    denverTo *denverto; /*!< class object */
    QString startCity = "Nuggets";          /*!< the starting city */
    QSqlDatabase myDB;          /*!< database connection */
};

#endif // CONFIRMDENVER_H
