#ifndef MST_H
#define MST_H

#include <QWidget>
#include "data.h"
#include "graph.h"
#include <QTableWidget>

namespace Ui {
class mst;
}

class mst : public QWidget
{
    Q_OBJECT

public:
    void setLabel();
    explicit mst(QWidget *parent = nullptr);
    ~mst();

private slots:
    void on_exit_clicked();

private:
    Ui::mst *ui;
    class Graph graf;
    class data datah;
};

#endif // MST_H
