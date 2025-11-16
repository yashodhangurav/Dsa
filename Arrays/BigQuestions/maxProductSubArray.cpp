#include<iostream>
using namespace std;

void  maxSubArrPro(int *nums, int n){
    int currProduct = 1;
    int maxProduct = 1;
    for(int start=0; start<n; start++){
        currProduct *= nums[start];
        maxProduct = max(maxProduct, currProduct);
        if(nums[start]<0){
            currProduct = 1;
        }
    }
    cout<<"Maximum subArray Product is : "<<maxProduct<<endl;
}

int main(){
    int nums[5]={0,-2,0,6,-2};
    int n = sizeof(nums)/sizeof(int);

    maxSubArrPro(nums, n);

    return 0;
}