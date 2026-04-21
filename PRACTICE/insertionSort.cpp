#include<iostream>
using namespace std;


void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}

void insertionSort(int *arr, int n){        //Time complexity: O(n^2) and space complexity: O(1)

    for(int i = 1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }
    printArr(arr, n);
}

int main(){
    int arr[7]={5,7,1,2,6,8,2};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr, n);
    return 0;
}



// -------------------------------------------