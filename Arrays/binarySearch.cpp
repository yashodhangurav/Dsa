#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int st = 0, end = n-1;
    
    while(st<=end){
        int mid = (st+end)/2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]<key){
            // second half
            st = mid + 1;
        }else{
            // first half
            end = mid-1;
        }
    }
    return -1;
}

int main(){

    int arr[10] = {2,5,6,8,9,10,13,15,17,19};
    int n = sizeof(arr)/sizeof(int);
   
    cout<<binarySearch(arr, n, 17)<<endl;
    
    return 0;
}