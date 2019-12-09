#ifndef DFS_H
#define DFS_H

#include <QWidget>
#include "data.h"
#include "graph.h"
namespace Ui {
class dfs;
}

/*! Class dfs is used to perform a Depth First Search on the teams to find the
 * shortest path starting from . Also displays the total distance. */
class dfs : public QWidget
{
    Q_OBJECT

public:
    void setText();
    explicit dfs(QWidget *parent = nullptr);
    ~dfs();

private slots:
    void on_exit_clicked();

private:
    Ui::dfs *ui;
    class Graph graf;
    class data datah;
};

#endif // DFS_H
