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


void inorder(Node* root, vector<int> &v){
    if(root == NULL){
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

Node*  buildFromSorted(vector<int> &arr, int st, int end){
    if(st>end){
        return NULL;
    }

    int mid = st + (end-st)/2;

    Node* curr = new Node(arr[mid]);
    curr->left = buildFromSorted(arr, st, mid-1);
    curr->right = buildFromSorted(arr, mid+1, end);

    return curr;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


Node* mergedBSTs(Node* root1, Node* root2){
    vector<int> nodes1, nodes2, merged;
    inorder(root1, nodes1);
    inorder(root2, nodes2);

    int i = 0, j = 0;
    while(i < nodes1.size() && j < nodes2.size()){
        if(nodes1[i]<nodes2[j]){
            merged.push_back(nodes1[i++]);
        }else{
            merged.push_back(nodes2[j++]);
        }
    }

    while(i < nodes1.size()){
        merged.push_back(nodes1[i++]);
    }
    while(j < nodes2.size()){
        merged.push_back(nodes2[j++]);
    }

    return buildFromSorted(merged, 0, merged.size()-1);

}

int main(){
    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(3);

    Node* root2 = new Node(7);
    root2->left = new Node(6);
    root2->right = new Node(8);

    Node* root = mergedBSTs(root1, root2);
    preorder(root);

    return 0;
}