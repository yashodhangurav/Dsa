// print the Nth fibonacci number

#include<iostream>
using namespace std;

int finobacciNum(int n){
    
    if( n == 1 || n == 0){
        return n;
    }
   
    return finobacciNum(n-1)+finobacciNum(n-2);     //after the calling from the main function first fibonnacci(n-1) call store in the stack till the Base case hit and return the values from it  then stack become empty and perform  fibonacci(n-2)  will executes till base case hit and return values then add the both calls
}

int main(){
    cout<<finobacciNum(6);
    return 0;
}