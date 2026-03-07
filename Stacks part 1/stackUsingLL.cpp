#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<stack>
using namespace std;

// create stack using linked list
template<class T>

class Node{
    public:
        T data;
        Node<T>* next;
   
        Node(T val){
            data = val;
            next = NULL;
        }
};

template <class T>
class Stack{
    Node<T>* head;
    
    public:
        Stack(){
            head = NULL;
        }
        void push(T val){
            // push front
            Node<T>* newNode = new Node<T>(val);
            if(head == NULL){
                head = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void pop(){
            // pop front
            Node<T>* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }

        T top(){
            return head->data;
        }

        bool isEmpty(){
            return head == 0;
        }

};

int main(){
    Stack<int> s;
    
    //using STL stack
    stack<int> stlStack;

    stlStack.push(10);
    stlStack.push(20);
    stlStack.push(30);

    while(!stlStack.empty()){
        cout<<stlStack.top()<<", ";
        stlStack.pop();
    }

    cout<<endl;

    //using our custom stack
    s.push(1);
    s.push(2);
    s.push(3);
    
    while(!s.isEmpty()){
        cout<<s.top()<<", ";
        s.pop();
    }

    return 0;
}