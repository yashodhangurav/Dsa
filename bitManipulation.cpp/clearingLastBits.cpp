// WAF to clear a last i bits of a number

#include<iostream>
using namespace std;

int clearBits(int num, int i){
    num = num & (~0<<i);            //~0 containes all the bits 1's (it is a complemetory of 0)
    return num;
}

int main(){
    int num = 15;
    int i = 2;

    cout<<clearBits(num,i)<<endl;
    return 0;
}