#ifndef CONFIRMCUSTOM2_H
#define CONFIRMCUSTOM2_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QListWidgetItem>
#include <QDebug>

namespace Ui {
class confirmCustom2;
}

class confirmCustom2 : public QWidget
{
    Q_OBJECT

public:
    explicit confirmCustom2(QWidget *parent = nullptr);

    ~confirmCustom2();

    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.

    void sortCities();
    //!< Creates a sorted list of destinations and distances from selected.

private slots:
    void on_reset_clicked();

    void on_cancel_clicked();

    void on_select_clicked();

    void on_confirm_clicked();

    void on_startCityComboBox_currentIndexChanged(int index);

private:
    Ui::confirmCustom2 *ui;

    QList<QListWidgetItem *> cityList;  /*!< list of destinations selected */

    QString* sortedDest = nullptr;
    float* sortedDist = nullptr;
    int cityNum = 0;
    QString closestCity;
    QString startCity = "";          /*!< the starting city */
    QSqlDatabase myDB;               /*!< database connection */
};

#endif // CONFIRMCUSTOM2_H
