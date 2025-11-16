#include<iostream>
using namespace std;

int main(){

        int r , c;
        cout<<"Enter the number of the rows: \n";
        cin>>r;
        cout<<"Enter the number of the columns: \n";
        cin>>c;

    for(int i = 1; i <= r; i++){            //number of rows 
        int val = i;

        for(int j = 1; j <= c; j++){        //number of columns
            // work
            cout<<val<<" ";
        }

        cout<<endl;                         //next line after one row
    }

    return 0;
}