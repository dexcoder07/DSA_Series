#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


Node* insertBST(Node* root, int value){

    if(root == NULL){
        return new Node(value);
    }

    if(value > root->data){
        root->right = insertBST(root->right, value);
    }

    else{
        root->left = insertBST(root->left, value);
    }

    return root;
}

void Inorder(Node* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

int main(){


    Node* root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 9);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    Inorder(root);
    return 0;
}