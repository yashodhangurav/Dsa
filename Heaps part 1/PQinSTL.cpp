#include<iostream>
#include<queue>
#include<string>
using namespace std;


int main(){
    // priority_queue<int, vector<int>, greater<int>> pq; // min heap
    // priority_queue<int> pq; // max heap

    priority_queue<string, vector<string>, greater<string>> pq; // max heap for strings (lexicographical order)

    // pq.push(5);
    // pq.push(2);
    // pq.push(8);
    // pq.push(1);

    pq.push("yashodhan");
    pq.push("abhishek");
    pq.push("satyarth");


    while(!pq.empty()){
        cout<<"Top element: "<<pq.top()<<endl;
        pq.pop();
    }

    // cout<<"Highest priority element: "<<pq.top()<<endl; // 8


    return 0;
}