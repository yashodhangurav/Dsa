#include<iostream>
using namespace std;


void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}

void insertionSort(int *arr, int n){

    for(int i=1; i<n; i++){         //unsorted part starts from the 1st index to till n-1
        int curr = arr[i];          //saving the curr element of the unsorted part
        int prev = i-1;             //saving previous index 

        while(prev>=0 && arr[prev] > curr){     //and running the while loop from the backwords till the 0th index AND arr[prev] should be greated than curr element
            swap(arr[prev], arr[prev+1]);      
            prev--;
        }
        arr[prev+1] = curr;
    }
    printArr(arr, n);
}

int main(){
    int arr[6]={5,7,1,2,6,8};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr, n);
    return 0;
}