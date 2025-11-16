#include<iostream>
using namespace std;

// with extra space

void reserveArr(int *arr, int n){
    for(int i=0; i<n; i++){
        arr[i];
        cout<<arr[i]<<" ";
    } 
};

int main(){
    int arr[5]= {5,4,7,6,1};
    const int n = sizeof(arr)/sizeof(int);    //length of an array

    int copyArr[n];     //creating one copy array 
    for(int i = 0; i<n; i++){
        int j = n-i-1;
        copyArr[i] = arr[j];        //assigning the forward copy array by backward original array
    }

    // saving the copyarr to original array
    for(int i =0; i<n; i++){
        arr[i] = copyArr[i];        
    }

    reserveArr(arr, n);

    return 0;
}