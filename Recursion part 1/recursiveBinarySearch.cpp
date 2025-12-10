// for binary search we should need a always sorted array

#include<iostream>
using namespace std;

void  binarySearch(int arr[], int start, int end, int key){
    if(start>end){
        return;
    }
    int mid = (start + end) / 2;

    if(arr[mid] == key){
        cout<<mid;
        return;
    }else if(arr[mid]>key){
        return binarySearch(arr, start, mid-1, key);
    }else {
        return binarySearch(arr, mid+1, end, key);
    }
}

int main(){

    int arr[] = {1,2,3,5,6,7,8,9};
    int key = 5;
    int n = sizeof(arr)/sizeof(int);

    binarySearch(arr, 0, n-1, key);
    return 0;
}