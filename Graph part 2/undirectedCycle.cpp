
#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;



class Graph{
    int V;
    list<int>* l;

    public:
        Graph(int V){
            this->V = V;
            l = new list<int> [V];
        }

        void addEdge(int u, int v){
            l[u].push_back(v);
            l[v].push_back(u);
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

        bool undirectedHelper(int src, int par, vector<bool> &vis){         //O(E+V)
            vis[src] = true;
            list<int> neighbours = l[src];

            for(int v : neighbours){
                if(!vis[v]){
                   if(undirectedHelper(v,src,vis)){
                        return true;
                    }
                }else{
                    if(v != par){                       //cycle condition
                        return true;
                    }
                }
            }
            return false;
        }


        bool undirectedCycle(){
            vector<bool> vis(V,false);
            return undirectedHelper(0,-1,vis);
        }

        
};


int main(){

    Graph graph(7);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(2,0);
    graph.addEdge(0,3);
    graph.addEdge(3,4);


        // graph.print();
    cout<<graph.undirectedCycle();

    return 0;
}