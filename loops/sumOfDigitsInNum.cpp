#include<iostream>
using namespace std;

int main(){
    int n = 2544;
    int sum = 0;
    int lastDigit;

    while(n>0){
        lastDigit = n%10;       // accesing last digit and stored in lastDigit varible
        cout<<lastDigit<<" ";
        sum+=lastDigit;        // adding sum and last digits in sum variable
        
        n = n/10;           //deleting the last number
    }
    cout<<"sum: "<<sum;
    return 0;
}