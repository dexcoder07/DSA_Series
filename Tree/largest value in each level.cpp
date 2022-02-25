#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;

    Node* left;
    Node* right;;

    Node(int val){
        data = val;
    }
};


Node* create(){

    int x;
    cin >> x;

    if( x == -1){
        return NULL;
    }

    Node* new_node = new Node(x);

    new_node->left = create();

    new_node->right = create();

    return new_node;
}

void largestValue(Node* root){

    vector<int> ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        int leng = q.size();

        int maxi = INT_MIN;

        for(int i = 0 ; i < leng ; i++){

            Node* temp = q.front();
            q.pop();

            if(temp->data > maxi){
                maxi = temp->data;
            }


            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
        ans.push_back(maxi);
    }

    for(auto it : ans){
        cout << it << " ";
    }
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    Node* root = create();

    largestValue(root);

	return 0;
}