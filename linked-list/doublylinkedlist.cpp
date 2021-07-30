#include<iostream>
using namespace std;
class Double{
	public:
	int data;
	Double *next;
	Double *prev;
	Double( int value)
	{
		data = value;
		next = NULL;
		prev = NULL;
	}
};
void insertathead(Double *&head,int data)
{
	if(head == NULL)
	{
		head = new Double(data);
		return;
	}
	
	Double *neww = new Double(data);
	neww->next = head;
	head->prev = neww;
	head = neww;
}
void insertattail(Double *&head,int val)
{	
	if(head == NULL)
	{
		insertathead(head,val);
		return;
	}
	Double *temp = head;
	while(temp->next!=NULL)
		temp = temp->next;
	
	Double *neww = new Double(val);
	temp->next = neww;
	neww->prev = temp;
}
void insertinmiddle(Double *&head,int value, int pos)
{
	if(head == NULL or pos == 0)
	{
		insertattail(head,value);
	}
	Double *tmp = head;
	int ct = 0;
	while(tmp!=NULL)
	{
		if(ct == pos)
		{
			Double *neww = new Double(value);
			neww->next = tmp->next;
			neww->prev = tmp;
			tmp->next->prev = neww;
			tmp->next = neww;
			break;
		}
		tmp = tmp->next;
		ct+=1;
	}
}
void print_linkedlist(Double *head)
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
	int yes = 1;
	Double *head = NULL;
	do
	{
		int x;
		cout<<"Enter:";
		cin>>x;
		insertattail(head,x);
		cout<<"Continue?";
		cin>>yes;
	}while(yes);
	cout<<"Entered list:";
	print_linkedlist(head);
	int k,pos;
	cout<<"Enter k?";
	cin>>k;
	cout<<"Enter pos;";
	cin>>pos;
	insertinmiddle(head,k,pos);
	cout<<"List after your pokes:";
	print_linkedlist(head);	
	return 0;
}
