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
    void on_cancel_clicked();

    void on_select_clicked();

    void on_confirm_clicked();

    void on_exitButton_clicked();

private:
    Ui::ConfirmDetroit *ui;

    QList<QString> customList;

    class Graph graf;
    class data datah;

    QString* sortedDest = nullptr;
    float* sortedDist = nullptr;
    int cityNum = 1;
    QString closestCity;
    QString startCity = "Detroit Pistons";          /*!< the starting city */
    QSqlDatabase myDB;                      /*!< database connection */
};

#endif // CONFIRMDETROIT_H
