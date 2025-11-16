#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int m){
    for(int i =0; i<n; i++){
        if(arr[i]==m){
            return i;
        }
    }
    return -1;
};

int main(){

    int arr[11] = {5,4,2,5,7,10,9,1,2,10,0};
    int n = sizeof(arr)/ sizeof(int);

    cout<<linearSearch(arr, n, 2)<<endl;
    return 0;
}