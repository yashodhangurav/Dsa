#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;


struct ComparePairs{
    bool operator () (pair<string, int> &p1, pair<string, int> &p2){
        return p1.second < p2.second;                                           //for min heap, we want the pair with the smaller "second" (int) property to be at the top
    }
};


int main(){
    // priority_queue<pair<string ,int>> pq;                                        //default is max heap, so the pair with the highest "first" (string) peoperty will be at the top

    priority_queue<pair<string ,int>, vector<pair<string, int>> , ComparePairs> pq;         //max heap, so the pair with the highest "second" (int) property will be at the top

    pq.push(make_pair("Alice", 85));
    pq.push(make_pair("Bob", 90));
    pq.push(make_pair("Charlie", 80));

    while(!pq.empty()){
        cout<<"Top : "<<pq.top().first<<", "<<pq.top().second<<endl;
        pq.pop();
    }

    return 0;
}