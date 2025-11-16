#include<iostream>
using namespace std;

void binToDec(int binNum){
    int n = binNum;         //copy the binNum in n
    int decNum = 0;         //creating decNum to final decimal Number
    int pow = 1;            //pow is created to multiply power for each digit (2^0, 2^1, 2^2....), first 2^0 is equal to 1 thats why we are took initial value of pow is 1, and after we will upgrade that by multiplying 2

    while(n>0){
        int lastDigit = n%10;   //accessing the last digit
        decNum += lastDigit*pow;
        pow = pow * 2;            //increamenting the the power 
        n = n/10;       //deleting the last digit
    }

    cout<<decNum<<endl;
}

int main(){
    binToDec(11100);
    return 0;
}