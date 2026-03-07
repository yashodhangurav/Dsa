#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;


void nextGreater(vector<int> arr, vector<int> ans){     //O(n) time complexity and O(n) space complexity
    stack<int> s;

    for(int i  = arr.size() - 1; i>=0; i--){
        while(!s.empty() && s.top() <= arr[i] ){
            s.pop();
        }
        if(s.empty()){
            s.push(arr[i]);
            ans[i] = -1;
        }else{
            ans[i] = s.top();
            s.push(arr[i]);
        }
    }

    // print the ans vector
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}


int main(){
    vector<int> arr = {4, 5, 2, 25};
    vector<int> ans = {0,0,0,0};
    nextGreater(arr, ans);

    return 0;
}