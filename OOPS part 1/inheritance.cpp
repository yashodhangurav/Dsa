// // ---------------------------------single inheritance

// #include<iostream>
// using namespace std;


// class Animal{
//     public:
//         string color;
//         void eat(){
//             cout<<"Eats\n";
//         }

//         void breath(){
//             cout<<"Breaths\n";
//         }

// };

// class Fish : public Animal{
//     public:
//         string fins;
//         void swim(){
//             cout<<"Swims\n";
//         }
// };


// int main(){
//     Fish f1;

//     f1.eat();
//     f1.swim();
//     return 0;
// }



// ------------------------------------------multi-level inheritance

// #include<iostream>
// using namespace std;


// class Animal{
//     public:
//         string color;
//         void eat(){
//             cout<<"Eats\n";
//         }

//         void breath(){
//             cout<<"Breaths\n";
//         }

// };

// class Mamals : public Animal{
//     public:
//         string bloodType;
//         Mamals(){
//             bloodType = "warm";
//         }
// };

// class Dog : public Mamals{
//     public:
//         void tailWag(){
//             cout<<"Dog wags its tail\n";
//         }
// };


// int main(){
//     Dog d1;

//     d1.eat();
//     d1.tailWag();

//     cout<<d1.bloodType<<endl;
    
//     return 0;
// }



// ------------------------------------multiple 

#include<iostream>
using namespace std;


class Teacher{
    public:
        int salary;
        string subject;

};

class Student{
    public:
        int rollNo;
        float cgpa;
       
};

class TA : public Teacher, public Student{
    public:
        string name;
};


int main(){
   TA ta1;
   ta1.name = "yashodhan";
   ta1.subject = "C++";
   ta1.cgpa = 9.4;

   cout<< ta1.name<<endl;
    return 0;
}