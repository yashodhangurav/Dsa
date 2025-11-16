#include<iostream>
using namespace std;

void sayHello(){
    cout<<"Hello guys :)\n";
};

void assistent(){
    sayHello();
    cout<<"Work done!\n";
}

int main(){
    assistent();
    sayHello();     //function call
    return 0;
}