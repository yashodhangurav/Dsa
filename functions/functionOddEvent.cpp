#include<iostream>
using namespace std;

int oddEven(int a){
    if( a%2 == 0){
        cout<<"Even number! \n";
    } else if (a == 0){
        cout<<"Zero ! \n";
    }else{
        cout<<"Odd number ! \n";
    }
    return a;
}

int main(){
    oddEven(0);
    return 0;
}