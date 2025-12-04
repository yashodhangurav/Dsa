#include<iostream>
#include<vector>
using namespace std;



    void reverseArr(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    };


void leftRotate (vector<int> &nums, int n, int k){
    n = nums.size();
    k= k%n;
   

    // ---------------------------------------------------brute force
     // vector<int> temp;
    // for(int i = 0; i<k; i++){
    //     temp[i] = arr[i];
    // }

    // for(int i = k; i<n; i++){
    //     arr[i-k] = arr[i];
    // }
    // for(int i = n-k; i<n; i++){
    //     arr[i] = temp[i - (n-d)];
    // }


    // ----------------------------------------------------------------optimal approch

    int n = nums.size();
    k = k % n;       // very important!

    // Step 1
    reverseArr(nums, 0, n - 1);
    // Step 2
    reverseArr(nums, 0, k - 1);
    // Step 3
    reverseArr(nums, k, n - 1);


};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int d = 3;

    leftRotate(arr, arr.size() , 3);

    return 0;
}