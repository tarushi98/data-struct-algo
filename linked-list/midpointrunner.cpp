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
		insertAtHead(head , n);
	}
	return head;
}
node* midpoint(node *head)
{
	node *slow = head , *fast = head->next;
	while(fast!= NULL and fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

int main()
{
	node *head = take_input();
	display(head);
	cout<<"The midpoint of Linked List is:"<<midpoint(head)->data<<endl;
	return 0;
}
	
	

