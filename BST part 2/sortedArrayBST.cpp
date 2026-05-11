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
            left = right = NULL;
        }
};


Node* buildBalancedBST( int arr[], int st, int end){
    if(st > end){
        return NULL;
    }
    int mid = st + (end-st)/2;

    Node* root = new Node(arr[mid]);
    root->left = buildBalancedBST(arr, st, mid-1);
    root->right = buildBalancedBST(arr, mid+1, end);

    return root;
}


void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout<< root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    Node* root = buildBalancedBST(arr, 0, 6);
    preOrder(root);
    
    return 0;
}