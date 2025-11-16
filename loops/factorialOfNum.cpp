//Qs: Check for Armstrong Number


#include<iostream>
using namespace std;

int main(){
    int n = 154;
    int num = n;
    int cubeSum = 0;

    while(num > 0){
        int lastDigit = num%10;
        cubeSum += lastDigit*lastDigit*lastDigit;
        num/10;
    }
    if(n == cubeSum){
        cout<<"amstrong Number";
    }else{
        cout<<"Not a Amstrong Number";
    }

    return 0;
}