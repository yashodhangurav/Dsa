
#include<iostream>
#include<string>
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
            this->isUndirected = isUndirected;
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

        void allPathHelper(int src, int dest, vector<bool> &vis , string &path){

            if(src == dest){
                cout<<path<<dest<<endl;
                return;
            }

            vis[src] = true;
            path += to_string(src);

            list<int> neighbours = l[src];
            for(int v: neighbours){
                if(!vis[v]){
                    allPathHelper(v,dest,vis, path);
                }
            }
            path = path.substr(0, path.size()-1);
            vis[src] = false;
        }

        void allPath(int src, int dest){
            vector<bool> vis(V, false);
            string path = "";
            allPathHelper(src,dest,vis,path);
        }
        
};


int main(){

    //directed graph
    Graph graph(7, false);              //false becouse we want to create directed graph

    graph.addEdge(5,2);
    graph.addEdge(2,3);
    graph.addEdge(5,0);
    graph.addEdge(0,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);

        // graph.print();
    
    // cout<<graph.isCycleDir();
    graph.allPath(5,1);

    return 0;
}