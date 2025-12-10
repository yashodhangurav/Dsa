#include<iostream>
using namespace std;

void  findOcurences(int arr[], int n, int key, int i){

    if(i == n-1){
        return;
    }

    if(arr[i] == key){
       cout<<i<<" ";
    }

    return  findOcurences(arr, n, key, i+1);


}


int main(){
    int arr[] = {1,2,3,4,2,5,2,6};
    int key = 2;

    int n = sizeof(arr)/sizeof(int);

    findOcurences(arr,n,key, 0);

    return 0;
}