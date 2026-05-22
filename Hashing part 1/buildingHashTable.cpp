#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;

class Node{

    public:
     string key;
     int val;
     Node* next;

     Node(string key, int val){
        this->key = key;
        this->val = val;
        this->next = NULL;
     }

     ~Node() {
        if(next != NULL){
            delete next;
        }
     }
};


class HashTable{
    int totalSize;
    int currSize;
    Node** table;

    int hashFunc(string key){
        int idx = 0;

        for(int i = 0; i<key.size(); i++){
            idx = idx + (key[i]*key[i]) % totalSize;
        }

        return idx%totalSize;
    }

    void rehash(){
        Node** oldTable = table;
        int oldSize = totalSize;

        totalSize = 2*totalSize;                    //we will double the size of the table
        currSize = 0;                               //we will reset the current size to 0, because we will rehash all the elements in the new table
        table = new Node*[totalSize];               //we will create a new table with the new size

        for(int i = 0; i<totalSize; i++){       //initially all the buckets will be empty, so we will assign NULL to all the buckets
            table[i] = NULL;
        }

        // we will rehash all the elements from the old table to the new table
        for(int i = 0; i<oldSize; i++){
            Node* head = oldTable[i];

            while(head != NULL){
                insert(head->key, head->val);     //we will insert the elements in the new table using the insert function
                head = head->next;
            }

            if(oldTable[i] != NULL){
                delete oldTable[i];               //we will delete the old table after rehashing
            }
        }
        delete[] oldTable;                      //we will delete the old table after rehashing
    }

    public:

        HashTable(int size){
            totalSize = size;
            currSize = 0;

            table = new Node*[totalSize];

            for(int i = 0; i<totalSize; i++){               //initially all the buckets will be empty, so we will assign NULL to all the buckets
                table[i] = NULL;
            }
        }


        void insert(string key, int val){
            int idx = hashFunc(key);

            Node* newNode = new Node(key, val);

            newNode->next = table[idx];
            table[idx] = newNode;

            currSize++;

            double lambda = (double)currSize/totalSize;
            if(lambda > 1){
                rehash();               //O(n)
            }
        }

        bool exist(string key){
            int idx = hashFunc(key);

            Node* temp = table[idx];            //head of the linked list at the index idx
            while(temp != NULL){
                if(temp->key == key){           //FOUND
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }

        int search(string key){
            int idx = hashFunc(key);

            Node* temp = table[idx];            //head of the linked list at the index idx
            while(temp != NULL){
                if(temp->key == key){           //FOUND
                    return temp->val;
                }
                temp = temp->next;
            }
            return -1;                          //NOT FOUND
        }

        void earase(string key){
            int idx = hashFunc(key);

            Node* temp = table[idx];
            Node* prev = temp;

            while(temp != NULL){
                if(temp->key == key){
                    if(prev == temp){
                        table[idx] = temp->next;
                    }else{
                        prev->next = temp->next;
                    }
                    break;
                }
                prev = temp;
                temp = temp->next;
            }
        }

        void print(){

            for(int i = 0; i<totalSize; i++){
                cout<<"Bucket "<<i<<" -> ";
                Node* temp = table[i];          //head
                
                while(temp != NULL){
                    cout<<temp->key<<" "<<temp->val<<" -> ";
                    temp = temp->next;
                }
                cout<<endl;
            }
        }

};

int main(){

    HashTable   h(5);
    h.insert("Mango", 100);
    h.insert("Apple", 120);
    h.insert("Banana", 60);
    h.insert("Grapes", 70);
    h.insert("Pineapple", 150);


    h.print();
    h.earase("Mango");
    h.print();

    return 0;
}