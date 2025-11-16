#include<iostream>
using namespace std;

int main(){

    int a = 4;

    int *ptr = &a;

    cout<<ptr<<"\n";
    ptr++;

    cout<<ptr<<endl;
    cout<<(ptr+3)<<endl;
    
    return 0;
}