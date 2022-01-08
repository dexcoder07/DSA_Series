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


vector<vector<int>> zigzagLevelOrder(Node* root) {
        
        vector<vector<int>> result;
        vector<int> as;
        int flag = 0;
        
        if(root == NULL){
            return result;
        }
        
        queue<Node*> que;
        que.push(root);
        que.push(NULL);
        
        while(!que.empty()){
            Node* temp = que.front();
            que.pop();
            
            if(temp != NULL){
                as.push_back(temp->data);
                if(temp->left){
                    que.push(temp->left);
                }
                if(temp->right){
                    que.push(temp->right);
                }
            }
            else{
                if(!que.empty()){
                    que.push(NULL);
                    if(flag == 0){
                        result.push_back(as);
                        as.clear();
                        flag = 1;
                    }
                    else{
                        reverse(as.begin(), as.end());
                        result.push_back(as);
                        as.clear();
                        flag = 0;
                    }
                }
                else{
                    if(flag == 0){
                        result.push_back(as);
                        as.clear();
                        flag = 1;
                    }
                    else{
                        reverse(as.begin(), as.end());
                        result.push_back(as);
                        as.clear();
                        flag = 0;
                    }
                    break;
                }
            }
        }
        return result;
    }


int main(){

    Node* root = create();

    vector<vector<int>> ans = zigzagLevelOrder(root);

    for(auto it : ans){
        for(auto jt : it){
            cout << jt << " ";
        }
        cout << endl;
    }
    return 0;
}