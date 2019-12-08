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
    ~Option2();
    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.


private slots:
    void on_newList_itemClicked(QListWidgetItem *item);

    void on_exitButton_clicked();

private:
    Ui::Option2 *ui;
    class next *next1;
    QSqlDatabase myDB;          /*!< database connection */
};

#endif // OPTION2_H
