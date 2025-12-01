#include<iostream>
using namespace std;

int setIthBit(int num, int i ){
    int bitMask = 1<<i;
    return num | bitMask;

}

// clear ith bit
int clearIthBit(int num, int i){
    int bitMask = ~(1<<i);          //getting the ith position and performing NOT on it
    return num & bitMask;
}

// isPower 
bool isPowerOf2(int num){
    if(!(num & (num-1))){
        return true;
    }else{
        return false;
    }
}

int main(){
  
    // cout<<setIthBit(8, 2)<<endl;
    // cout<<clearIthBit(6,1)<<endl;

    cout<<isPowerOf2(7)<<endl;
    cout<<isPowerOf2(16)<<endl;
    cout<<isPowerOf2(32)<<endl;
    cout<<isPowerOf2(17)<<endl;
    return 0;
}