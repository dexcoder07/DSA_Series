#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* left, *right;

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

//Approach 1

bool is_balance(Node* root, int *height){
    
    if(root == NULL){
        return true;
    }

    int lh = 0, rh = 0;

    if(is_balance(root->left, &lh) == false){
        return false;
    }

    if(is_balance(root->right, &rh) == false){
        return false;
    }

    *height = 1 + max(lh, rh);

    if(abs(lh - rh) <= 1){
        return true;
    }

    return false;

}


//Approach 2

int is_balanced(Node* root){

    if(root == NULL){
        return 0;
    }

    int lh = is_balanced(root->left);

    if(lh == -1){
        return -1;
    }

    int rh = is_balanced(root->right);

    if(rh == -1){
        return -1;
    }

    if(abs(lh = rh) > 1){
        return -1;
    }

    return 1 + max(lh, rh);
}


int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    Node* root = create();


    if(is_balanced(root) != -1){
        cout << "Tree is balanced\n";
    }
    else{
        cout << "Tree is not balanced\n";
    }

    return 0;
}