// getters and setters and generally use to set and get the private data of the class

#include<iostream>
using namespace std;

class Student{
    string name;
    float cgpa;

    public:

    void percentage(){
        cout<< cgpa*10<<"% \n";
    }
    
    // setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa  = cgpaVal;
    }
    
     // getters
     string getName(){
        return name;
    }
    float getCgpa(){
       return cgpa;
    }
};

int main(){

    Student s1;

    s1.setName("Yashodhan");
    s1.setCgpa(9.5);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;


    return 0;
}