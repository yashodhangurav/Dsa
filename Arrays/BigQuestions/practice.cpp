#include<iostream>
using namespace std;

void printSubArray(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }
            cout<<currSum<<", ";
            maxSum = max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum sum of the subarray is : "<<maxSum<<" ";
}

int main(){

    int arr[5]= {1,2,-4,5,-6};
    int n = sizeof(arr)/sizeof(int);

    printSubArray(arr,n);

    return 0;
}