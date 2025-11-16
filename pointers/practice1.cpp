#include<iostream>
using namespace std;



int main(){
    int x = 5 , y = 10;

    int *ptr = &x, *ptr2 = &y;

    cout<<ptr<<" != "<<ptr2<<"\n";

    ptr = ptr2;

    cout<<ptr<<" === "<<ptr2;
    return 0;
}