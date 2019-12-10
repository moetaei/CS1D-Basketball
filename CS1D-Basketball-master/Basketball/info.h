#ifndef INFO_H
#define INFO_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class info;
}

/*! Class info is used to get the data from the info panel of the database,
 * can also be used to initialize data back to its default values. */
class info : public QWidget
{
    Q_OBJECT

public:
    explicit info(QWidget *parent = nullptr);
    //! Constructor

    ~info();
    //! Destructor

    void defaultReset();
    //!< initializes the QTableWidget and loads with data from a database query

private slots:


    void on_teamOptions_currentIndexChanged(const QString &arg1);

private:
    Ui::info *ui;           /*!< class object */
    QSqlDatabase myDB;      /*!< database connection */
};

#endif // INFO_H
