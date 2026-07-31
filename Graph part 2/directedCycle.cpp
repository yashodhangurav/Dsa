
#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;



class Graph{
    int V;
    list<int>* l;
    bool isUndirected;

    public:
        Graph(int V, bool isUndirected = true){
            this->V = V;
            l = new list<int> [V];
        }

        void addEdge(int u, int v){         
            l[u].push_back(v);                  //u-->v
            if(isUndirected)                   //if it is true then only we can created undirected vertecis graph Else graph become directed
                l[v].push_back(u);              //v-->u
        }

        void print(){
            for(int u = 0; u<V; u++){
                cout<<u<<" : ";
                list<int> neighbours = l[u]; 
                for(int v : neighbours){
                    cout<<v<<" ";
                }
                cout<<endl;
            }
        }

        bool isCycleDirHelper(int src, vector<bool> &vis, vector<bool> &recPath){
            vis[src] = true;
            recPath[src] = true;
            list<int> neighbours = l[src];
            for(int v: neighbours){
                if(!vis[v]){
                    if(isCycleDirHelper(v,vis,recPath)){
                        return true;
                    }
                }else{
                    if(recPath[v]){
                        return true;
                    }
                }
            }
            recPath[src] = false;
            return false;
        }

        
        bool isCycleDir(){
            vector<bool> vis(V, false);
            vector<bool> recPath(V, false);
            for(int i = 0; i<V; i++){
                if(!vis[i]){
                    if(isCycleDirHelper(i,vis,recPath)){
                        return true;
                    }
                }
            }
            return false;
        }

        
};


int main(){

    //directed graph
    Graph graph(7, false);              //false becouse we want to create directed graph

    graph.addEdge(1,0);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);

        // graph.print();
    
    cout<<graph.isCycleDir();

    return 0;
}