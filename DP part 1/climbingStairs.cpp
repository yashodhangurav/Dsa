#include<iostream>
#include<vector>
using namespace std;



int countWaysRec(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return countWaysRec(n-1) + countWaysRec(n-2);
}

int main(){

    int n = 5;

    cout<<countWaysRec(n)<<endl;
    
    return 0;
}