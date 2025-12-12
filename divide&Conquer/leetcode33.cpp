// searchInRotatedSortedArray
// here we are getting the index of target element in rotated sorted array

#include<iostream>
using namespace std;

int search(int arr[], int si, int ei, int tar){
    // Base case
    if(si>ei){                      //we are not taking here = because when si==ei we have to check that element
        return -1;
    }



    int mid = si +(ei-si)/2;

    if(arr[mid] == tar){
        return mid;
    }

    if(arr[si] <= arr[mid]){    //line 1
        // left half
        if(arr[si] <= tar && tar <= arr[mid]){
            return search(arr, si, mid-1, tar);
        }
        // right half
        else{
            return search(arr, mid+1, ei, tar);
        }
    }else{                      //line 2

        if(arr[mid]<= tar && tar<= arr[ei]){
            return search(arr, si, mid-1, tar);         //left half
        }else{
            return search(arr, mid+1, ei, tar);         //right half
        }
    }
}


int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int n = 7;

    cout<<"idx value is :  "<<search(arr, 0, n-1, 0);

    return 0;
}