#include<iostream>
using namespace std;

//Creating Structure of Node.

struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};


// Returning node ko left aur right me assign kr rhe h kyu ki agar ni krnge to created node left ya right node m join nhi hoga
// last m root return kr rhe hai kyu ki jis node m new node attach hua h us node ko apne previous node m already attached hai but fr b kr
// de rhe hai kyu ki function kuch return krega thats why.
Node* createBST(Node* root, int value){

    //Checking if current Node is NULL or Not, if NULL to yehi pe new node join hoga, to new node bna kr uska address return kr rhe hai.
    if(!root){
        return new Node(value);
    }

    // Checking is root ka data is less than the given value means value right side lie krega root k data k.
    if(value > root->data){

        //to yaha hmlg right side ja rhe hai aur wapis aate time given node ka right m address store kra denge.
        root->right = createBST(root->right, value);
    }

    if(value < root->data){

        //to yaha hmlg left side ja rhe hai aur wapis aate time given node ka left m address store kra denge.
        root->left = createBST(root->left, value);
    }

    //returning the address of current node to the prev node.
    return root;
}




bool searchBST(Node* root, int key){

    // checking if the current node is NULL then we say ki value ni mila tree m kahi bhi wapis ho lo.
    if(root == NULL){
        return false;
    }

    // agar value mil jata hai to true return kr do

    if(key == root->data){
        return true;
    }

    if(key > root->data){

        //yaha pe return value store ni kra rhe hai kyu ki nodes already ek dushre se joint hai to no need to create or delete node.
        return searchBST(root->right, key);
    }

    if(key < root->data){
        //same as above statement.
        return searchBST(root->left, key);
    }
    return 0;
}


int main(){

    Node* root = NULL;

    int ar[6] = {5,1,3,4,2,7};

    root = createBST(root, ar[0]);

    for(int i = 1 ; i < 6 ; i++){
        createBST(root, ar[i]);
    }

    if(searchBST(root, 12)){
        cout << "key found\n";
    }
    else{
        cout << "key not found\n";
    }

    return 0;
}