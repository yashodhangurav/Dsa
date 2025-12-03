// having the same name but different in parameter count or type called function overloading ,

// function overloading compile time polymorphism

#include<iostream>
using namespace std;


class Print{
    int n;
    public:
        void show(int n){
            this->n = n;
            cout<<"The number is : "<<n<<endl;
        }
        void show(string str){
            cout<<"The name is : "<<str<<endl;
        }
};

class Complex{
    int real;
    int img;

    public:
        Complex(int r, int i){
            real = r;
            img = i;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }

        // operator overload
        Complex operator +(Complex &c2){           //this function taking c2 by reference   
            int resReal = this->real + c2.real;     //here this means c1
            int resImg = this->img + c2.img;

            Complex c3(resReal, resImg);        //creating a new object as a resultent of addition of two objects
            return c3;
        }
};

int main(){
    // Print obj1;
    // obj1.show(25);
    // obj1.show("Yashodhan");

    Complex c1(1,4);
    Complex c2(3,4);

    c1.display();
    c2.display();

    Complex c3 = c1+c2;
    c3.display();

    return 0;
}