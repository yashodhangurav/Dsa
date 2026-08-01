

#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
using namespace std;



class Graph{
    int V;
    list<int>* l;
    bool isUndirected;

    public:
        Graph(int V, bool isUndirected = true){
            this->V = V;
            l = new list<int> [V];
            this->isUndirected = isUndirected;
        }

        void addEdge(int u, int v){
            l[u].push_back(v);
            if(isUndirected)
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

        void topoSortHelper(int src, vector<bool> &vis, stack<int> &s){     //O(V+E)
            vis[src] = true;
            list<int> neighbours = l[src];
            for(int v: neighbours){
                if(!vis[v]){
                    topoSortHelper(v,vis,s);
                }
            }
            s.push(src);
        }

        void topoSort(){
            vector<bool> vis(V,false);
            stack<int> s;
            for(int i = 0; i<V; i++){
                if(!vis[i]){
                    topoSortHelper(i,vis,s);
                }
            }

            //print topological order
            while(s.size() > 0){
                cout<<s.top()<<" ";
                s.pop();
            }
        }

};


int main(){

    Graph graph(6, false);

        graph.addEdge(5,2);
        graph.addEdge(2,3);
        graph.addEdge(5,0);
        graph.addEdge(3,1);
        graph.addEdge(4,0);
        graph.addEdge(4,1);
        


        // graph.print();
        graph.topoSort();

    return 0;
}