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





int KthAncestor(Node* root, int k, int n){

    if(root == NULL) return -1;

    if(root->data == n){
        return 0;
    }

    int leftDist = KthAncestor(root->left, k, n);
    int rightDist = KthAncestor(root->right, k, n);

    if(leftDist == -1 && rightDist == -1){
        return -1;
    }
    int validVal = leftDist == -1 ? rightDist : leftDist;

    if(validVal+1 == k){
        cout<<"Kth ancestor is : "<<root->data<<" ";
    }

    return validVal+1;                                          //returnig the dist of the node and detecting the kth value
}


int main(){

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    KthAncestor(root, 1, 6);

    return 0;
}