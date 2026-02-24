#include<iostream>
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

class List{

    public:
    Node *head;
    Node *tail;
    public:
        List(){
            head = NULL;            //at staring head and tail are NULL
            tail = NULL;
        }

        ~List(){                    //destructor which deletes the head node when the object is destroyed  
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

    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty! \n";
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;            //dynamically deallocate the occupied memory
    }

};

void printList(Node *head){
   Node *temp = head;
   while(temp != NULL){
    cout<<temp->data<<"-> ";
    temp = temp->next;
   } 
   cout<<"NULL\n";
}


// Floyd’s Cycle Detection Algorithm (Tortoise and Hare Algorithm)
bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;          //+1
        fast = fast->next->next;    //+2

        if(slow == fast){
            cout<<"cycle exists! \n";
            return true;
        }
    }

    cout<<"cycle doesn't exist! \n";
    return false;
};


// remove cycle from LL

void removeCycle(Node* head){
    // detect cycle
    Node* slow =  head;
    Node* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cout<<"Cycle is exist!\n";
            isCycle = true;
            break;
        }
    }

    if(!isCycle){
        cout<<"cycle doestn't exist! \n";
        return;
    }

    slow = head;
    if(slow == fast){                   //special case
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL; //remove cycle
    }else{                              //normal work
        Node* prev = fast;
        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;  //remove cycle
    }
}


int main(){
    List li;
    li.push_front(4);
    li.push_front(3);
    li.push_front(2);
    li.push_front(1);

    li.tail->next = li.head;  //creating a cycle

    removeCycle(li.head);
    printList(li.head);

    return 0;
}