#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;



int countDistinct(vector<int> arr){
    unordered_set<int> s;

    for(int i = 0; i<arr.size(); i++){
        s.insert(arr[i]);
    }
    // // print
    // for(int el : s){
    //     cout<< el<<" ";
    // }
    
    return s.size();
}



int main(){

    vector<int> arr = {7,5,4,1,2,9,8,7,2};
    cout<<"count is : "<< countDistinct(arr);


    return 0;
}