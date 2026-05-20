#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void slidingWindow(vector<int> arr, int k){
    priority_queue<pair<int, int>> pq;

    for(int i = 0; i<k; i++){
        pq.push(make_pair(arr[i], i));          //pair of (value, index)
    }

    cout<<pq.top().first<<" ";                     //printing max value

    for(int i = k; i<arr.size(); i++){
        pq.push((make_pair(arr[i], i)));

        while(!pq.empty() && pq.top().second <= (i-k)){     //outside the current window
            pq.pop();                                         //removing elements which are out of the current window
        }
        cout<<pq.top().first<<" ";                     //printing max value
    }
}

int main(){
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    slidingWindow(arr, k);
    return 0;
}