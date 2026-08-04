

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

        
    void calIndegree(vector<int> &indeg){
            
        for(int u = 0; u<V; u++){
            list<int> neighbours = l[u];
            for(int v: neighbours){
                indeg[v]++;
            }
        }
    }
    
    void topoSor2(){
        vector<int> indeg(V,0);
        calIndegree(indeg);
        queue<int> q;
        
        for(int i = 0; i<V; i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }

        while(q.size()>0){
            int curr = q.front();
            q.pop();
            cout<<curr<<" ";

            list<int> neighbours = l[curr];
            for(int v: neighbours){
                indeg[v]--;
                if(indeg[v] == 0){
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }

};


int main(){

    Graph graph(6, false);

        graph.addEdge(5,2);
        graph.addEdge(5,0);
        graph.addEdge(4,0);
        graph.addEdge(4,1);
        graph.addEdge(2,3);
        graph.addEdge(3,1);
        


        // graph.print();
        graph.topoSor2();

    return 0;
}