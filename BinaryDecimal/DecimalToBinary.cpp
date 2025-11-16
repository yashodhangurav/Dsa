#include<iostream>
using namespace std;

void decToBin(int decNum){
    int n = decNum;         //creating copy of Decimal number in n
    int binNum = 0;         //creating binNum varible to save final binary value
    int pow = 1;            //pow = 1 initial after that increased by multiplication of 10,             
    
    while(n>0){
        int rem = n%2;      //accessing remender
        binNum += rem * pow;    //adding the binNumber and remender and multiply by pow
        pow = pow*10;             //incrementing power value by X10
        n = n/2;            //upgrading n value by multiplying 2 will get 
    }
    cout<<"Binary number is "<<decNum<< " is "<<binNum<<endl;
}

int main(){
    decToBin(52);
    return 0;
}