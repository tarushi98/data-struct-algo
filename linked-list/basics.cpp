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
void insertInMiddle(node *&head , int data , int pos)
{
	if(head == NULL)
	{
		if(pos == 1)
		{	insertAtHead(head,data);
			return;
		}
		
		cout<<"Linked List Empty!";
		return;
	}
	node *n = new node(data);
	node *tmp = head;
	int ct=0;
	while(tmp != NULL)
	{	ct+=1;
		if(ct == pos)
		{	n->next = tmp->next;
			tmp->next = n;
			break;
		}
		tmp = tmp->next;
	}
}
	
void insertTail(node *&head , int data)
{
	if(head == NULL)
	{
			insertAtHead(head,data);
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
			
void deleteHead(node *&head)
{
	if(head == NULL)
	{ cout<<"Linked List is Empty!";return;}
	node *tmp = head->next;
	delete head;
	head = tmp;
}
void deleteMid(node *&head , int pos)
{
 	if(head == NULL)
	{
		cout<<"Linked List is Empty";
		return;
	}
	else if(pos == 0)
	{ deleteHead(head);}
	node *tmp = head;
	node *prev;
	int ct = 0;
	while(tmp!=NULL)
	{	
		if(ct == pos)
		{
			prev->next = tmp->next;
			delete tmp;
			break;
		}
		prev = tmp;	
		tmp = tmp->next;
		ct+=1;
	}
}	
void deleteTail(node *&head)
{
	if(head == NULL)
	{
		cout<<"Linked List is Empty";
		return;
	}
	node *tmp = head;
	node *prev;
	while(tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	delete tmp;
}
void search(node *head , int key)
{	int id;
 	while(head != NULL)
	{
		if(head->data == key)
		{
			cout<<"Found! present at index :"<<id<<endl;
			return;
		}
		head = head->next;
		id+=1;
	}
	cout<<"Not Found"<<endl;
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
 	insertInMiddle(head,5,4);
 	display(head);
 	insertTail(head,8);
 	display(head);
 	deleteHead(head);
 	display(head);
 	deleteMid(head,2);
 	display(head);
 	deleteTail(head);
 	display(head);
 	search(head,3);
 }
 	
