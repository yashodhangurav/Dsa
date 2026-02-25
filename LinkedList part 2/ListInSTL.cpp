#include<iostream>
#include<list>
#include<iterator>
using namespace std;


void printList(list<int> ll){
    list<int>::iterator itr; // creating an iterator for the linked list (just like vector<int>::iterator it; for vector)

    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout<< (*itr) <<" -> ";
    }
    cout<<"NULL"<<endl;
}


int main(){

    list<int> ll; // creating a linked list (just like vector<int> v; for vector)

    ll.push_front(4);
    ll.push_front(3);   //3->4->

    ll.push_back(5);   //3->4->5->
    ll.push_back(6);   //3->4->5->6->

    printList(ll);

    cout<<"Size of the ll is : "<<ll.size()<<endl;
    cout<<"head : "<<ll.front()<<endl;
    cout<<"tail : "<<ll.back()<<endl;
    return 0;
}