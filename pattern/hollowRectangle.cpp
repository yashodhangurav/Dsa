#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 1; i<=n; i++){
        cout<<"*";                                                              //first star 
        
        // work
        for(int j = 1; j<=(n-1); j++){   //we want to print 3 stars(means n-1) in 1st row and last row
            if(i==1 || i==n){           //here i is row number
                cout<<"*";
            }else{
                cout<<" ";                                                      //2nd and 3rd row 
            }
        }


        cout<<"*"<<endl;                                                       //last star
    }

    // ---------------------------------method-2-------------------------
    // int r = 10;
    // int c = 15;

    // for(int i=1; i<=r; i++){
    //     for(int j=1; j<=c; j++){
    //         if(i==1 || i==r || j==1 || j==c){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    return 0;
}