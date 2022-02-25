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

void leftside(Node* root, vector<Node*> &res){

    if(root->left == NULL && root->right == NULL){
        return;
    }

    res.push_back(root);
    

}

int main(){
    Node* root = create();

    return 0;
}