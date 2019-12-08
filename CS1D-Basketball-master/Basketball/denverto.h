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

class denverTo : public QDialog
{
    Q_OBJECT

public:
    QString setCityName(QString team);
    explicit denverTo(QWidget *parent = nullptr);
    ~denverTo();

private slots:
    void on_exit_clicked();

private:
    Ui::denverTo *ui;
    class Graph graf;
    class data datah;
};

#endif // DENVERTO_H
