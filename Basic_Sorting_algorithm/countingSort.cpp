#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}
void countingSort(int arr[], int n){
    int freq[100000] = {0};   //range
    int minVal = INT_MAX, maxVal = INT_MIN;
    // 1st step - O(n)
    for(int i=0; i<n; i++){     //first loop is for to find range , 
        freq[arr[i]]++;         //this loop assign the value of main arr to index of freq arr
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd step - O(range)
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArr(arr, n);
}

int main(){
    int arr[6]={4,1,2,7,3,5};
    int n = sizeof(arr)/sizeof(int);

    countingSort(arr, n);
    return 0;
}