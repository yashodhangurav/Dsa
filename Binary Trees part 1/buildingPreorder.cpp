#include<iostream>
#include<vector>
using namespace std;

// Time complexity = O(n) where n is the number of nodes in the tree

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

    // creating new nodes for PREORDER  = ROOT -> LEFT -> RIGHT
    Node* currNode = new Node(nodes[idx]);
    // recursively building left and right subtrees
    currNode->left = buildTree(nodes);                      //until we encounter -1, we will keep on building the left subtree
    currNode->right = buildTree(nodes);                     //after we encounter -1, we will start building the right subtree

    return currNode;                                       //after we have built the left and right subtrees, we will return the current node
};


void preorder(Node* root){              //preorder traversal = ROOT -> LEFT -> RIGHT
    if(root == NULL){
        return;
    }
    cout<<root->data<<", ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<", ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<", ";
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root  = buildTree(nodes); //1

    // cout<<"ROOT = "<<root->data<<endl; 

    cout<<"\n Preorder : ";
    preorder(root); //Time complexity = O(n) where n is the number of nodes in the tree
    cout<<"\n Inorder : ";
    inorder(root);  //Time complexity = O(n) where n is the number of nodes in the tree
    cout<<"\n Postorder : ";
    postorder(root); //Time complexity = O(n) where n is the number of nodes in the tree
    return 0;
}