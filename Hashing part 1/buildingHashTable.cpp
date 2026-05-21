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

        return idx;
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
            Node* currNode = table[idx];

            newNode->next = head;
            head = newNode;

            currSize++;
        }

        void earase(string key){

        }


        void search(string key){

        }

};

int main(){


    return 0;
}