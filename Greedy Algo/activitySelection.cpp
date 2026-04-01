#include<iostream>
#include<vector>
using namespace std;

int maxActivities(vector<int> start, vector<int> end){
    // sort the end time in ascending order (here we are given the end time in sorted order)
    // select the A0 activity and count = 1
    cout<<"selecting activity A0"<<endl;
    int count = 1;
    int currEndTime = end[0];                  //selected the first activity end point

    for(int i = 1; i<start.size(); i++){         //starting from 2nd activity
        if(start[i] >= currEndTime){
            cout<<"selecting activity A"<<i<<endl;
            count++;
            currEndTime = end[i];
        }
    }

    return count;
}


int main(){
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};       //4

    cout<< maxActivities(start, end)<<endl;
    
    return 0;
}