#include<iostream>
using namespace std;

int reverse(int x){
    long long rev = 0;
    while(x!=0){                //here we need to check for the negative numbers also thats why we are nott taking it n>0
        int lastDig = x%10;
        rev = rev*10 + lastDig;
        x /= 10;

        // check for overflow condition 
        if(rev<INT_MIN || rev> INT_MAX){
            return 0;
        }
    }
    return rev;
}

int main(){
    long long x = 120;
    cout<<reverse(x);

    return 0;
}