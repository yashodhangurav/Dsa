#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int arr[10]={5,4,1,2,5,7,8,9,5,1};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n);   //ascendig order

    sort(arr, arr+n, greater<int>());   //descending order

    printArr(arr, n);
    return 0;
}