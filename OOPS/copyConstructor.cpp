#include<iostream>
using namespace std;

class Car{

    public:
        string name;
        string color;
        int *mileage;

        Car(string name, string color){
            this->name = name;
            this->color = color;
            mileage = new int;      //dynamic Allocation (created in heap memory)
            *mileage = 45;
        }

        // creating our own custome copy constuctor
        Car(Car &original){                 //creating and taking the reference of an obj  (shallo copy)          
            cout<<"Copying...\n";
            name = original.name;
            color = original.color;
            // dynamic allocation copying process (created a copy of mileage in heap itself and making Deep copy)
            mileage = new int;
            *mileage = *original.mileage;
        }

};

int main(){
    Car c1("maruti 800", "white");
    Car c2(c1);                     //c++ automatically create one copy constructor and it will copy the c1 properties into c2

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;

    *c2.mileage = 10;                   //any change in copy ptr alsoapears in the original ptr, coz it points to same heap location
    cout<<"c1 mileage: "<<*c1.mileage<<endl;
    cout<<"c2 mileage is : "<<*c2.mileage<<endl;


    return 0;
}