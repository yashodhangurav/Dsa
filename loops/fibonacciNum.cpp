//Qs:Print N Fibonacci Numbers

#include<iostream>
using namespace std;

int main(){

    int n = 10;

    int first = 0, second = 1;

    for( int i = 2; i< 10; i++){
        int third = first + second;

        cout<<third<<" ";
        first = second;
        second = third;
    }

    cout<<"\n";


    return 0;
}