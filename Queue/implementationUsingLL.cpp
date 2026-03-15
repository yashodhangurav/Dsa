#include<iostream>
#include<list>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Queue{
    Node* head;
    Node* tail;
    public:
        Queue(){
            head = tail = NULL;
        }

        void push(int data){                    //queue push() means LL push_back()
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop(){                     //Queue pop() measn LL pop_front()
            if(head == NULL){
                cout<<"Queue is Empty";
                return;
            }else{
                Node* temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;
            }
        }

        int front(){
            if(empty()){
                cout<<"Queue is empty!";
                return -1;
            }
            return head->data;
        }

        bool empty(){
            return head == NULL;
        }
};

int main(){

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}