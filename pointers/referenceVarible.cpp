#include<iostream>
using namespace std;

// pass by reference using reference varible(&)

void changeA(int &a){
    a = 45;

}

int main(){
    int a =5;
    int &b = a;         //creating a reference variable (storing name memory location)

    b = 25;
    changeA(b);

    cout<<a<<"\n";

    return 0;
}