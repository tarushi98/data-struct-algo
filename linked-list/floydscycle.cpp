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
void print_linkedlist(LinkedList *head)
{
	while(head!=NULL)
	{
		cout<<(head->data)<<" ";
		head = head->next;
	}
	cout<<endl;
}
bool cycledetection(LinkedList *head)
{
	LinkedList* fast = head->next;
	LinkedList* slow = head;
	while(fast!= NULL or fast->next!=NULL)
	{
		if(fast == slow)
			return true;
		fast = fast->next->next;
		slow = slow->next;
	}
	return false;
}
void cycleremoval(LinkedList *head)
{
	LinkedList* fast = head->next;
	LinkedList* slow = head;
	while(fast!= NULL or fast->next!=NULL)
	{
		if(fast == slow)
			break;		
		fast = fast->next->next;
		slow = slow->next;
	}
	if(fast!=NULL or fast->next!=NULL)
	{
		LinkedList *prev;
		slow = head;
		while(fast!=slow)
		{	prev = fast;
			fast = fast->next;
			slow = slow->next;
		}
		prev->next = NULL;
	}
}
int main()

