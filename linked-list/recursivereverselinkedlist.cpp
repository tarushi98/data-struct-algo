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
void print_linkedlist(LinkedList *head)
{
	while(head!=NULL)
	{
		cout<<(head->data)<<" ";
		head = head->next;
	}
	cout<<endl;
}
/*******************************Basic Functions End************************/
LinkedList* rereverse(LinkedList *head)
{
	if(head == NULL or head->next == NULL)
		return head;
	
	LinkedList *shead = rereverse(head->next);
	LinkedList *tmp = head->next;
	tmp->next = head;
	head->next = NULL;
	return shead;
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
	cout<<"Reversed Linked List:";
	head = rereverse(head);
	print_linkedlist(head);
	
	return 0;
	
}
