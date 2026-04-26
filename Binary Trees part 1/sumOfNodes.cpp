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

int sum(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    // int currSum = leftSum + rightSum + root->data;
    // cout<<currSum<<endl;
    return leftSum + rightSum + root->data;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    cout<<sum(root)<<endl;


    return 0;
}