#include<iostream>
using namespace std;

void eventOdd(int n){

    if (!(n & 1)){
        cout<<"Even number";
    }else{
        cout<<"Odd number";
    }
}

int main(){
    eventOdd(5);
  
    return 0;
}