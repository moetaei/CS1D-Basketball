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

/*! Class Graph is used to perform the DFS, BFS and MST on
 * the basketball teams. It is also used to display them and the total distances. */
class Graph
{

public:
    //! Constructor
    Graph();

    //! Set edges to dfs list for dfs
    void setDijEdges();

    //! Set edges to adjacency list
    void addEdge(int u, int v, double w);

    //! Find the shortest path for dfs
    void shortestPath(int s,int dest, QString &output);

    //! gets the path for the dfs
    void getPath(int s,int city, QVector<int> &path);

    //! sets the edges of the dfs
    void setDFSEdges();

    //! adds the edges to the dfs list
    void addEdgeDFS(int src, int dest);

    //! checks if the team has been visited or not in dfs
    bool checkVisits(int cities);

    //! Function that finds the team name and compares it to see if it has been visited allready
    bool visit(QString city,int vertex);

    //! Function that performs the DFS
    void DFS(int vertex, QString &output, double &distance, double &total);

    //! Function that resets values in dfs
    void reset();

    //! Function that performs the MST
    void calcMst(QString &output);

    //! Function that declares the lists for MST
    void setMST();

    //! Function that finds the minimum value for MST
    double minKey(double key[], bool mstSet[]);

    //! Function that prints the MST
    void printMST(int parent[], QString &output);

    //! Function that returns the total distance for bfs
    double getTotalDistance();

    //! sets the edges of the bfs and its distances
    void setBFSEdges();

    //! Declares the list variables and initializes them for bfs
    void setBFS();

    //! adds edges to the bfs list and distances
    void addEdgeBFS(int start, int e, double distance);

    //! Function that performs the BFS and takes in index for starting team
    void BFS(int start);

    //! Function that prints the BFS
    void printBFS(QString &output);


private:
    int V; //!< The size of list / the amount of teams
    QList< pair<int, int> > *adj; //!< adjacency list
    QList<int> *dfs; //!< dfs list
    QVector<node> adjLists; //!< adjacency list for dfs

    QVector<QVector<double>> *mst; //!< mst QVector of type double

    class data datah; //!< database
    bool *visited; //!< boolean for vertexs visited

    int e; //!< Number of Edges

    int** adjBFS; //!< Adjacency matrix for bfs
    double** adjDistance; //! Adjacency matrix for the distances for bfs

    int totalDistance; //!< Total distance traveled for bfs
};

#endif // GRAPH_H
