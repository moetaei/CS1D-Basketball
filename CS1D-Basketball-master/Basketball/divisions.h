#ifndef DIVISIONS_H
#define DIVISIONS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class divisions;
}

/*! Class divisions is used to display them in the user ui under the divisions tab */
class divisions : public QWidget
{
    Q_OBJECT

public:
    explicit divisions(QWidget *parent = nullptr);
    ~divisions();

    void defaultReset();
    //!< initializes the QTableWidget and loads with data from a database query

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::divisions *ui;
    QSqlDatabase myDB;      /*!< database connection */
};

#endif // DIVISIONS_H
