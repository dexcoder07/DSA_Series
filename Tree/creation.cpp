#include<bits/stdc++.h>
using namespace std;


struct Node{

    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};


Node* creation(){

    int x;
    cin >> x;

    if(x == -1){
        return NULL;
    }

    Node *new_node = new Node(x);

    new_node->left = creation();
    new_node->right = creation();
    return new_node;
}


void traversal(Node* root){

    if(root!=NULL){

        cout << root->data << " ";
        traversal(root->left);
        traversal(root->right);
    }
}

int main(){
    
    Node *root = NULL;

    root = creation();

    traversal(root);

    return 0;
}