#include "graph.h"

// Allocates memory for adjacency list
Graph::Graph()
{
    V = datah.getSizeC();
    adj = new QList<iPair> [V];
    dfs = new QList<int>[V];
    visited = new bool[V];
}
void Graph::addEdge(int u, int v, double w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
void Graph::addEdgeDFS(int src, int dest)
{
    dfs[src].push_back(dest);
    dfs[dest].push_back(src);
}
void Graph::setDijEdges()
{
    int index1, index2;
    for(int i = 0; i< datah.getSizeN(); i++)
    {
        index1 = datah.findCityIndex(datah.getTeams()[i].getCity1());
        index2 = datah.findCityIndex(datah.getTeams()[i].getCity2());
        addEdge(index1, index2, datah.findDistance(index1, index2));
    }
}
void  Graph:: setDFSEdges()
{
    int index1, index2;
    for(int i = 0; i< datah.getSizeN(); i++)
    {
        index1 = datah.findCityIndex(datah.getTeams()[i].getCity1());
        index2 = datah.findCityIndex(datah.getTeams()[i].getCity2());
        addEdgeDFS(index1,index2);
    }
}
bool Graph :: checkVisits(int cities)
{
    for(int i = 0; i < cities; i++)
    {
        if (visited[i] == false)
        {
            return false;
        }
    }
    return true;
}
void Graph::DFS(int vertex, QString &output, double &distance, double &total)
{
    if(!checkVisits(datah.getSizeC()) && distance > 0)
    {
        QString d = QString::number(distance);
        output += " --(" + d +")--> \n";
        //qDebug() << output;
        //qDebug() << "End1";
    }
   // qDebug() << "End";
    if(!visited[vertex])
    {
        output += datah.findCityName(vertex);
        //qDebug() << "Start";
        //qDebug() << output;
        //qDebug() << "Start1";

    }
    visited[vertex] = true;
    QString target = datah.findCityName(vertex);
    double temp = 0;
    QString shortDist = "";
    QList<int>::iterator k;
    for(int i = 0; i < datah.getSizeC(); i++)
    {
        if(datah.getTeams()[i].getCity1() == target)
        {
            if(temp == 0.0 && visit(datah.getTeams()[i].getCity2(), vertex))
            {
                shortDist = datah.getTeams()[i].getCity2();
                temp = datah.getTeams()[i].getDistance();
            }
            else if(datah.getTeams()[i].getDistance() < temp)
            {
                if(visit(datah.getTeams()[i].getCity2(), vertex))
                {
                    shortDist =  datah.getTeams()[i].getCity2();
                    temp =  datah.getTeams()[i].getDistance();

                }
            }
        }
        else if( datah.getTeams()[i].getCity2() == target)
        {
            if(temp == 0.0 && visit(datah.getTeams()[i].getCity1(), vertex))
            {
                shortDist = datah.getTeams()[i].getCity1();
                temp = datah.getTeams()[i].getDistance();
            }
            else if( datah.getTeams()[i].getDistance() < temp)
            {
                if(visit(datah.getTeams()[i].getCity1(), vertex))
                {
                    shortDist = datah.getTeams()[i].getCity1();
                    temp =  datah.getTeams()[i].getDistance();

                }
            }
        }
    }
    distance = temp;
    total = total + temp;
    for(k = dfs[vertex].begin(); k != dfs[vertex].end(); ++k)
    {
        if(datah.findCityName(*k) == shortDist && !visited[*k])
        {
            DFS(*k, output, distance,total);
            DFS(*k, output, distance, total);
            DFS(*k, output, distance, total);
            DFS(*k, output, distance, total);
            DFS(*k, output, distance, total);
        }
    }
}
bool Graph::visit(QString city,int vertex)
{
    QList<int>::iterator k;
    for(k = dfs[vertex].begin(); k != dfs[vertex].end(); ++k)
    {
        if(datah.findCityName(*k) == city && !visited[*k])
        {
            return true;
        }
    }
    return false;
}
void  Graph::reset()
{
    for(int i = 0; i < datah.getSizeC() ; i++)
    {
        visited[i]= false;
    }
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
