// using classes and object

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    
        Node(int val){
            data = val;
            next = NULL;            //at starting next will point to null
        }
        ~Node(){ 
            cout<<"~Node & The Data is : "<<data<<endl;                
            if(next != NULL){
                delete next;
                next = NULL;
            }
        }
};


class List{
    Node *head;
    Node *tail;
    public:
        List(){
            head = NULL;            //at staring head and tail are NULL
            tail = NULL;
        }

        ~List(){                    //destructor which deletes the head node when the object is destroyed
            cout<<"~List\n";   
            if(head != NULL){
               delete head;
               head = NULL; 
            }
        }

        void push_front(int val){
            Node *newNode = new Node(val);  //creating a node dynamically,  we can also create a static memory allocation but it will automatically deleted when the function ends so we use dynamic memory allocation

            if(head == NULL){
                head = tail = newNode;   //if list is empty both head and tail will point to newNode
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node *newNode = new Node(val);

            if(head == NULL){
                head = tail = NULL;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void printList(){
            Node *temp = head;
            
            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }

        // insert in LL middle
        void insert(int val , int pos){
            Node *newNode = new Node(val);

            Node *temp = head;
            for(int i =0; i<pos-1; i++){
                if(temp == NULL){
                    cout<<"possition is invalid!!";
                    return;
                }
                temp = temp->next;
            }
            // noew temp points to the left of the position where we want to insert
            newNode->next = temp->next;
            temp->next = newNode;
        }
};

int main(){

    List ll;          //object of class List
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // 3-->2-->1->NULL

    ll.push_back(4);
    ll.push_back(5);

    ll.insert(100, 2); //1->2->100->3->4->5->NULL

    ll.printList();

    return 0;
}