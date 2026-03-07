#include<iostream>
#include<stack>
using namespace std;


void pushAtBottom(stack<int> &s, int data){


    if(s.empty()){                              //base condition
        s.push(data);
        return;
    }

    int top = s.top();
    s.pop();
    pushAtBottom(s, data);
    s.push(top);
}

void reverseStack( stack<int> &s){

    if(s.empty()){                      //base condition
        return;
    }

    int temp = s.top();
    s.pop();
    reverseStack(s);                       //  recursive call to reverse the remaining stack O(n) time complexity

    pushAtBottom(s, temp);              //backtracking O(n) time complexity

};

void printStack(stack<int> s){

    while(!s.empty()){
        cout<<s.top()<<",  ";
        s.pop();
    }
}


int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

printStack(s);

    reverseStack(s);
cout<<endl;

printStack(s);

    return 0;
}