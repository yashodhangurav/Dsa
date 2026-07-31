
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

        bool isBipartite(){
            vector<bool> vis(V,false);
            queue<int> q;
            vector<int> colour(V,-1);
            q.push(0);
            vis[0] = true;
            colour[0] = 0;

            while(q.size() > 0){
                int curr = q.front();
                q.pop();

                list<int> neighbours = l[curr];
                for(int v : neighbours){
                    if(!vis[v]){
                        vis[v] = true;
                        q.push(v);
                        colour[v] = !colour[curr];
                    }else{
                        if(colour[v] == colour[curr]){
                            return false;
                        }
                    }
                }
            }
            return true;
        }

        
};


int main(){

    //directed graph
    Graph graph(7);              //false becouse we want to create directed graph

    graph.addEdge(0,1);
    graph.addEdge(1,3);
    graph.addEdge(3,4);
    graph.addEdge(4,2);
    graph.addEdge(2,0);

        // graph.print();
    

    cout<<graph.isBipartite();

    return 0;
}