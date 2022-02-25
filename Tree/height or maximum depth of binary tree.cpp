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

    return 1 + max(l_sub_tree, r_sub_tree);             // adding 1 becoz of node apna left aur right ka max height le rha h
                                                        // and fr apna height bhi to add krega uske liye 1 add kiye h.
}

int main(){

    Node* root = create();
    cout << depth_of_tree(root);
    return 0;
}