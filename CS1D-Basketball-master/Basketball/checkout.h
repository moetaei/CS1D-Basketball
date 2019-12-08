#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

namespace Ui {
class checkout;
}

class checkout : public QWidget
{
    Q_OBJECT

public:
    explicit checkout(QWidget *parent = nullptr);
    //!< Default Constructor

    explicit checkout(QString* cList, double* dList, int,
                               QWidget *parent = nullptr);
    //!< Constructor (using passed in parameters)

    ~checkout();
    //!< Default Destructor

    void loadTables();
    //!< Loads destination list with starting values

    void updateTable();
    //!< Updates food table with values for current city active

private slots:
    void on_confirmFoodButton_clicked();

    void on_nextDestButton_clicked();

    void on_exitSimulationButton_clicked();

    void on_endVacationButton_clicked();

private:
    Ui::checkout *ui;

    QString* destinations = nullptr;
    double* distances = nullptr;
    QString currCity;                   /*!< Current city being visited */
    double currDistance;                   /*!< Distance from last to current Arena */
    double totalDistance;                  /*!< Total distance traveled thus far */
    float currCost;                     /*!< Total cost at current Arena */
    float totalCost;                    /*!< Total for the entire trip*/
    int total;                          /*!< Number of destinations */
    int index;                          /*!< Index of the current arena */
    QFont font;                         /*!< Modified attributes in QListView */
};

#endif // CHECKOUT_H
