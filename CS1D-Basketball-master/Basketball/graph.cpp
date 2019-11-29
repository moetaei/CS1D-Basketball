#include "graph.h"

// Allocates memory for adjacency list
Graph::Graph()
{

    V = datah.getSizeC();
    adj = new QList<iPair> [V];
}
void Graph::addEdge(int u, int v, double w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
void Graph::setDijEdges()
{
    int index1, index2;
    qDebug() << "START";
    for(int i = 0; i< datah.getSizeN(); i++)
    {
        index1 = datah.findCityIndex(datah.getTeams()[i].getCity1());
        index2 = datah.findCityIndex(datah.getTeams()[i].getCity2());
        addEdge(index1, index2, datah.findDistance(index1, index2));
    }
    qDebug() << "END";
}
double Graph::shortestPath(int src, int dest)
{
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

    QVector<double> dist(V, INF);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        QList< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {

            int v = (*i).first;
            double weight = (*i).second;

            if (dist[v] > dist[u] + weight)
            {
                if(adjLists.size() != 0)
                {
                    if(datah.findCityName(v) == adjLists.back().getCity2())
                    {
                        adjLists.pop_back();
                    }
                }
                node newNode(datah.findCityName(u),datah.findCityName(v),weight);
                adjLists.push_back(newNode);
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    if(dest > datah.getSizeC())
    {
        return -1;
    }
    return dist[dest];

}
void  Graph :: printPath(QString city, int &check)
{
    for(int i = 0; i < adjLists.size(); i++)
    {
        if(check < 12)
        {
            if(city == adjLists[i].getCity1())
            {
                qDebug() <<" - "<< adjLists[i].getCity1() << "--("<< adjLists[i].getDistance() <<")-->" << adjLists[i].getCity2();
                check++;
                cout << endl;
                printPath(adjLists[i].getCity2(), check);

            }
        }
    }
}
