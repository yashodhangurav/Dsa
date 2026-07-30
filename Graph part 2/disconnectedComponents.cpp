
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


//---------------- BFS for disconnected Graphs

        void bfsHelper(int st, vector<bool> &vis){
            queue<int> q;
            q.push(st);
            vis[st] = true;

            while(q.size()>0){
                int u = q.front();
                q.pop();
                cout<<u<<" ";

                list<int> neighbours = l[u];
                for(int v : neighbours){
                    if(!vis[v]){
                        vis[v] = true;
                        q.push(v);
                    }
                }
            }
            cout<<endl;
        }

        void bfs(){
            vector<bool> vis(V,false);
            for(int i = 0; i<V; i++){
                if(!vis[i]){
                    bfsHelper(i,vis);
                }
            }
        }

//--------------- DFS for disconnected Graphs
        void dfshelper(int u, vector<bool> &vis){         //O(V+E)
            vis[u] = true;
            cout<<u<<" ";

            list<int> neighbours = l[u];
            for(int v : neighbours){
                if(!vis[v]){
                    dfshelper(v,vis);
                }
            }
        }
        
        void dfs(){
            vector<bool> vis(V,false);
            for(int i = 0; i<V; i++){
                if(!vis[i]){
                    dfshelper(i,vis);
                    cout<<endl;
                }  
            }
           cout<<endl;
        }

};


int main(){

    Graph graph(10);

        graph.addEdge(1,6);
        graph.addEdge(6,4);
        graph.addEdge(4,9);
        graph.addEdge(4,3);
        graph.addEdge(3,8);
        graph.addEdge(3,7);

        graph.addEdge(0,2);
        graph.addEdge(2,5);


        // graph.print();
        graph.bfs();

    return 0;
}