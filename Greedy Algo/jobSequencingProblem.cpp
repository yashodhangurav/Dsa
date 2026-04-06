#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}

int jobSequencing(vector<pair<int, int>> jobs){
    int n = jobs.size();

    int profit= jobs[0].second;
    int last = jobs[0].first;

    
    for(int i = 1; i<n; i++){
        if(jobs[i].first > last){
            profit += jobs[i].second;
            last++; 
            
        }
    }
    cout<<"Profit: "<<profit<<endl;
    return profit;
}


int main(){
    vector<pair<int,int>> jobs(4, make_pair(0,0));
    jobs[0] = make_pair(1,40);
    jobs[1] = make_pair(1,30);
    jobs[2] = make_pair(4,20);
    jobs[3] = make_pair(1,10);

    sort(jobs.begin(), jobs.end(), compare);

    jobSequencing(jobs);

    return 0;
}