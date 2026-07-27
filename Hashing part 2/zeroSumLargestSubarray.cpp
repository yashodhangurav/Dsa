

// ------------------------------------------------------bruteForce

// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){

//     vector<int> arr = {15,-2,2,-8,1,7,10};
//     int maxiLen = 0;

//     for(int i = 0; i<arr.size(); i++){
//         int sum = 0;
//         for(int j = i; j<arr.size(); j++){
//             sum += arr[j];

//             if(sum == 0){
//                 int len = j-i+1;
//                 if(len > maxiLen){
//                     maxiLen = len;
//                 }
//             }
//         }
//     }
//     cout<<maxiLen<<endl;
//     return maxiLen;
// }





// ------------------------------------------------------optimal


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int largest0subArray(vector<int> arr){
    int sum = 0;
    int ans = 0;
    unordered_map<int,int> m;           //<sum,idx>

    for(int j =0; j<arr.size(); j++){
        sum += arr[j];

        if(m.count(sum)){
            int currLen = j-m[sum];
            ans = max(ans,currLen);
        }else{
            m[sum] = j;
        }
    }

    return ans;
}

int main(){

    vector<int> arr = {15,-2,2,-8,1,7,10};

    cout<< largest0subArray(arr)<<endl;
    
    return 0;
}