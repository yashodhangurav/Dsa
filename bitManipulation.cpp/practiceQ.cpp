// WAF to update the ith bit in the number according to give value(0 or 1)

#include<iostream>
using namespace std;

int updateValue(int num , int i, int val){
    num = num & ~(1<<2);        //clear Ith Bit 
    num = num | (val<<i);       //updating the Ith bit (as per given val)
    return num;
}

int updateValue2(int num, int i, int val){
    num = num & ~(i<<i);
    num = num | val<<i;
    return num;
}

int main(){
    cout<<updateValue(7,2,0)<<endl;         //this means 2nd bit of the 7 make it as a value  0
    cout<<updateValue2(7,3,1)<<endl;

    return 0;
}