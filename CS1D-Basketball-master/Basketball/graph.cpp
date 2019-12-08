#include "graph.h"
#include <QDebug>

// Allocates memory for adjacency list
Graph::Graph()
{
    V = datah.getSizeC();
    adj = new QList<iPair> [V];
    dfs = new QList<int>[V];
    visited = new bool[V];
    mst = new QVector<QVector<double>>[V];
    setMST();
    setDFSEdges();
    setDijEdges();
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
    }
    if(!visited[vertex])
    {
        output += datah.findCityName(vertex);
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
void Graph::shortestPath(int src, int dest, QString &output)
{
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

    QVector<double> dist(V, INF);
    double total = 0;

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
    if(dest <= datah.getSizeC())
    {
        QVector<int> path;
        path.push_front(dest);
        getPath(src,dest,path);
        for(int i = 0; i < path.size(); i++)
        {
            if(i + 1 < path.size())
            {
                 output += datah.findCityName(path[i]) + "--(" + QString::number(datah.findDistance(path[i], path[i+1])) +
                         ")-->" +datah.findCityName(path[i+1])+ '\n';
                 total += datah.findDistance(path[i], path[i+1]);
            }
        }
        output += '\n';
        output += "Total Distance: " + QString::number(total /*dist[dest]*/);
    }
}
void Graph :: getPath(int s, int city, QVector<int> &path)
{
    if(s != city)
    {
        int i = 0;
        while(adjLists[i].getCity2() != datah.findCityName(city) && i < datah.getSizeC())
        {
            i++;
        }
        city = datah.findCityIndex(adjLists[i].getCity1());
        path.push_front(city);
        getPath(s,city,path);
    }

}
void Graph::setMST()
{
    QVector<double> temp;
    for(int i = 0; i < datah.getSizeC(); i++)
    {
        for(int j = 0; j < datah.getSizeC(); j++)
        {
            if(i == j)
            {
                temp.push_back(0.0);
            }
            else
            {
                if(datah.findDistance(i,j)> 0)
                {
                    temp.push_back(datah.findDistance(i,j));
                }
                else
                {
                    temp.push_back(0.0);
                }
            }      
        }
        mst->push_back(temp);
        temp.clear();
    }
}

double Graph :: minKey(double key[], bool mstSet[])
{
    // A utility function to find the vertex with
    // minimum key value, from the set of vertices
    // not yet included in MST
    // Initialize min value
    double min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == false && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}
void Graph :: calcMst(QString &output)
{
    // Array to store constructed MST
    int parent[V];

    // Key values used to pick minimum weight edge in cut
    double key[V];

    // To represent set of vertices not yet included in MST
    bool mstSet[V];

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++)
    {
         key[i] = INT_MAX;
         mstSet[i] = false;
    }

    // Always include first 1st vertex in MST.
    // Make key 0 so that this vertex is picked as first vertex.
    key[0] = 0;
    parent[0] = -1; // First node is always root of MST

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++)
    {
        qDebug() << count;
        // Pick the minimum key vertex from the
        // set of vertices not yet included in MST
        double min = INT_MAX, min_index;

        for (int v = 0; v < V; v++)
        {
            if (mstSet[v] == false && key[v] < min)
            {
                min = key[v];
                min_index = v;
            }
       }
        int u = minKey(key, mstSet);

        // Add the picked vertex to the MST Set
        mstSet[u] = true;
        // Update key value and parent index of
        // the adjacent vertices of the picked vertex.
        // Consider only those vertices which are not
        // yet included in MST
        for (int v = 0; v < V; v++)
        {
            if (mst[0][u][v] && mstSet[v] == false && mst[0][u][v] < key[v])
            {
                parent[v] = u;
                key[v] = mst[0][u][v];
            }
        }
            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
    }
    printMST(parent, output);
}
void Graph::printMST(int parent[],QString &output)
{
    output += "Edge \t\t\t Weight\n";
    for (int i = 1; i < V; i++)
    {
        output+= datah.findCityName(parent[i]) + " - " + datah.findCityName(i) + "\n" + "     \t\t\t" + QString:: number(mst[0][i][parent[i]]) +" \n";
    }

}


