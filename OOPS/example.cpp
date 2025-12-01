#include<iostream>
using namespace std;

class Student{

    public:
    // properties
    string name;
    float cgpa;

    void percentage(){
        cout<< cgpa*10<<"% \n";
    }
    
};

int main(){

    Student s1;             //object (after the declaration memory allocate in the memory for this obj )
    
    s1.name = "yashodhan";

    cout<<sizeof(s1)<<endl;
    cout<<s1.name<<endl;
    s1.cgpa = 9.4;

    s1.percentage();

    return 0;
}