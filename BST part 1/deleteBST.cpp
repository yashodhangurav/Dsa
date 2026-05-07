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

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<""<<root->data<<" ";
    inorder(root->right);
}





Node* getInorderSuccessor(Node* root){
    while(root->left != NULL){
        root = root->left;
    }

    return root;
}

Node* delNode(Node* root, int key){
    if(root == NULL){
        return NULL;
    }

    if(key<root->data){
        root->left = delNode(root->left, key);
    }else if(key>root->data){
        root->right = delNode(root->right, key);
    }else{
        //case 1: no child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // case 2: one child
        else if(root->left==NULL || root->right == NULL){
            return root->left == NULL? root->right : root->left;
        }
        // case 3: two child
        else{
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
            return root;
        }
    }
    return root;
}

int main(){
    int arr[9] = {5, 3, 6, 1, 4, 7, 8, 2, 9};

    Node* root = buildBST(arr, 9);

    inorder(root);
    cout<<endl;

    delNode(root, 7);

    inorder(root);
    cout<<endl;

    return 0;
}