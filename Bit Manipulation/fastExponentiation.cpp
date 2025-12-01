#include<iostream>
using namespace std;

int fastExpo(int x , int p){
    int ans = 1;

    while(p>0){
        int lastBit = p & 1;
        if(lastBit){            //if lastBit is = 1 then only we will multiple ans with x
            ans *= x;
        }
        x = x * x;              
        p = p >> 1;             //shufting the bits of the pow to get everytime last bit
    }
    return ans;
}

int main(){
    cout<<fastExpo(3,5);
    return 0;
}