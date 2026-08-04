

#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;


class Edge{
    public:
        int v;
        int wt;

        Edge(int v, int wt){
            this->v = v;
            this->wt = wt;
        }
};

void dijkstras(int src, vector<vector<Edge>> &graph, int V){            // O((V+E)*log V)
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;   //creating min heap with pairs (just like priority_queue<int , vector<int>, greater<int>> pq; )
    //now we need to sorting based on dist[v] so pair(dist[v],v)
    vector<int> dist(V,INT_MAX);
    pq.push(make_pair(0,src));
    dist[src] = 0;
    
    while(pq.size() > 0){
        int u = pq.top().second;
        pq.pop();

        vector<Edge> edges = graph[u];
        for(Edge e :edges){
            if(dist[e.v] > dist[u] + e.wt){
                dist[e.v] = dist[u] + e.wt;
                pq.push(make_pair(dist[e.v], e.v));
            }
        }
    }

    for(int d : dist){
        cout<<d<<" ";
    }
    cout<<endl;
}


int main() {
    int V = 6;

    // Adjacency list
    vector<vector<Edge>> graph(V);

    // Adding 6 edges (u -> v with weight)
    graph[0].push_back(Edge(1, 2));             //edge --> (destination, weight)
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));

    graph[2].push_back(Edge(4, 3));

    graph[3].push_back(Edge(5, 1));

    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(5, 5));

    dijkstras(0,graph,V);

    return 0;
}



