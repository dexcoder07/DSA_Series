#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;


    Node(int val){
        data = val;
        left = right = NULL;
    }
};



Node* inordersuccessor(Node* root){

    Node* curr = root;

    while(curr && curr->left != NULL){
        curr = curr->left;
    }

    return curr;
}




// Creation/Insertion of BST
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



Node* deleteBST(Node* root, int key){

    if(key < root->data){
        root->left = deleteBST(root->left, key);
    }
    else
    if(key > root->data){
        root->right = deleteBST(root->right, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else
        if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        else{
            Node* temp = inordersuccessor(root->right);
            root->data = temp->data;
            root->right = deleteBST(root->right, temp->data);
        }

    }
return root;
}





// Traversal of BST
void Inorder(Node* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}


int main(){

    Node* root = NULL;

    int ar[6] = {5,1,3,4,2,7};

    root = insertBST(root, ar[0]);

    for(int i = 1 ; i < 6 ; i++){
        insertBST(root, ar[i]);
    }

    cout << "Tree before deletion of Node\n";
    Inorder(root);
    cout<<endl;

    cout << "Tree after deletion of Node\n";
    
    root = deleteBST(root, 3);
    Inorder(root);
    return 0;
}