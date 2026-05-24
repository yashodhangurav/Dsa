#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 7;
    unordered_map<int,int> m;                   //key = arr[i], value = index

    for(int i= 0; i<arr.size(); i++){
        int comp = target - arr[i];

        if(m.count(comp)){                               
            cout<<"ans: "<<m[comp]<<", "<<i<<endl;          //comp idx, current idx
            break;
        }
        m[arr[i]] = i;                                      //insert the value,idx pair in the map m
    }



    return 0;
}