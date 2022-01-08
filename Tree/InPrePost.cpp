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

void InPrePost(Node* root){

    vector<int> preorder, inorder, postorder;

    stack<pair<Node*, int>> st;

    st.push({root, 1});

    while(!st.empty()){

        Node* temp = st.top().first;
        int temp2 = st.top().second;
        st.pop();

        if(temp2 == 1){
            preorder.push_back(temp->data);
            st.push({temp, ++temp2});
            if(temp->left){
                st.push({temp->left, 1});
            }
        }
        if(temp2 == 2){
            inorder.push_back(temp->data);
            st.push({temp, ++temp2});
            if(temp->left){
                st.push({temp->left, 1});
            }
        }
        else{
            postorder.push_back(temp->data);
        }
    }

    for(auto it : preorder){
        cout << it << " ";
    }

    cout << endl;

    for(auto it : inorder){
        cout << it << " ";
    }

    cout << endl;

    for(auto it : postorder){
        cout << it << " ";
    }

}

int main(){

    Node* root = create();
    InPrePost(root);
    return 0;
}