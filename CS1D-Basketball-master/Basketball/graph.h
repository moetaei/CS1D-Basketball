#ifndef GRAPH_H
#define GRAPH_H

#include <QList>
#include <QVector>
#include <bits/stdc++.h>
#include "data.h"
#include "node.h"

using namespace std;
# define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

/*! Class Graph is used to perform the bfs, dfs and mst.
 * As well as display the edges with the team names the distances and at the end the total distance */
class Graph
{

public:
    //! Constructor
    Graph();

    //! sets edges
    void setDijEdges();

    //! adds edges
    void addEdge(int u, int v, double w);

    //! finds the shortest path for Dijkstra
    void shortestPath(int s,int dest, QString &output, double &all);


    void shortestPath1(int s, QString &output, int &d);

    //! gets the path for dfs
    void getPath(int s,int city, QVector<int> &path);

    //! sets the dfs edges
    void setDFSEdges();

    //! adds the edge, dfs
    void addEdgeDFS(int src, int dest);

    //! checks if visited
    bool checkVisits(int cities);

    //! compares if visited
    bool visit(QString city,int vertex);

    //! Performs the DFS
    void DFS(int vertex, QString &output, double &distance, double &total);

    //! performs a reset for the dfs
    void reset();

    //! Calculates the mst
    void calcMst(QString &output);

    //! sets values for mst
    void setMST();

    //! Finds the minimum key for mst
    double minKey(double key[], bool mstSet[]);

    //! prints the mst to the ui
    void printMST(int parent[], QString &output);

    //! returns the total distance for bfs
    double getTotalDistance();

    //! sets value of edges for bfs
    void setBFSEdges();

    //! sets values for bfs
    void setBFS();

    //! adds edges to bfs
    void addEdgeBFS(int start, int e, double distance);

    //! Performs bfs
    void BFS(int start);

    //! prints the bfs to the ui
    void printBFS(QString &output);


private:
    int V; //!< amount of vectors / teams
    QList< pair<int, int> > *adj;
    QList<int> *dfs; //!< list for dfs
    QVector<node> adjLists; //!< adjacency list for dfs

    QVector<QVector<double>> *mst; //!< QVector for mst

    class data datah; //!< object of type data
    bool *visited; //!< bool for if team was visited or not

//BFS
    int e; //!< Number of edges


    int** adjBFS; //!< Adjacency matrix for bfs
    double** adjDistance; //!< Adjacency matrix for bfs distances

    int totalDistance; //!< distance total for bfs
};

#endif // GRAPH_H
