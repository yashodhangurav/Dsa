#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subArrayCounts(vector<int> arr, int k){
    unordered_map<int,int> m;                   //<sum,count>
    m[0] = 1;
    int sum = 0;
    int ans = 0;

    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];

        if(m.count(sum-k)){
            ans += m[sum-k];
        }

        if(m.count(sum)){
            m[sum]++;
        }else{
            m[sum] = 1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {10,2,-2,-20,10};
    int K = -10;

    cout<<"subArray count : "<<subArrayCounts(arr, K)<<endl;

    return 0;
}