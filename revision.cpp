#include<iostream>
#include<vector>
using namespace std;
class LinkedList
{
	public:
	int data;
	LinkedList *next;
	LinkedList(int val)
	{
		data = val;
		next = NULL;
	}
};
void insertathead(LinkedList *&head, int value)
{
	if(head == NULL)
	{
		head = new LinkedList(value);
		return;
	}
	
	LinkedList *newnode = new LinkedList(value);
	newnode->next = head;
	head = newnode;
}
void insertattail(LinkedList *&head ,int value)
{
	if( head == NULL)
	{	insertathead(head,value);
		return;
	}
	
	LinkedList *temp = head;
	while(temp->next!=NULL)
	 	temp = temp->next;
	temp->next = new LinkedList(value);
}
void insertinmiddle(LinkedList *head, int value , int pos)
{
	if(head == NULL and pos!=0)
	{	cout<<"List empty";
		return;
	}
	else if(pos == 0)
		insertathead(head,value);
	LinkedList *temp = head;
	int ct = 0;
	while(temp!=NULL)
	{
		if(ct == pos)
		{
			LinkedList *neww = new LinkedList(value);
			neww->next = temp->next;
			temp->next = neww;
			break;
		}
		ct+=1;
		temp = temp->next;
	}
	if(ct<pos)
	 	cout<<"List abhi nhi pahunchi udhar tak janab!";
}
LinkedList* roadrunner(LinkedList *head )
{
	LinkedList *slow = head;
	LinkedList *fast = head->next;
	while(fast!=NULL and fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
LinkedList* kthnode(LinkedList *head , int k)
{
	LinkedList *slow , *fast;
	slow = fast = head;
	while(fast!=NULL)
	{
		if(k == 0)
		{
			fast = fast->next;
			slow = slow->next;
		}
		else
		{
			fast = fast->next;
			k-=1;
		}
	}
	return slow;
}
void reverselinkedlist(LinkedList *&head)
{
	LinkedList* temp = NULL;
	while(head!=NULL)
	{
		LinkedList *curr = head;
		head = head->next;
		curr->next = temp;
		temp = curr;
	}
	head = temp;
}	
void print_linkedlist(LinkedList *head)
{
	while(head!=NULL)
	{
		cout<<(head->data)<<" ";
		head = head->next;
	}
	cout<<endl;
}
int main()
{	
	LinkedList *head = NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	cout<<"Linked List:";
	print_linkedlist(head);
	insertathead(head,0);
	cout<<"Linked List:";
	print_linkedlist(head);
	reverselinkedlist(head);
	cout<<"Reversed Linked List:";
	print_linkedlist(head);
	
	return 0;
	
}
	
