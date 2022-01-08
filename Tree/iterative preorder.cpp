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


vector<int> ipreorder(Node* root){

    stack<Node*> st;

    vector<int> vec;

    st.push(root);

    while(!st.empty()){

        Node *temp = st.top();
        vec.push_back(temp->data);
        st.pop();
        
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }

    return vec;
}
int main(){

    Node *root = create();
    vector<int> xt = ipreorder(root);

    for(auto it : xt){
        cout << it << " ";
    }
    return 0;
}