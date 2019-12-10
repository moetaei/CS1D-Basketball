#ifndef OPTION2_H
#define OPTION2_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>
#include "next.h"

namespace Ui {
class Option2;
}

class Option2 : public QWidget
{
    Q_OBJECT

public:
    explicit Option2(QWidget *parent = nullptr);

    //! destructor
    ~Option2();
    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.
    void defaultListView1();


private slots:
    void on_newList_itemClicked(QListWidgetItem *item);

    //! exits window
    void on_exitButton_clicked();

    void on_newList1_itemClicked(QListWidgetItem *item);

    void on_exit1_clicked();

    void on_exit2_clicked();

    void on_confirm_clicked();

    void on_newList2_itemClicked(QListWidgetItem *item);

private:
    Ui::Option2 *ui;
    QVector<QString> cityList;
    class next *next1;
    QSqlDatabase myDB;          /*!< database connection */
};

#endif // OPTION2_H
