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
void insertathead(LinkedList *&head,int value)
{
	LinkedList *neww = new LinkedList(value);
	if(head == NULL)
	{
		neww->next = neww;
		head = neww;
		return;
	}
	
	else
	{
		LinkedList *tmp = head;
		while(tmp->next != head)
			tmp = tmp->next;
		
		tmp->next = neww;
		neww->next = head;
		head = neww;
	}
}
void print(LinkedList *head)
{
	LinkedList *tmp = head;
	while(tmp->next != head)
	{
		cout<<(tmp->data)<<" ";
		tmp = tmp->next;
	}
	cout<<(tmp->next->data)<<endl;
}
int main()
{
	LinkedList *head = NULL;
	insertathead(head,10);
	insertathead(head,20);
	insertathead(head,30);
	insertathead(head,40);
	insertathead(head,50);
	print(head);
	return 0;
}
