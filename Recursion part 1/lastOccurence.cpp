#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> nums, int target, int i){
    if(i == -1){                         //Base Case
        return -1;                       //-1 is not valid index
    }

    if(nums[i] == target){
        cout<<"First occurance is on  "<<i<<endl;
        return i;
    }

    return firstOcc(nums, target, i-1);
}

int main(){
    vector<int> arr = {1,8,5,4,5,5,3,7,8,7,5};
    int target = 5;

    firstOcc(arr, target, arr.size()-1);

    return 0;
} 