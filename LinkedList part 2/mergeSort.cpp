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

    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){
        while(head != NULL){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push_front(int val){
        Node *newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
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
        delete temp;
    }

    void push_back(int val){
        Node *newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;   
        }else{
            tail->next = newNode;
            tail = newNode;
        }
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



// merging two sorted linked lists
Node* merge(Node* left, Node* right){
    List ans;

    Node* i = left;
    Node* j = right;

    while(i != NULL && j != NULL){
        if(i->data <= j->data){
            ans.push_back(i->data);
            i = i->next;
        }else{
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while(i != NULL){
        ans.push_back(i->data);
        i = i->next;
    }

    while(j != NULL){
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;
}



//FIXED return type
Node* mergeSort(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* rightHead = splitAtMid(head);

    Node* left  = mergeSort(head);
    Node* right = mergeSort(rightHead);

    return merge(left, right);   //RETURN
}


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
    ll.push_back(5);
    ll.push_back(2);
    ll.push_back(9);
    ll.push_back(1);
    ll.push_back(3);

    ll;printList(ll.head);

    ll.head = mergeSort(ll.head);
    ll;printList(ll.head);
    
    return 0;
}