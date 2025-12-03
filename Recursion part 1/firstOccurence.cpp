#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> nums, int target, int i){
    if(i == nums.size()){                         //Base Case
        return -1;                       //-1 is not valid index at 11th index it will return -1
    }

    if(nums[i] == target){
        cout<<"First occurance is on  "<<i<<endl;
        return i;
    }

    return firstOcc(nums, target, i+1);
}

// last Occurence
int lastOcc(vector<int> nums, int target, int i){
    if(i == nums.size()){
        return -1;
    }

    int idxFound = lastOcc(nums,target,i+1);        //here first we are checking for next positions 
    if(idxFound == -1 && nums[i] == target){        // then we are checking for ours position
        return i;
    }
    return idxFound;
}

int main(){
    vector<int> arr = {1,8,5,4,5,5,3,7,8,7,5};
    int target = 7;

    // firstOcc(arr, target, 0);
    cout<<lastOcc(arr, target, 0);

  

    return 0;
}