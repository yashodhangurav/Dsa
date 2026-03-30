#include<iostream>
#include<deque>
using namespace std;

class Queue{
    deque<int> q;

    public:
        void push(int x){
            q.push_back(x);
        }
        void pop(int x){
            if(q.empty()){
                cout<<"Queue is empty"<<endl;
                return;
            }else{
                q.pop_front();
            }
        }
        int front(){
            if(q.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }else{
                return q.front();
            }
        }
        int back(){
            if(q.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }else{
                return q.back();
            }
        }
        bool empty(){
            return q.empty();
        }

};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl; // 1
    cout<<q.back()<<endl; // 3
    q.pop(1);
    cout<<q.front()<<endl; // 2
    

    return 0;
}