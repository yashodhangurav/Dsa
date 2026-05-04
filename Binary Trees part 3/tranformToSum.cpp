#include<iostream>
#include<vector>
#include<queue>
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

void levelOrder(Node* root){            //O(n) where n is the number of nodes in the tree
    if(root == NULL){
        return;
    }

    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);                   //to mark the end of the current level

    while(!Q.empty()){
        Node* currNode = Q.front();
        Q.pop();

        if(currNode == NULL){
            cout<<endl;
            if(Q.empty()){
                break;
            }

            Q.push(NULL);       //to mark the end of the next level
        }
        else{
            cout<< currNode->data <<" ";
            

            if(currNode->left != NULL){
                Q.push(currNode->left);
            }
            if(currNode->right != NULL){
                Q.push(currNode->right);
            }
    
        }
        

    }
} 




int transform(Node* root){      //O(n)
    if(root == NULL){
        return 0;
    }

    int leftOld = transform(root->left);
    int rightOld = transform(root->right);
    int currOld = root->data;
    // root->data = leftOld + rightOld + root->left->data + root->right->data;

    root->data = leftOld + rightOld;
    
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }

    return currOld;
}



int main(){

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    transform(root);

   levelOrder(root);



    return 0;
}