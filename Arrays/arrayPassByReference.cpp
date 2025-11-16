#include<iostream>
using namespace std;

// below both functions are same
// function
void func(int arr[], int n){
    for(int i = 0; i<n; i++){
       cout<<arr[i]<<",";
    }
}

int main(){

     int arr[5] = {5,7,6,5,5};   //array name is internallty treated as a pointer, which points to the first index of an array
     int n = sizeof(arr)/sizeof(int);
    
     /*
    cout<<arr<<endl;
    cout<<*arr<<endl;   //dereferencing, arr[0]
    cout<<*(arr+1)<<endl; //arr[1]  */

    // array pass by reference
   func(arr, n);                       //passing array to fucn function
    cout<<arr[0];
   return 0;
}