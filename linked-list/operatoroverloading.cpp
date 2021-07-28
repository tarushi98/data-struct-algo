#include<iostream>
using namespace std;
class LinkedList{
	public:
	LinkedList *next;
	int data;
	LinkedList(int value)
	{
		data = value;
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
	
	LinkedList *neww = new LinkedList(value);
	neww->next = head;
	head = neww;
}
LinkedList* take_input()
{	LinkedList *head = NULL;	
	int cnt = 1;
	do
	{	int x;
		cout<<"Enter:";
		cin>>x;
		insertathead(head,x);
		cout<<"Do you wish to continue?Say 0 for exit:";
		cin>>cnt;
	}while(cnt);
	return head;
}
void display(LinkedList *head)
{
	while(head!=NULL)
	{
		cout<<(head->data)<<" ";
		head = head->next;
	}
	cout<<endl;
}
	
ostream operator<<(ostream &os, LinkedList *&head)
{	cout<<"Incoming list:"<<endl;
	display(head);
	return os;

}
	
int main()
{
	LinkedList *head = take_input();
	cout<<"Enter your second linked list now:"<<endl;
	LinkedList *head2 = take_input();
	cout<<head<<head2;
	return 0;
}	
