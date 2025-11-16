#include<iostream>
using namespace std;

int main(){

    int n =10;



    for(int i= 1; i<=n; i++){

        // --------------------------------------------first upper pyramid
        // first stars
        for(int j =1; j<=i; j++){
            cout<<"*";
        }
        // spaces
        for(int j= 1; j<= 2*(n-i); j++){
            cout<<" ";
        }

        // second stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
    
    //------------------------------------- last lower pyramid
    for(int i=1; i<=n; i++){
        // first star
        for(int j =1; j<=n-i+1; j++){
            cout<<"*";
        }

        // spaces
        for(int j =1; j<=2*i-2; j++){
            cout<<" ";
        }

        // last star
        for(int j =1; j<=n-i+1; j++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}