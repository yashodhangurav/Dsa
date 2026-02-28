#include<iostream>
#include<list>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        prev = next = NULL;
    }
};

class DoublyList{
    public:
        Node* head;
        Node* tail;
        DoublyList(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);      //creating new node

            if(head == NULL){                   //if the list is empty, then head and tail will point to the new node
                head = tail = newNode;
            }else{                              
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }

        void pop_front(){                                   //pop_front()
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }else{
                Node* temp = head;
                head = head->next;
                head->prev = NULL;
                temp->next = NULL;
                    delete temp;
            }
        }

        void push_back(int val){
            Node*  newNode = new Node(val);     //creating new node

            if(head == NULL){                   //if the list is empty, then head and tail will point to the new node
                head = tail = newNode;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }

        void pop_back(){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }else{
                Node* temp = tail;
                tail = tail->prev;
                tail->next = NULL;
                temp->prev = NULL;
                delete temp;
            }
        }

        void printList(){
            Node* temp = head;
            while(temp!= NULL){
                cout<<temp->data<<"-> ";
                temp = temp->next;
            }
        }
};


int main(){
    DoublyList dbll;

    dbll.push_front(10);
    dbll.push_front(4);
    dbll.push_front(1);
    dbll.push_front(8);

    dbll.pop_front();
    dbll.pop_back();
    dbll.push_back(11);

    dbll.printList();

    return 0;
}