// asked in Google and microsoft


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
    public:
    unordered_map<char,Node*> children;
    bool endOfWord;
    int freq;

    Node(){
        endOfWord = false;
    }
};

class Trie{
    Node* root;
    public:
        Trie(){
            root = new Node();
            root->freq = -1;
        }

        void insert(string key){        //O(L) (L is length of individual word)
            Node* temp = root;

            for(int i= 0; i<key.size(); i++){
                if(temp->children.count(key[i]) == 0){
                    temp->children[key[i]] = new Node();
                    temp->children[key[i]]->freq = 1;               //adding freq for add the chacaters 
                }else{
                    temp->children[key[i]]->freq++;
                }
                temp = temp->children[key[i]];
            }
            temp->endOfWord = true;
        }

        bool search(string key){
            Node* temp = root;
            for(int i = 0; i<key.size(); i++){
                if(temp->children.count(key[i])){
                    temp = temp->children[key[i]];
                }else{
                    return false;
                }
            }
           return temp->endOfWord;
        }

        string getPrefix(string key){       //O(L)
            Node* temp = root;
            string prefix = "";

            for(int i = 0; i<key.size(); i++){
                prefix += key[i];

                if(temp->children[key[i]]->freq == 1){
                    break;
                }
                temp = temp->children[key[i]];
            }
            return prefix;
        }
};



void prefixProblem(vector<string> dict){    //O(n*L)
    Trie trie;
    for(int i = 0; i<dict.size(); i++){
        trie.insert(dict[i]);
    }

    for(int i = 0; i<dict.size(); i++){
        cout<<trie.getPrefix(dict[i])<<endl;
    }
}


int main(){
    vector<string> dict = {"zebra", "dog", "dove", "duck"};
    prefixProblem(dict);
    return 0;
}