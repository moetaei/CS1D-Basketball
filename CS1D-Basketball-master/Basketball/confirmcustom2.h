#ifndef CONFIRMCUSTOM2_H
#define CONFIRMCUSTOM2_H

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
class confirmCustom2;
}

/*! class confirmCustom2 is used so the basketball fan can plan the second type of custon trip.
 * It also allows the fan to purchase souviners */
class confirmCustom2 : public QWidget
{
    Q_OBJECT

public:
    explicit confirmCustom2(QWidget *parent = nullptr);

    //! destructor
    ~confirmCustom2();

    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.

    void sortCities();
    //!< Creates a sorted list of destinations and distances from selected.

private slots:
    //! on click close window
    void on_cancel_clicked();

    //! on click purchase souveneir
    void on_select_clicked();

    //! on click call sort
    void on_confirm_clicked();

    void on_startCityComboBox_currentIndexChanged(int index);

private:
    Ui::confirmCustom2 *ui;

    checkout* checkoutWindow;

    QList<QListWidgetItem *> cityList;  /*!< list of destinations selected */
    class Graph graf; //!< Graph object
    class data datah; //!< data object

    QString* sortedDest = nullptr;
    double* sortedDist = nullptr;
    int cityNum = 0;
    QString closestCity;
    QString startCity = "";          /*!< the starting city */
    QSqlDatabase myDB;               /*!< database connection */
};

#endif // CONFIRMCUSTOM2_H
