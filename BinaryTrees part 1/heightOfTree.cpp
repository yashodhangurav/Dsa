#include<iostream>
#include<queue>
#include<vector>
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


int heightOfTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int currHeight = max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
    return currHeight;

}

int countNodes(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftcount = countNodes(root->left);
    int rightcount = countNodes(root->right);
    return leftcount + rightcount + 1;              // +1 is for the current node, as we are counting the number of nodes in the tree, so we need to count the current node as well.
    
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    cout<<heightOfTree(root)<<endl;

    cout<<"height : "<<countNodes(root)<<endl;

    return 0;
}