
#include<iostream>
using namespace std;

// abstract class
class Shape{

    public:
        virtual void draw() = 0;        //pure virtual function (we dont have any defination/logic)     
};

class Circle : public Shape{
    public:
        void draw(){                //redefined virtual function
            cout<<"Draw circle\n";
        }
};

class Square : public Shape{
    public:
        void draw(){
            cout<<"Draw square \n";
        }
};



int main(){
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    return 0;
}