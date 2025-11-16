#include<iostream>
using namespace std;

int main(){
    int num = 7;
    bool isPrime = true; //we are initially considering the all are prime numbers


    for(int i = 2; i <= num-1; i++){

        if(num % i == 0){ //we are checking is num have factors or not , if have then isPrime becomes false
            isPrime = false;
            break;
        }
    }
        if(isPrime){ //here we are checking the isPrime true or false according to that we are passing the cout msgs
            cout<<"Number is prime!\n";
        }else{
            cout<<"Number is Not prime\n";
        }
    return 0;
}