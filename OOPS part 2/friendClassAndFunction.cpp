#include<iostream>
using namespace std;

class A{
    string secret = "Secret Data";
    friend class B;                 //friend class (through friend function we can access the private data members of any class)
    friend void revealSecret(A &obj);   //friend function
};

class B{
    public:
        void display(A &obj){           //taking argument as a reference variable
            cout<<obj.secret<<endl;
        }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    A a1;
    B b1;

    // b1.display(a1);
    revealSecret(a1);
    return 0;
}