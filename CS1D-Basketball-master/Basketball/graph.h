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
private:
    int V;
    QList< pair<int, int> > *adj;
    QVector<node> adjLists;
    class data datah;
};

#endif // GRAPH_H
