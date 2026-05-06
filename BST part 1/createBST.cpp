#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            left = right = NULL;
        }
};


Node* insert(Node* root, int val){          //O(logn)
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val < root->data){
        root->left = insert(root->left, val);           //leftSubtree
    }else{
        root->right = insert(root->right, val);         //rightSubtree
    }

    return root;
}

Node* buildBST(int arr[], int n){               //return the root node thats why return type is Node*
    Node* root = NULL;                          //initially root assign as a NULL

    for(int i = 0; i<n; i++){
        root = insert(root , arr[i]);
    }

    return root;
}



// checking the resukt by printing inorder traversal

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<", ";
    inorder(root->right);
}

int main(){
    int arr[6] = {5,1,3,4,2,7};
    int arr2[9] = {8,5,4,2,1,4,10,25,4};


    Node* root = buildBST(arr2, 9);

    inorder(root);

    return 0;
}