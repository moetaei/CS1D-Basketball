#ifndef GRAPH_H
#define GRAPH_H

#include <QList>
#include <QVector>
#include<bits/stdc++.h>
#include "data.h"
using namespace std;
# define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

class Graph
{

public:
    Graph();
    void setDijEdges();
    void addEdge(int u, int v, double w);
    double shortestPath(int s,int dest);
    void printPath(QString city, int &check);

    void setDFSEdges();
    void addEdgeDFS(int src, int dest);
    bool checkVisits(int cities);
    bool visit(QString city,int vertex);
    void DFS(int vertex, QString &output, double &distance, double &total);
    void reset();

    // for Mst
    void calcMst();
    void setMST();
    void printMST();




private:
    int V;
    QList< pair<int, int> > *adj;
    QList<int> *dfs;
    QVector<node> adjLists;

    QVector<QVector<double>> *mst;

    class data datah;
    bool *visited;
};

#endif // GRAPH_H