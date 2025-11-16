#include<iostream>
using namespace std;

int main(){

    int arr[5]= {2,4,4,7,15};
    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    };

    cout<<"smallest value in the array is :"<<min<<endl;
    cout<<"largest value in array is : "<<max;
    return 0;
}