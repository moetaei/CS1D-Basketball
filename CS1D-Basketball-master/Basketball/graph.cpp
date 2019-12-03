#include "graph.h"

// Allocates memory for adjacency list
Graph::Graph()
{
    V = datah.getSizeC();
    adj = new QList<iPair> [V];
    dfs = new QList<int>[V];
    visited = new bool[V];
    mst = new QVector<QVector<double>>[V];


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
            }
        }
        output += '\n';
        output += "Total Distance: " + QString::number(dist[dest]);
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

void Graph::printMST()
{
    for(int i = 0; i < mst->size(); i++)
    {
        qDebug() << mst->size();
        for(int j = 0; j < mst[i].size();j++)
        {
            qDebug() << mst[i].size();
           for(int k = 0; k < mst[i][j].size();k++)
           {
               qDebug() << mst[i][j].size();
               double number =mst[i][j][k];
               qDebug() << "Start4";
               qDebug()<< number <<", ";
           }

        }
        qDebug() << "End";
    }
}
void Graph::setMST()
{
    for(int i = 0; i < datah.getSizeC(); i++)
    {
        QVector<double> *temp = new QVector<double>[datah.getSizeC()];
        for(int j = 0; j < datah.getSizeC(); j++)
        {
            if(i == j)
            {
                temp->push_back(0.0);
            }
            else
            {
                if( datah.findDistance(i,j)> 0)
                {

                    temp->push_back(datah.findDistance(i,j));
                }
                else
                {

                    temp->push_back(0.0);
                }
            }      
        }
        mst[i].push_back(*temp);
    }

}
/*
void Graph :: calcMst()
{
    // Array to store constructed MST
    int parent[V];

    // Key values used to pick minimum weight edge in cut
    int key[V];

    // To represent set of vertices not yet included in MST
    bool mstSet[V];

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    // Always include first 1st vertex in MST.
    // Make key 0 so that this vertex is picked as first vertex.
    key[0] = 0;
    parent[0] = -1; // First node is always root of MST

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++)
    {
        // Pick the minimum key vertex from the
        // set of vertices not yet included in MST
        int min = INT_MAX, min_index;

        for (int v = 0; v < V; v++)
            if (mstSet[v] == false && key[v] < min)
                min = key[v], min_index = v;

        int u = min_index;

        // Add the picked vertex to the MST Set
        mstSet[u] = true;

        // Update key value and parent index of
        // the adjacent vertices of the picked vertex.
        // Consider only those vertices which are not
        // yet included in MST
        for (int v = 0; v < V; v++)

            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }


}

*/
