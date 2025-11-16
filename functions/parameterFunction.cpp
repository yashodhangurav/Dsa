#include<iostream>
using namespace std;

int sum(int a, int b){ //a and b are the parameters
    int sum = a+b;
    return sum;
}

int main(){
    int s = sum(5,2);   //5 and 2 are the arguments which we are passing to the function sum
    cout<<"sum : "<<s<<endl;
    return 0;
}