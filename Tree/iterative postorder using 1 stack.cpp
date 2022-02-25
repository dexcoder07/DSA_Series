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


vector<int> it_postorder1stack(Node* root){

    stack<Node*> st;

    vector<int> postor;

    Node* curr = root;

    while(curr != NULL || !st.empty()){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            Node* temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                postor.push_back(temp->data);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    postor.push_back(temp->data);
                }
            }
            else{
                curr = temp;
            }
        }
    }
return postor;
}

int main(){

    Node* root = create();

    vector<int> sol = it_postorder1stack(root);

    for(auto it : sol){
        cout << it << " ";
    }
    return 0;
}