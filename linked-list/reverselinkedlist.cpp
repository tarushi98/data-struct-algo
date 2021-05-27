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
void insertAtHead(node *&head , int data)
{
	
	if(head == NULL)
	{
		head = new node(data);
		return;
	}
	
	node *n = new node(data);
	n->next = head;
	head = n;
}
void reverseList(node *&head)
{
	if(head == NULL)
	{
		cout<<"Linked List is empty!"<<endl;
	}
	
	node *tmp = head , *prev = NULL;
	node *nextaddr;
	while(tmp != NULL)
	{
		nextaddr = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = nextaddr;
		//cout<<"next in list:"<<tmp->data;
	}
	head = prev;
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
int main()
{
 	node *head = NULL;
 	insertAtHead(head,3);
 	insertAtHead(head,2);
 	insertAtHead(head,1);
 	insertAtHead(head,0);
 	insertAtHead(head,6);
 	display(head);
 	reverseList(head);
 	display(head);
 	
}

