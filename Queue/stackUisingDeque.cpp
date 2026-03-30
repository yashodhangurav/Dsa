#include<iostream>
#include<deque>
using namespace std;

class Stack{
    deque<int> dq;
    public:
        void push(int x){
            dq.push_front(x);
        }

        void pop(){
            if(dq.empty()){
                cout<<"stack is empty"<<endl;
            }else{
                dq.pop_front();
            }
        }

        void top(){
            if(dq.empty()){
                cout<<"stack is empty"<<endl;
            }else{
                cout<<dq.front();
            }
        }

        int size(){
            return dq.size();
        }

        bool empty(){
            return dq.empty();
        }
};

int main(){
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        s.top();
        s.pop();
        cout<<", ";
    }

    return 0;
}