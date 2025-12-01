#include<iostream>
using namespace std;

class Car{

    string name;        //this is refer for our current obj
    string colour;

    public:
    // non-parameterized constructor (default)
        Car( ){     
        cout<<"Constructor is called when the obj is created \n";
        }
    // parameterized construtor
        Car( string name, string colour){     //these names refers to arguments
            cout<<"Constructor is called when the obj is created \n";

            this->name = name;          // (this->name) also be written as (*this.name = name)    (*this means current object that have created)
            this->colour  = colour;     // this->name is equals to currObj.name
        }
    // 

    void start(){
        cout<<"Car has started";
    }
    void stop(){
        cout<<"Car has stoped!";
    }

    // getter
    string getName(){
        return name;
    }
    string getColour(){
        return colour;
    }
};

int main(){
    Car c0;                         //default contsrutor
    Car c1("Maruti 800", "black");  //parameterized constructor
    cout<<"name os the car :"<<c1.getName()<<endl;
   
    return 0;
}