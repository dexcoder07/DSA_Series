#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};


Node* create(Node* head){
    int n;
    cin >> n;

    Node* temp = NULL;

    while(n--){
        int val;
        cin >> val;
        Node* new_node = new Node;
        new_node->data = val;
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
        cout << head->data << " ";
        head = head->next;
    }
}


Node* reverseLL(Node* head){

    Node* cur = head;
    Node* prev = NULL;
    Node* front = NULL;

    while(cur!=NULL){
        front = cur->next;
        cur->next = prev;
        prev = cur;
        cur = front;
    }

    return prev;
}


int main(){

    Node* head = NULL;
    head = create(head);
    head = reverseLL(head);
    traverse(head);


    return 0;
}