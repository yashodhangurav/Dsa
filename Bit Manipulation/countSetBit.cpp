// This question asked in Google Amazon 
// basically countSetBit means count count the number of the 1's present in the number

#include<iostream>
using namespace std;

int countSetBit(int num){
    int count = 0;
    while(num>0){
        int lastBit = num & 1;
        count += lastBit;
        num = num >> 1;
    }
    return count;
}
int main(){
    int num = 7;

    cout<<countSetBit(num);
}