#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;


class Student{                                  //"<" operator overloading for the Student class
    public:
        string name;
        int marks;

        Student(string name, int marks){
            this->name = name;
            this->marks = marks;
        }

        bool operator < (const Student &obj)const{
            return this->name < obj.name;         // for max heap, we want the student with higher marks to be at the top
        }
};


int main(){
    priority_queue<Student> pq;

    pq.push(Student("Alice", 85));
    pq.push(Student("Bob", 90));
    pq.push(Student("Charlie", 80));

    while(!pq.empty()){
        cout<<"Top : "<<pq.top().name<<", "<<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}