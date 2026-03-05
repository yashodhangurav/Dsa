// stack implementation using class template

#include<iostream>
#include<vector>
using namespace std;

template<class T>

class Stack{
    vector<T> vec;

    public:
        void push(T val){                      //O(n)
            vec.push_back(val);
        }

        void pop(){                               //O(n)
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return;
            }              
            vec.pop_back();
        }

        T top(){
            int lastIdx = vec.size() - 1;
            return vec[lastIdx]; 
        }

        bool isEmpty(){
            return vec.size() == 0;
        }
};


int main(){

    Stack<int> s; //stack of integers

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    Stack<string> s2; //stack of strings

    s2.push("hello");
    s2.push("World");

    while(!s2.isEmpty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }
    
    return 0;
}