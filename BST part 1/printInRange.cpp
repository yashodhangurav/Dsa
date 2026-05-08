#include<iostream>
using namespace std;





class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            left=right = NULL;
        }
};


Node* insert(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(val<root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBST(int arr[], int n){
    Node* root = NULL;

    for(int i= 0; i<n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}


void printInRange(Node* root, int start, int end){
    if(root == NULL){
        return;
    }

    if(start<= root->data && root->data <= end){
        cout<<root->data<<" ";
        printInRange(root->left, start, end);
        printInRange(root->right, start, end);
    }else if(root->data<start){
        printInRange(root->right, start, end);
    }else{
        printInRange(root->left, start, end);
    }
}

int main(){
    int arr[9] = {5, 3, 6, 1, 4, 7, 8, 2, 9};

    Node* root = buildBST(arr, 9);


    printInRange(root, 4, 8);


    return 0;
}