#include<iostream>
using namespace std;

int isDuplicate(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int arr[5]={1,4,2,5,0};
    int n = sizeof(arr)/sizeof(int);

    if(isDuplicate(arr, n)){
        cout<<"true";
    }else{
        cout<<"false";
    };

    return 0;
}