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


vector<int> it_inorder(Node* root){                 //complexity - O(n)

    stack<Node*> st;

    Node* cur = root;
    vector<int> ans;

//O(n)
    while(1){

        if(cur != NULL){
            st.push(cur);
            cur = cur->left;
        }
        else{
            if(st.empty() == true){
                break;
            }
            Node* x = st.top();
            ans.push_back(x->data);
            st.pop();
            cur = x->right;
        }
    }
    return ans;
}

int main(){

    Node *root = create();
    vector<int> xt = it_inorder(root);
 
    for(auto it : xt){
        cout << it << " ";
    }

    return 0;
}