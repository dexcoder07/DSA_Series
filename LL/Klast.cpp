#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next = NULL;

};


Node* create()
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



int node_count(Node* head)
{
    int count = 0;

	Node* temp = head;

	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
    return count;
}

Node* klast(Node* head, int k)
{
	Node* tail = head;
	Node* new_tail = head;
	Node* new_head;

	int l = node_count(head);
	int last = l-k-1;
	while(tail->next!=NULL)
	{
		if(last>0)
		{
			new_tail = new_tail->next;
			last--;
		}


		tail = tail->next;
	}

	new_head = new_tail->next;
	tail->next = head;
	new_tail->next = NULL;

	return new_head;

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
	Node *head = create();
	//int n = node_count(head);
    Node* track = klast(head,3);
	traverse(track);
	return 0;
}