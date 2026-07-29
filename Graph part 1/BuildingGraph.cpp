#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V;              //number of vertices
    list<int> * l;       //l will store the different list's of integers (just like dinamic array int * arr)

    public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];          // new list of size of V , just like (arr = new int[V])
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u = 0; u<V; u++){
            list<int> neighbors = l[u];
            cout<<u<<" : "; 
            for(int v : neighbors){
                cout<< v <<", ";
            }
            cout<<endl;
        }
    }
};


int main(){

    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(2,4);

    graph.print();
    
    return 0;
}