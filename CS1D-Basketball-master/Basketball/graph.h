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
    void shortestPath(int s,int dest, QString &output);
    void getPath(int s,int city, QVector<int> &path);

    void setDFSEdges();
    void addEdgeDFS(int src, int dest);
    bool checkVisits(int cities);
    bool visit(QString city,int vertex);
    void DFS(int vertex, QString &output, double &distance, double &total);

    void addEdgeBFS(int start, int e, double distance);
    void BFS(int start);
    void printBFS();
    void reset();

    // for Mst
    void calcMst(QString &output);
    void setMST();
    double minKey(double key[], bool mstSet[]);
    void printMST(int parent[], QString &output);




private:
    int V;
    QList< pair<int, int> > *adj;
    QList<int> *dfs;
    QVector<node> adjLists;

    QVector<QVector<double>> *mst;

    class data datah;
    bool *visited;

    // Number of edges
    int e;

    // Adjacency matrix
    int** adjBFS;
    double** adjDistance;

    int totalDistance;
};

#endif // GRAPH_H
