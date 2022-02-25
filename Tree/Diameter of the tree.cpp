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


//O(N) - Approach 1
int Diameter_A1(Node* root, int &maxi){

    if(root == NULL){
        return 0;
    }

    int lh = Diameter_A1(root->left, maxi);
    int rh = Diameter_A1(root->right, maxi);

    maxi = max(maxi, lh + rh);

    return 1 + max(lh, rh);
}


//O(N) - Approach 2

int Diameter_A2(Node* root, int *height){

    if(root == NULL){
        *height = 0;        //Null wale node ka height 0 hota h.
        return 0;
    }

    int lh = 0, rh = 0;

    int l_dia = Diameter_A2(root->left, &lh);
    int r_dia = Diameter_A2(root->right, &rh);

    int curr_diameter = lh + rh;
    *height = 1 + max(lh, rh);

    return max(curr_diameter, max(l_dia, r_dia)); //agar current diameter bara h to wo return wrna jis side ka path larger h wo path return hoga.
}

int main(){


#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif


    
    Node* root = create();
    
    int maxi = INT_MIN;

    int x = Diameter_A2(root, &maxi);

    cout << "height of the tree is " << x;
    return 0;
}