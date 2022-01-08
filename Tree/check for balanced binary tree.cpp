#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *left;
    Node *right;


    Node(int val){
        data = val;

        left = right = NULL;
    }
};


Node* create(){

    int x;
    cin >> x;

    if(x == -1){
        return NULL;
    }

    Node* new_node = new Node(x);
    new_node->left = create();
    new_node->right = create();

    return new_node;
}


int depth_of_tree(Node* root){

    if(root == NULL){
        return 0;
    }

    int l_sub_tree = depth_of_tree(root->left);
    int r_sub_tree = depth_of_tree(root->right);

    if(l_sub_tree - r_sub_tree > 1){
        return false;
    }
    return 1 + max(l_sub_tree, r_sub_tree);
}

int main(){

    Node* root = create();
    cout << depth_of_tree(root);
    return 0;
}