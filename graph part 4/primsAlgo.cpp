
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<queue>
using namespace std;



class Graph{
    int V;
    list<pair<int,int>>* l;
    bool isUndirected;

    public:
        Graph(int V, bool isUndirected = true){
            this->V = V;
            this->isUndirected = isUndirected;
            l = new list<pair<int,int>> [V];
        }

        void addEdge(int u, int v, int wt){         
            l[u].push_back(make_pair(v,wt));                  //u---v + weight
            if(isUndirected)                   //if it is true then only we can created undirected vertecis graph Else graph become directed
                l[v].push_back(make_pair(u,wt));              //v-->u
        }

        void print(){
            for(int u = 0; u<V; u++){
                cout<<u<<" : ";
                list<pair<int,int>> neighbours = l[u]; 
                for(pair<int,int> v : neighbours){
                    cout<<v.first<<" ";
                }
                cout<<endl;
            }
        }

        void primsAlgo(int src){
            priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
            //we need to pass wt first coz pq always sort according to the first value

            vector<bool> mst(V,false);
            int ans = 0;
            pq.push(make_pair(0,src));

            //pair(wt,u) = weight,vertex

            while(pq.size() > 0){
                int u = pq.top().second;
                int wt = pq.top().first;
                pq.pop();

                if(!mst[u]){
                    mst[u] = true;
                    ans += wt;
                    list<pair<int,int>> neighbour = l[u];
                    for(pair<int,int> v : neighbour){           //pair(vertex,wt) here(we are passing like this only from main fn)
                        if(!mst[v.first]){
                            pq.push(make_pair(v.second,v.first));   //(weight,vertex)
                        }
                        
                    }
                }
            }
            cout<<"Final cost of mst is : "<<ans<<endl;
        }
        
        
};


int main(){

    //directed graph
    Graph graph(4);              //false becouse we want to create directed graph

    graph.addEdge(0,1,10);
    graph.addEdge(1,2,15);
    graph.addEdge(0,3,30);
    graph.addEdge(1,3,40);
    graph.addEdge(2,3,50);

        // graph.print();
    
    // cout<<graph.isCycleDir();
    graph.primsAlgo(0);
    
    return 0;
}