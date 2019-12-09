#ifndef BFS_H
#define BFS_H

#include <QWidget>
#include "data.h"
#include "graph.h"

namespace Ui {
class bfs;
}

/*! Class bfs is used to perform a Breath-First Search on the teams to find the
 * shortest path starting from Los Angeles Lakers. Also displays the total distance. */
class bfs : public QWidget
{
    Q_OBJECT

public:
    //! Sets the text box in the ui to display the results from the BFS
    void setText();
    explicit bfs(QWidget *parent = nullptr);

    //! destructor
    ~bfs();

private slots:
    //! When clicked it exits the bfs menu
    void on_exit_clicked();

private:
    Ui::bfs *ui;
    class Graph graf; //!< graf object for Graph class
    class data datah; //!< datah object for data class
};

#endif // BFS_H

