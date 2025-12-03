#include<iostream>
#include<vector>
using namespace std;

int sungleNo(vector<int> nums, int n){
    int ans = 0;
    for(int ele: nums){
        ans = ans^ele;
    }
    return ans;
}


int main(){
    vector<int> arr = {2,4,1,5,2,1,4,5,7};
    int n = arr.size();
    cout<<sungleNo(arr,n);

    return 0;
}