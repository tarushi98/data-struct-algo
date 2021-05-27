#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	
	node(int d)
	{
		data = d;
		next = NULL;
	}
};
void insertTail(node *&head , int data)
{
	if(head == NULL)
	{		
			node *n = new node(data);
			head = n;
			n->next = NULL;
			return;
	}
	
	node *tmp = head;
	while(tmp->next != NULL)
	{
		tmp =  tmp->next;
	}
	node *n = new node(data);
	tmp->next = n;
}
void display(node *head)
{	cout<<"Generated Linked List is:"<<endl;
	while(head != NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}
node* take_input()
{	int n=0;
	node *head = NULL;
	cout<<"Start Entering and Press -1 to exit"<<endl;
	while(n!=-1)
	{
		cout<<"enter n:";
		cin>>n;
		if(n == -1)
			break;
		insertTail(head , n);
	}
	return head;
}
node* twosorted(node *&a, node *&b)
{
	
	node *it1 = a;	
	node *it2 = b;
	node *c = NULL, *head_c = NULL;
	int flag;
	while(it1 != NULL and it2 != NULL)
	{
		if(it1->data <= it2->data)
		{
			if(head_c == NULL)
			{
				head_c = it1;
				c = it1;
			}
			else
			{
				c->next = it1;
				c = it1;
			}
			if(it1->next == NULL)
			{
				flag = 1;
			}
			it1 = it1->next;
		}
		else 
		{
			if(head_c == NULL)
			{
				head_c = it2;
				c = it2;
			}
			else
			{
				c->next = it2;
				c = it2;
			}
			if(it2->next == NULL)
			{
				flag = 2;
			}
			it2 = it2->next;
		}
		
	}
	
	if(flag == 1)
	{
		while(it2 !=NULL)
		{
			c->next = it2;
			c = it2;
			it2 = it2->next;
		}
	}
	else if(flag == 2)
	{
		while(it1 !=NULL)
		{
			c->next = it1;
			c = it1;
			it1 = it1->next;
		}
	}
	c->next = NULL;
	return head_c;
	
}

int main()
{	cout<<"enter the first linked list:"<<endl;
	node *head1 = take_input();
	cout<<"enter the second linked list"<<endl;
	node *head2 = take_input();
	cout<<"entered linked lists:"<<endl;
	display(head1);
	display(head2);
	cout<<"sorted merged:"<<endl;
	display(twosorted(head1,head2));
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
