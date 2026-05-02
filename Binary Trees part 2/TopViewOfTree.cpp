#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

static int idx = -1;
Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    
    return currNode;
}




void topView(Node* root){
    queue<pair<Node*, int>> Q;     //pair of (node and its horizontal distance) from the root
    map<int, int> m;    //(HD, node's data)

    Q.push(make_pair(root, 0));     //root has HD = 0

    while(!Q.empty()){
        pair<Node*, int> curr = Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int hd = curr.second;

        if(m.count(hd) == 0){
            m[hd] = currNode->data;     //store the first node's data for each HD
        }

        if(currNode->left != NULL){
            pair<Node*, int> left = make_pair(currNode->left, hd-1);
            Q.push(left);
        }
        if(currNode->right != NULL){
            pair<Node*, int> right = make_pair(currNode->right, hd+1);
            Q.push(right);
        }

    }

    for(auto it: m){
        cout<< it.second<<" ";
    }
    cout<<endl;

}

int main(){
    vector<int> v = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(v);
    topView(root);

    return 0;
}