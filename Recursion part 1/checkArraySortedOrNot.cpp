#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i){
    if(i == n-1){                               //Base Case
        cout<<"array is sorted!!\n";        
        return true;
    }

    if(arr[i]>arr[i+1]){
        cout<<"array is not sorted\n";
        return false;
    }

    return isSorted(arr, n, i+1);
}

int main(){
    int arr[3] = {1,8,5};
    int n = sizeof(arr)/sizeof(int);

    isSorted(arr, n, 0);

    return 0;
}