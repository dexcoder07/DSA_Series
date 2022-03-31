#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        ListNode* h1 = list1;
        ListNode* h2 = list2;
        ListNode* temp = NULL;
        ListNode* head = NULL;
        int flag = 0;
        while(h1 != NULL && h2 != NULL){
            
            ListNode* new_node = new ListNode();
            
            if(head == NULL){
                head = new_node;
                temp = head;
            }
            if(h1->val <= h2->val){
                new_node->val = h1->val;
                h1 = h1->next;
                flag = 1;
            }
            else if(h2->val <= h1->val){
                new_node->val = h2->val;
                h2 = h2->next;
                flag = 1;
            }
            
            if(flag){
                temp->next = new_node;
                temp = temp->next;
            }
        }
        
        while(h1 != NULL){
            ListNode* new_node = new ListNode();
            new_node->val = h1->val;
            temp->next = new_node;
            temp = temp->next;
            h1 = h1->next;
        }
        
        while(h2 != NULL){
            ListNode* new_node = new ListNode();
            new_node->val = h2->val;
            h2 = h2->next;
            temp->next = new_node;
            temp = temp->next;
        }
        
        return head;
    }
};
