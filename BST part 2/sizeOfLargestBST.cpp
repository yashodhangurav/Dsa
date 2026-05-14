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

class Info{
    public:
        int size;
        int min;
        int max;
        bool isBST;
        Info(int size, int min, int max, bool isBST){
            this->size = size;
            this->min = min;
            this->max = max;
            this->isBST = isBST;
        }

};

static int maxSize = 0;

Info* largestBST(Node* root){

    if(root == NULL){
        return new Info(0, INT_MAX, INT_MIN, true);
    };


    Info* leftInfo = largestBST(root->left);
    Info* rightInfo = largestBST(root->right);

    int currMin = min(root->data, min(leftInfo->min, rightInfo->min));
    int currMax = max(root->data, max(leftInfo->max, rightInfo->max));
    int currSize = leftInfo->size + rightInfo->size + 1;

    if(leftInfo->isBST && rightInfo->isBST 
        && root->data > leftInfo->max && root->data < rightInfo->min){
        maxSize = max(maxSize, currSize);
            return new Info(currSize, currMin, currMax, true);
    }
   
        return new Info(currSize, currMin, currMax, false);
    

    // bool currIsBST;
    // int currMin;
    // int currMax;
    // int currSize;

}


int main(){

    Node* root = new Node(5);
    root->left = new Node(3);
    root->left->left = new Node(2);
    root->left->left->left = new Node(1);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right= new Node(9);
        
    largestBST(root);
    cout<<"maxSize : "<< maxSize<<endl;


    return 0;
}