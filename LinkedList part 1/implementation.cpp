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

        int searchItr(int key){
            Node *temp = head;
            int idx = 0;
            while(temp != NULL){
                if(temp->data == key){
                    cout<<"Key found \n";
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            return -1;
        }

        // recursive search
      
        int helper(Node *h, int key){
            // base Case
            if(h->next == NULL){
                return -1;
            }

            if(h->data == key){
                return 0;
            }
            int idx = helper(h->next, key);
            if(idx == -1){
                return -1;
            }
            return idx +1;
        }


        int searchRec(int key){
            return helper(head, key);
        }

        // reverse LL

        void reverse(){
            Node *prev = NULL;
            Node *curr = head;
            Node *nextPtr;
            tail = head;                //updating tail to point to the old head which will be the new tail after reversing
            while(curr != NULL){
               nextPtr = curr->next;
               curr->next = prev;
            //updation
               prev = curr;
               curr = nextPtr; 
            }
            head = prev;  //updating head to point to the new first element
        }


        // find and Remove Nth Node from the end of LL( asked in AMAZON,  FLIPKART,  ADOBE interviews )
        int getSize(){
            Node *temp = head;
            int count = 0;
            while(temp != NULL){
                temp = temp->next;
                count++;
            }
            return count;
        }
        
        void removeNth(int n){                      //O(n) time complexity and O(1) space complexity
            int size = getSize();
            Node *prev = head;
            for(int i=1; i<(size-n); i++){
                prev = prev->next;
            }

            Node *toDel = prev->next;
            cout<<"Going to delete : "<<toDel->data<<endl;
            prev->next = prev->next->next;
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
    ll.push_back(200);

    ll.insert(100, 2); //1->2->100->3->4->5->NULL

    // ll.pop_front();
    // ll.pop_back();

    // cout<<ll.searchItr(200)<<endl;
    // cout<<ll.searchRec(100)<<endl;


    ll.printList();

    cout<<"\n After reversing the LL: \n";
    ll.reverse();
    ll.printList();

    ll.removeNth(4);
    ll.printList();

    return 0;
}