#include<iostream>
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
void take_input(LinkedList *&head)
{	int y = 1;
	do{
	     int x;
	     cout<<"Enter:";
	     cin>>x;
	     insertattail(head,x);
	     cout<<"Continue?:";
	     cin>>y;
	 }while(y);
	   
	 cout<<endl;
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
/********************************************MERGE******************************/
LinkedList* midpoint(LinkedList *head)
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
LinkedList* merge(LinkedList *a, LinkedList *b)
{
	
	LinkedList *it1 = a;	
	LinkedList *it2 = b;
	LinkedList *tmp = NULL;
	while(it1!=NULL and it2!=NULL)
	{
		if(it1->data < it2->data)
		{
			insertattail(tmp,it1->data);
			it1 = it1->next;
		}
		else
		{
			insertattail(tmp,it2->data);
			it2 = it2->next;
		}
	}
	while(it1!=NULL)
	{
		insertattail(tmp,it1->data);
		it1 = it1->next;
	}
	while(it2!=NULL)
	{
		insertattail(tmp,it2->data);
		it2 = it2->next;
	}
	
	return tmp;
	
}
LinkedList* mergesort(LinkedList *head)
{ 	if(head == NULL or head->next == NULL)
		return head;
	
	LinkedList *mid = midpoint(head);
	LinkedList *a = head;
	LinkedList *b = mid->next;
	mid->next = NULL;
	a=mergesort(a);
	b=mergesort(b);
	LinkedList *c = merge(a,b);
	return c;
}
	
int main()
{

	LinkedList *head = NULL;
	take_input(head);
	cout<<"Given array:";
	print_linkedlist(head);
	head = mergesort(head);
	cout<<"Sorted array:";
	print_linkedlist(head);
	return 0;
}
