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
#include "checkout.h"

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


    void on_exitButton_clicked();


    void on_pushButton_clicked();

private:
    Ui::confirmDenver *ui;  /*!< class object */
    checkout* checkoutWindow;
    denverTo *denverto; /*!< class object */
    QString startCity = "Denver Nuggets";          /*!< the starting city */
    double dist;
    QSqlDatabase myDB;          /*!< database connection */
    QString* destinations = nullptr;
    double* distances = nullptr;
};

#endif // CONFIRMDENVER_H
