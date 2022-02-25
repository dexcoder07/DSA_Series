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

vector<int> post_order_1_stack(Node* root){

    vector<int> post;

    stack<Node*> st;

    Node* curr = root;

    while(!st.empty() || curr != NULL){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            Node* temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                post.push_back(temp->data);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->data);
                }
            }
            else{
                curr = temp;
            }
        }
    }

    return post;
}

int main(){

    Node* root = create();
    vector<int> res = post_order_1_stack(root);

    for(auto it : res){
        cout << it << " ";
    }
    return 0;
}