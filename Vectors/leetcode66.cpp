#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& nums) {
    for(int i = nums.size()-1; i>=0; i--){
        if(nums[i] == 9){
            nums[i] = 0;
        }
        else {
            nums[i]++; 
            break;
        } 
    }

    if(nums[0]==0){
        vector<int> res(nums.size()+1, 0);
        res[0] = 1;
        return res;
    }

    return nums;
}

int main(){

    vector<int> nums = {1,2,4,4,5,6,7};
    vector<int> ans = plusOne(nums);

    

    return 0;
}