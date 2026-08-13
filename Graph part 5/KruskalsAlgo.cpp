#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Edge{
    public:
    int u;
    int v;
    int wt;

    Edge(int u, int v, int wt){
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
};

class Graph{
    public:
    vector<Edge> edges;
    int V;
    vector<int> par;
    vector<int> rank;

    Graph(int V){
        this->V = V;

        for(int i =0; i<V; i++){
            par.push_back(i);
            rank.push_back(0);
        }
    }

    int find(int x){
        if(par[x] == x){
            return x;
        }
        return par[x] = find(par[x]);
    }

    void unionByRank(int u, int v){
        int parU = par[u];
        int parV = par[v];

        if(rank[parU] == rank[parV]){
            par[parV] = parU;
        }else if(rank[parU] > rank[parV]){
            par[parV] = parU;
        }else{
            par[parU] = parV;
        }
    }

    void addEdges(int u, int v, int wt){
        edges.push_back(Edge(u,v,wt));
    }

    void kruskal(){     //O(ElogE)
        sort(edges.begin(), edges.end(), [](Edge &a, Edge &b){return a.wt < b.wt;});    //lambda function to sort the edges vector
        int minCost = 0;
        int count = 0;          //optimization

        for(int i = 0; i<edges.size() && count < V-1; i++){
            Edge e = edges[i];

            int parU = par[e.u];
            int parV = par[e.v];
            if(parU != parV){
                unionByRank(parU, parV);
                minCost += e.wt;
                count++;
            }
        }
        cout<<"Min cost is : "<<minCost<<endl;
    }
};

int main(){
   
    Graph graph(4);
    graph.addEdges(0,1,10);
    graph.addEdges(0,2,15);
    graph.addEdges(0,3,30);
    graph.addEdges(1,3,40);
    graph.addEdges(2,3,50);
    
    graph.kruskal();

    return 0;

}