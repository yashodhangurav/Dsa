#include<iostream>
#include<vector>
using namespace std;

void heapify(int i, vector<int> &arr, int n){

    int left = 2*i + 1;
    int right = 2*i + 2;
    int maxi = i;

    if(left < n && arr[left] > arr[maxi]){
        maxi = left;
    }
    if(right < n && arr[right] > arr[maxi]){
        maxi = right;
    }

    if(maxi != i){                                        //if maxi is not the current node then we need to swap and heapify the affected subtree
        swap(arr[i], arr[maxi]);
        heapify(maxi, arr, n);
    }
};

void heapSort(vector<int> &arr){
    int n = arr.size();
    // step1: build the max heap
    for(int i = n/2-1; i>=0; i--){
        heapify(i, arr, n);
    }

    // step2: swap the first element with the last element and heapify the affected subtree
    for(int i = n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}


int main(){
    vector<int> arr = {5, 2, 9, 1, 7, 6};

    heapSort(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}