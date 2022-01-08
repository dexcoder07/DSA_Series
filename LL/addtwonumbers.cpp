#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next = NULL;

};


Node* create()
{
	Node* temp = NULL, *head = NULL;
	Node* new_node = NULL;

	int n;
	cin>>n;

	while(n--)
	{
		new_node = new Node;
		cin>>new_node->data;
		new_node->next = NULL;

		if(head==NULL)
		{
			head = new_node;
			temp = head;
		}
		else
		{
			temp->next = new_node;
			temp = temp->next;
		}
	}
	return head;
}


Node* addtwo(Node* l1 , Node* l2)
{
    int carry = 0;
    int sum = 0;
    Node* head = NULL;
    Node* temp = head;

    while(l1!=NULL && l2!=NULL)
    {
        sum = l1->data + l2->data + carry;
        carry = 0;
        if(sum>=10)
        {
            carry = sum/10;
            sum = sum % 10;
        }
        if(head==NULL)
        {
            head = new Node;
            head->data = sum;
            temp = head;
        }
        else{
            temp->next = new Node;
            temp = temp->next;
            temp->data = sum;
        }
        l1 = l1->next;
        l2 = l2->next;
    }

    while(l1!=NULL)
    {
        sum = l1->data + carry;
        carry = 0;
        if(sum>=10)
        {
            carry = sum/10; //calculating carry 12/10 = 1
            sum = sum%10; // calculating the value 12%10 = 2
        }
        temp->next = new Node;
        temp = temp->next;
        temp->data = sum;
        l1 = l1->next;
    }

    while(l2!=NULL)
    {
        sum = l2->data + carry;
        carry = 0;
        if(sum>=10)
        {
            carry = sum/10;
            sum = sum%10;
        }
        temp->next = new Node;
        temp = temp->next;
        temp->data = sum;
        l2 = l2->next;
    }
    if(carry)
    {
        temp->next = new Node;
        temp = temp->next;
        temp->data = carry;
    }

    return head;
}

void traverse(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}



int main()
{
	Node *head1 = create();
    Node* head2 = create();
    Node* x = addtwo(head1,head2);
    traverse(x);
	return 0;
}