#include<iostream>
using namespace std;

int main(){
    int n = 4;
    

    for(int i = 1; i <= n; i++){ //number of the rows

        for(int j = 1; j<=(n-i+1); j++){ //we should run our inner loop to the total number of i
            cout<<"*"<<" ";
        }
 
        cout<<endl; //this is for the next line after one row 
    }

    return 0;
}