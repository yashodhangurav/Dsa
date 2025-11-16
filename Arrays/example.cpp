#include<iostream>
#include <vector>
using namespace std;


int main(){
    // int marks[50];      //initializing array
    // cout<<sizeof(marks) / sizeof(int)<<endl;

    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    
    vector<int> marks(n);
    
    // taking input values in array
    for(int i = 0; i<n; i++){
        cin>>marks[i];
    }

    // out values of array
    for(int i = 0; i<n; i++ ){
        cout<<marks[i]<<",";
    }
    
    return 0;
}