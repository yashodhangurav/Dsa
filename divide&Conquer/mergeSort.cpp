#include<iostream>
#include<vector>
using namespace std;


void merge(int arr[], int si, int mid, int ei){         //merge 2 sorted arrays time complexity = O(n)
    vector<int> temp;                                   //temporary array

    int i = si;                                         //iterator for left part
    int j = mid+1;                                      //iterator for right part
    //merge 2 sorted arrays
    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        } else{
            temp.push_back(arr[j++]);
        }
    }

    // remaining elements of left part
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    // remaining elements of right part
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    // copying temp array to original array
    for(int i=si, x=0; i<=ei; i++){
        arr[i] = temp[x++];
    }

}


// divide and conquer
void  mergeSort(int arr[], int si, int ei){     // O(nlogn)

    if(si>=ei){         //base case
        return;
    }

    int mid = si + (ei-si)/2;

    mergeSort(arr, si, mid);             //left half
    mergeSort(arr, mid+1, ei);          //right half

    // conquer
    merge(arr, si, mid, ei);            //this  will merge 2 sorted arrays
}


// printing the arr
void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6] = {2,5,4,7,1,3};
    int n = 6;

    mergeSort(arr, 0, n-1);

    printArr(arr,n);

    return 0;
}