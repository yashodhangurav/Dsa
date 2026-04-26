#include<iostream>
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



bool isIdentical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
            return false;  
    }
    if(root1->data != root2->data){
        return false;
    }

    return isIdentical(root1->left, root2->left) 
            && isIdentical(root1->right, root2->right);
}

bool isSubTree( Node* root, Node* subRoot){

    if(root == NULL && subRoot == NULL){
        return true;
    }
    if(root == NULL || subRoot == NULL){
            return false;
    }
     

    if(root->data == subRoot->data){
        if(isIdentical(root, subRoot)){     // if the current node of the main tree is same as the root of the subtree, then we will check if the two trees are identical or not, if they are identical then we can say that the subtree is present in the main tree and we can return true, otherwise we will continue to check for the left and right subtrees of the main tree.
            return true;
        }
    }

     int leftSubTree = isSubTree(root->left, subRoot);
     if(!leftSubTree){
        return isSubTree(root->right, subRoot);
     }

     return true;
}

int main(){

    vector<int> V = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};
    Node* root = buildTree(V);

    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);

    cout<<isSubTree(root, subRoot);

    return 0;
}