//Qs: Check for Armstrong Number


#include<iostream>
using namespace std;

int main(){
    int n = 153;
    int num = n;
    int cubeSum = 0;

    while(num > 0){
        int lastDigit = num%10;             //accessing last digit
        cubeSum += lastDigit*lastDigit*lastDigit; //performing some operations on last digit
        num/=10;                        //decresing last digit
    }
    
    if(n == cubeSum){
        cout<<"amstrong Number";
    }else{
        cout<<"Not a Amstrong Number";
    }

    return 0;
};