#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* create(ListNode* head){
    int n;
    cin >> n;

    ListNode* temp = NULL;

    while(n--){
        int val;
        cin >> val;
        ListNode* new_node = new ListNode;
        new_node->val = val;
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

//TC = O(N) + O(N-K) +O(K)
//SC = O(1)
// ListNode* swapNodes(ListNode* head, int k) {

        
//         ListNode* temp = head;
//         int count = 0;
//     //O(N)->Finding the size of the linked lsit
//         while(temp != NULL){
//             count++;
//             temp = temp->next;
//         }
        
//         int x = count - k;
//         temp = head;
        
//         while(x--){
//             temp = temp->next;
//         }
//         // cout << temp->val;
        
//         ListNode* nep = head;
        
//         while(k != 1){
//             nep = nep->next;
//             k--;
//         }
        
//         // cout << nep->val;
//         swap(nep->val, temp->val);
//         return head;
// }


ListNode* swapNodes(ListNode* head, int k) {

    ListNode* li1 = head;
    ListNode* li2 = head;

    while(k != 1){
        li1 = li1->next;
        k--;
    }

    ListNode* nxt = li1;

    while(li1->next != NULL){
        li1 = li1->next;
        li2 = li2->next;
    }

    swap(nxt->val, li2->val);
    // cout << nxt->val;

    return head;

}

void traverse(ListNode* head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
}

int main(){

    ListNode* head = NULL;
    head = create(head);
    // head = reverseLL(head);
    // traverse(head);

    swapNodes(head, 2);
    traverse(head);

    return 0;
}