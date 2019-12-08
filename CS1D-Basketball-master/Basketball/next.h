#ifndef NEXT_H
#define NEXT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>
#include "citytocity.h"

namespace Ui {
class next;
}

class next : public QWidget
{
    Q_OBJECT

public:
    explicit next(QWidget *parent = nullptr);
    void setCity(QString s);
    ~next();

private slots:
    void on_newList_itemClicked(QListWidgetItem *item);
    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.

    void on_exitButton_clicked();

private:
    Ui::next *ui;
    QString starting;
    cityToCity *direct;
    QSqlDatabase myDB;

};

#endif // NEXT_H
