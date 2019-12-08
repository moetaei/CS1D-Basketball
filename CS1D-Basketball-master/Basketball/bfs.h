#ifndef BFS_H
#define BFS_H

#include <QWidget>
#include "data.h"
#include "graph.h"

namespace Ui {
class bfs;
}

class bfs : public QWidget
{
    Q_OBJECT

public:
    void setText();
    explicit bfs(QWidget *parent = nullptr);
    ~bfs();

private slots:
    void on_exit_clicked();

private:
    Ui::bfs *ui;
    class Graph graf;
    class data datah;
};

#endif // BFS_H
