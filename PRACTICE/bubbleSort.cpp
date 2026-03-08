#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void bubbleSort( int *arr, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[5] = {1,8,6,5,4};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    printArr(arr,n);

    return 0;
}