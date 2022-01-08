#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
};


Node* create(Node* head){
    int n;
    cin >> n;

    Node* temp = NULL;

    while(n--){
        int data;
        cin >> data;
        Node* new_node = new Node;
        new_node->val = data;
        if(head==NULL){
            //new_node->data = val;
            head = new_node;
            temp = head;
        }
        else{
            //new_node->data = val;
            temp->next = new_node;
            temp = temp->next;
        }
    }
    return head;
}


void traverse(Node* head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
}


Node* duplicateremove(Node* head){
        
    Node* temp1 = head, *temp2 = head->next;
        
      while(temp2!=NULL){

        if((temp1->val - temp2->val) == 0){
            temp1->next = temp2->next;
                
            temp1 = temp2;
            temp2->next = temp2->next;
            }

        }
    return head;
}


int main(){

    Node* head = NULL;
    head = create(head);

    head = duplicateremove(head);
    traverse(head);
    return 0;
}