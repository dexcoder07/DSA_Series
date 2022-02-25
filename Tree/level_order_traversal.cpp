#include<bits/stdc++.h>
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

vector<int> level_order_traversal(Node* root){

    vector<int> vec;

    queue<Node*> que;

    que.push(root);

    while(!que.empty()){

        Node* temp = que.front();
        vec.push_back(temp->data);
        que.pop();
        if(temp->left){
            que.push(temp->left);
        }
        if(temp->right){
            que.push(temp->right);
        }
    }
return vec;
}

int main(){

    Node* root = create();

    vector<int> ans = level_order_traversal(root);

    for(auto it : ans){
        cout << it << " ";
    }
    return 0;
}