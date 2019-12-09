#ifndef MST_H
#define MST_H

#include <QWidget>
#include "data.h"
#include "graph.h"
#include <QTableWidget>

namespace Ui {
class mst;
}

/*! Class mst is used to perform a Minimum Spanning Tree on the teams to find the
 * shortest path. Also displays the total distance. */
class mst : public QWidget
{
    Q_OBJECT

public:
    //! Sets the label in the ui to display the results from the mst
    void setLabel();
    explicit mst(QWidget *parent = nullptr);

    //! destructor
    ~mst();

private slots:
    //! When clicked it exits the bfs menu
    void on_exit_clicked();

private:
    Ui::mst *ui;
    class Graph graf; //!< graf object for Graph class
    class data datah; //!< datah object for data class
};

#endif // MST_H
