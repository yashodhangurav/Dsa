#include<iostream>
using namespace std;


void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
};

void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){           //compare the each index with min
        int minIdx = i;
        for(int j=i+1; j<n; j++){       //this loop find the min
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    printArr(arr, n);
}

int main(){
    int arr[11]={1,7,6,7,1,4,2,8,4,6,2};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr, n);
    return 0;
}