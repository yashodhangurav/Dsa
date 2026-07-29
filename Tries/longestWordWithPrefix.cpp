#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
    public:
    unordered_map<char,Node*> children;
    bool endOfWord;

    Node(){
        endOfWord = false;
    }
};

class Trie{
    Node* root;
    public:
        Trie(){
            root = new Node();
        }

        void insert(string key){        //O(L) (L is length of individual word)
            Node* temp = root;

            for(int i= 0; i<key.size(); i++){
                if(temp->children.count(key[i]) == 0){
                    temp->children[key[i]] = new Node();
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

        void longestWordHelper(Node* root, string &ans, string temp){
            for(pair<char,Node*> child : root->children){
                if(child.second->endOfWord){
                    temp += child.first;

                    if((temp.size() == ans.size() && temp < ans) || (temp.size() > ans.size())){
                        ans = temp;
                    }
                    longestWordHelper(child.second,ans,temp);
                    temp = temp.substr(0,temp.size()-1);
                }
            }
        }

        string longestWordWithEOW(){
            string ans = "";
            longestWordHelper(root, ans, "");
            return ans;
        }
};


string longestWordWithPrefix(vector<string> dict){
    Trie trie;
    for(int i = 0; i<dict.size(); i++){
        trie.insert(dict[i]);
    }
    return trie.longestWordWithEOW();
}

int main(){

    vector<string> dict = {"a", "banana", "app", "appl", "ap", "apply", "apple"};
    
    cout<<longestWordWithPrefix(dict);
    
    return 0;
}