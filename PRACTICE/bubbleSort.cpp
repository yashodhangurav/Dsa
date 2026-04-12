#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void bubbleSort( int *arr, int n){
   for(int i = 0; i<n-1; i++){          //number of iterations
    for(int j = 0; j<n-i-1; j++){       //traverse the array
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
   }
}


int main(){
    int arr[7] = {1,8,6,5,4,3,2};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    printArr(arr,n);

    return 0;
}

// 