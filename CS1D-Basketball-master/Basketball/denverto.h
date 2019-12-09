#ifndef DENVERTO_H
#define DENVERTO_H

#include <QDialog>
#include <QWidget>
#include <QDebug>
#include <QListWidget>
#include <QVector>
#include "data.h"
#include "graph.h"

namespace Ui {
class denverTo;
}

/*! class denverTo allows a basketball fan to plan a trip starting at Denver */
class denverTo : public QDialog
{
    Q_OBJECT

public:
   //! sets the name of the team
    QString setCityName(QString team);
    explicit denverTo(QWidget *parent = nullptr);

    //! destructor
    ~denverTo();

private slots:
    //! closes trip plan
    void on_exit_clicked();

private:
    Ui::denverTo *ui;
    class Graph graf; //! graph object
    class data datah; //! data object
};

#endif // DENVERTO_H
