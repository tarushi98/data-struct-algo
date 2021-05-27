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
node* kthnode(node *head , int k)
{
	if(head == NULL or k == 0)
	 	return head;

	node *fast = head , *slow = head;
	while(fast!=NULL)
	{
		if(k == 0)
		{	slow = slow->next;}
		else
		{
			k--;
		}
		fast = fast->next;
	}
	return slow;
}
int main()
{	int k;
	node *head = take_input();
	display(head);
	cout<<"Enter k:";
	cin>>k;
	cout<<"Kth node from end:"<<kthnode(head,k)->data<<endl;
	return 0;
}
	
