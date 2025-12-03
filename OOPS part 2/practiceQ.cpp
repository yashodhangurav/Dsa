#include<iostream>
using namespace std;


class Base{
    public:
        virtual void print(){
            cout<<"Base class";
        }
};

class Derived : public Base{
    public:
        void print(){
            cout<<"Derived class\n";
        }
};

int main(){
    Base *ptr = new Derived();  //created a pointer of Base class points to the new memory of Derived class 
    ptr->print();
    delete ptr;                 //deallocation of the memory

    return 0;
}