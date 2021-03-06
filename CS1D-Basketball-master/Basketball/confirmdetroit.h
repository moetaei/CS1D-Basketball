#ifndef CONFIRMDETROIT_H
#define CONFIRMDETROIT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>
#include "graph.h"
#include "data.h"
#include "checkout.h"

namespace Ui {
class ConfirmDetroit;
}

/*! class ConfirmDetroit is used so a basketball fan can plan a trip starting from detroit */
class ConfirmDetroit : public QWidget
{
    Q_OBJECT

public:
    explicit ConfirmDetroit(QWidget *parent = nullptr);
    //!< Constructor

    ~ConfirmDetroit();
    //!< Destructor

    void defaultListView();
    //!< Sets the default view of the window by enabling and disabling items.

    void sortCities();
    //!< Creates a sorted list of cities and distances from selected choices.

private slots:
    //! closes window
    void on_cancel_clicked();

    //! confirms purchase
    void on_confirm_clicked();

private:
    Ui::ConfirmDetroit *ui;

    checkout* checkoutWindow;

    QList<QString> customList;
    class Graph graf; //!< Graph object
    class data datah; //!< data object

    QString* sortedDest = nullptr;
    double* sortedDist = nullptr;
    int cityNum = 1;
    QString closestCity;
    QString startCity = "Detroit Pistons";          /*!< the starting city */
    QSqlDatabase myDB;                      /*!< database connection */
};

#endif // CONFIRMDETROIT_H
