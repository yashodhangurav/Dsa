#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> vec;

    public:
        void push(int val){                      //O(n)
            vec.push_back(val);
        }

        void pop(){                               //O(n)
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return;
            }              
            vec.pop_back();
        }

        int top(){
            int lastIdx = vec.size() - 1;
            return vec[lastIdx]; 
        }

        bool isEmpty(){
            return vec.size() == 0;
        }
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}