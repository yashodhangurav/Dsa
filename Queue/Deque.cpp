#include<iostream>
#include<deque>
using namespace std;


int main(){

    deque<int> dq;

    dq.push_front(2);
    dq.push_front(1);
    dq.push_back(3);
    dq.push_back(4);

    cout<<"Elements in the deque: ";
    for(int i= 0; i<dq.size(); i++){
        cout<<dq.at(i)<<" ";
    }
    cout<<endl;
   
    dq.pop_front();
    dq.pop_back();

    cout<<"Elements in the deque: ";
    for(int i= 0; i<dq.size(); i++){
        cout<<dq.at(i)<<" ";
    }
    cout<<endl;

    cout<<"first element: "<<dq.front()<<endl;
    cout<<"last element: "<<dq.back()<<endl;
    return 0;
}