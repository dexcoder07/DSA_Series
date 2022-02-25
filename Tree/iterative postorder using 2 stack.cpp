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

vector<int> it_postorder(Node* root){

    stack<Node*> st1;
    stack<Node*> st2;

    vector<int> ans;

    st1.push(root);

    while(!st1.empty()){

        Node* temp = st1.top();
        st1.pop();
        st2.push(temp);

        if(temp->left){
            st1.push(temp->left);
        }
        if(temp->right){
            st1.push(temp->right);
        }
    }

    while(!st2.empty()){
        int p = st2.top()->data;
        st2.pop();
        ans.push_back(p);
    }
    
return ans;

}


int main(){

    Node* root = create();

    vector<int> xt = it_postorder(root);


    for(auto it : xt){
        cout << it << " ";
    }


    return 0;
}