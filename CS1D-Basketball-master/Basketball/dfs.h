#ifndef DFS_H
#define DFS_H

#include <QWidget>
#include "data.h"
#include "graph.h"
namespace Ui {
class dfs;
}

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
