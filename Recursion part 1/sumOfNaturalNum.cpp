#include<iostream>
using namespace std;

int sumOfNum(int n){
    if(n == 1){
        return 1;
    }
    return n + sumOfNum(n-1);       //at sumOfNum(1) returns the 1 from above and it will added
}



int main(){
   int ans = sumOfNum(5);

    cout<<ans<<" ";
    return 0;
}