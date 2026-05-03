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


bool rootToNode(Node* root, int n, vector<int> &path){   //O(n)

    if(root == NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data == n){
        return true;
    }

    int isLeft = rootToNode(root->left, n, path);
    int isRight = rootToNode(root->right, n, path);

    if(isLeft || isRight){
        return true;
    }

    path.pop_back();
    return false;

}


Node* LCA(Node* root, int n1, int n2){    

    if(root == NULL) return NULL;

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA = LCA(root->left, n1,n2);
    Node* rightLCA = LCA(root->right, n1,n2);

    if(leftLCA != NULL && rightLCA != NULL){
        return root;
    }

    return leftLCA == NULL ? rightLCA : leftLCA;
}

int main(){

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    int n1 = 4, n2 = 3;

    cout<<"LCA is : "<<LCA(root, n1, n2)->data<<" ";

    return 0;
}