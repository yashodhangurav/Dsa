#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;      //storing the address of a in pointer ptr

    float pi = 3.14;
    float *ptr2 = &pi;

    // cout<<&pi<<"="<<ptr2<<endl;
    // cout<<&a<<"="<<ptr<<endl;     //&a gives the address of a 

    
    // dereferencing
    // cout<<&a<<" in this adress "<<*ptr<<" this value is stored"<<endl;

    // null pointer
    int *ptr3;
    cout<<ptr3<<endl;

    return 0;
}