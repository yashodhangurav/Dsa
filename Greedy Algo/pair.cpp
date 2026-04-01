#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;



bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;                     //sort according to end time in ascending order
    // return p1.second > p2.second;                     //sort according to end time in descending order
}

int main(){
    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

    // vector<int> vec(5,0);                   //initialise vector of size 5 with all values as 0

    vector<pair<int, int>> activity(3, make_pair(0,0));              //vectors of pairs, initialise with 3 pairs of (0,0)

    activity[0] = make_pair(start[0], end[0]);
    activity[1] = make_pair(start[1], end[1]);
    activity[2] = make_pair(start[2], end[2]);


    // printing activity

    for(int i = 0; i<activity.size(); i++){
        cout<<"A"<<i<<" : "<<activity[i].first<<", "<<activity[i].second<<endl;
    }


    // sorting according to the end time (second element of the pair)
    sort(activity.begin(), activity.end(), compare);

    cout<<"______sorted______"<<endl;
    for(int i = 0; i<activity.size(); i++){
        cout<<"A"<<i<<" : "<<activity[i].first<<", "<<activity[i].second<<endl;
    }
    
    return 0;
}