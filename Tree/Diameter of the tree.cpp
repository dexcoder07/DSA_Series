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

int height(Node* root){
    
    if(root == NULL){
        return 0;
    }
    
    return 1 + max(height(root->left), height(root->right));
}

// O(N^2)

void diameter(Node* root, int &maxi){
    if(root == NULL){
        return;
    }
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    maxi = max(maxi, lh + rh);
    
    diameter(root->left, maxi);
    diameter(root->right, maxi);
    
}

int main(){
    
    Node* root = create();
    
    int maxi = INT_MIN;
    
    diameter(root, maxi);
    
    cout << "height of the tree is " << maxi;
    return 0;
}