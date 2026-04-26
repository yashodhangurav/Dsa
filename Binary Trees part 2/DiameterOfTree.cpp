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


int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int currHeight = max(height(root->left), height(root->right)) + 1;
    return currHeight;

}

// first approach to solve the problem in n^2 time complexity

int dia1(Node* root){   //O(n^2) because we are calling the height function for every node in the tree, and the height function itself is O(n) because it traverses the entire tree to calculate the height. So, for each node, we are doing O(n) work, and there are O(n) nodes in the tree, resulting in O(n^2) time complexity.
    if(root == NULL){
        return 0;
    }

    int currDia = height(root->left) + height(root->right) + 1;     //O(n)
    int rightDia = dia1(root->right);
    int leftDia = dia1(root->left);

    return max(currDia, max(rightDia, leftDia));
}


pair<int, int> dia2(Node* root){        //O(n) 
    if(root == NULL){
        return make_pair(0, 0);
    }

    // (diameter, height)
    pair<int, int> leftInfo = dia2(root->left); //(LD, LH)
    pair<int, int> rightInfo = dia2(root->right);

    int currDia = leftInfo.second + rightInfo.second + 1;   // CD = LH + RH + 1

    int finalDia = max(currDia, max(leftInfo.first, rightInfo.first));
    int finalheight = max(leftInfo.second, rightInfo.second) + 1;

    return make_pair(finalDia, finalheight);
};



int main(){
   
    vector<int> v = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(v);

    // cout<<"diameter1: "<<dia1(root);

    pair<int, int> ans = dia2(root);
    cout<<"diameter2: "<< ans.first;

    return 0;
}