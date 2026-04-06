#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int maxChainLength(vector<pair<int,int>> P){

    sort(P.begin(), P.end(), compare);

    int last = P[0].second;
    int count = 1;                              // we can always have a chain of length 1, as we can take any pair as a chain of length 1. So we start with count = 1.
    for(int i = 1; i<P.size(); i++){
        if(P[i].first > last){
            count++;
            last = P[i].second;
        }
    }
    cout<<"total number of pairs / max Length chain of pairs :"<< count <<endl;
    return count;
}

int main(){
    vector<pair<int,int>> P = {{5, 24}, {39,60}, {5, 28}, {27, 40}, {50, 90}};

    maxChainLength(P);


    return 0;
}