#ifndef CONFERENCE_H
#define CONFERENCE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class conference;
}

/*! Class conference is used to display them in the user ui under conference tab */
class conference : public QWidget
{
    Q_OBJECT

public:
    explicit conference(QWidget *parent = nullptr);
    //! Constructor

    ~conference();
    //! Destructor

    void defaultReset();
    //!< initializes the QTableWidget and loads with data from a database query

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::conference *ui;
    QSqlDatabase myDB;      /*!< database connection */
};

#endif // CONFERENCE_H
