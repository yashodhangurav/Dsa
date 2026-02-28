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

        void pop_back(){
            Node *temp = head;
            while(temp->next->next != NULL){          //OR    while(temp->next != tail)
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
};


Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL){
        prev->next = NULL;
    }

    return slow;   // right half head
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;   // new head of the reversed list
}


void zigzagLL(Node* head){
    Node* rightHead = splitAtMid(head);
    Node* rightHeadRev = reverse(rightHead);            //reverse the second half

    // alternative Murging : 1st head = head and 2nd head = rightHeadRev
    Node* left= head;
    Node* right = rightHeadRev;
    Node* tail = right;

    while(left != NULL && right != NULL){
        Node* nextLeft = left->next;
        Node* nextRight = right->next;

        left->next = right;
        right->next = nextLeft;

        tail = right;  // update tail to the last node added

        left = nextLeft;
        right = nextRight;
    }

    if(right != NULL){
        tail->next = right;  // attach remaining nodes of right half if any
    }

    return head;
}



// to prin ll
void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
};

int main(){

    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    printList(ll.head);

    ll.head = zigzagLL(head);

    printList(ll.head);
    return 0;
}