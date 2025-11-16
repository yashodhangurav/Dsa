#include<iostream>
using namespace std;


void product(int a, int b){
    cout<<a*b<<endl;
}

// factorial 
int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
} 

int main(){
    factorial(4);

    return 0;
}