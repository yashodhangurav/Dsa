#include<iostream>
using namespace std;

int main(){

    int num = 1245;
    int sum = 0, lastDigit;

    while(num>0){
        lastDigit = num%10;
        cout<<lastDigit<<" ";
        if(lastDigit%2 != 0){
            sum+=lastDigit;
        }
        num /= 10;          
    }
    cout<<"sum of the Odd digits : "<<sum;
    return 0;
}