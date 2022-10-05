#include<iostream>
using namespace std;

class Node{

public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void Preorder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    return;
}

int main(){  
/*
        1  --> root node
       / \
      2   3
     / \  / \
    4   5 6  7
*/

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Preorder(root);

    return 0;
}
