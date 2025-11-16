#include<iostream>
using namespace std;

// without extra space (2 pointer approach)

void printArr(int *arr, int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
};

int main(){

    int arr[5] = {4,6,7,5,2};
    int n = sizeof(arr)/sizeof(int);
    int st = 0;
    int end = n-1;

   
    while(st<end){
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }

    printArr(arr, n);
    return 0;
}