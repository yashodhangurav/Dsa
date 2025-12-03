
// function Overridding - run time polymorphism

#include<iostream>
using namespace std;

class Parent{

    public:
        void show(){
            cout<<"Parent class function \n";
        }

    // virtual function (its need to be redefined in the derived class without the virtual keyword)
        virtual void hello(){
            cout<<"Parent hello \n";
        }
};

class Child : public Parent{
    public:
        void show(){
            cout<<"Child class function \n";
        }

        // redefined virtual function
        void hello(){
            cout<<"Child hello \n";
        }
};

int main(){
    Child c1;
    Parent *ptr;            //creating pointer which points to the parent class object
    
    ptr = &c1;          //binding the child class obj to it (run time binding)

    ptr->hello();           //child virtual function
    return 0;
}


