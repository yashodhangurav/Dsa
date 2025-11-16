#include<iostream>
using namespace std;

int decToBin(int decNum){
    int n = decNum;
    int pow = 1;
    int binNum = 0;

    while(n>0){
        int rem = n%2;
        binNum += rem * pow;
        pow *= 10;
        n = n/2;
    }
    return binNum;
}

int main(){
    int x = 8;
    cout<<decToBin(x);

    return 0;
}