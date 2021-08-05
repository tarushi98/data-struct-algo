#include<iostream>
using namespace std;
class Queue{

	private:
	int a[100];
	int front = -1;
	int rear = -1;
	int n;
	public:
	Queue(int size)
	{
		n = size;
	}
	bool isFull()
	{
		if(rear == n)
			return true;
		return false;
	}
	bool isEmpty()
	{
		if(front == -1 and rear == -1)
			return true;
		return false;
	}
	void push(int x)
	{
		if(isFull())
		{
			cout<<"Queue Full";
			return;
		}	
		if(front == -1 and rear == -1)
		{
			front+=1;
			rear+=1;
			a[front] = x;
			return;
		}
		rear = (rear+1)%n;
		a[rear] = x;
	}
	
	void pop()
	{
		if(isEmpty())
		{	cout<<"Queue is Empty";
			return;
		}
		front = (front+1)%n;
	}
	void viewTop()
	{
		if(isEmpty())
		{
			cout<<"Queue is Empty";
			return;
		}

		cout<<a[front]<<endl;
	}
	void viewQueue()
	{
		if(isEmpty())
		{
			cout<<"Empty";
			return;
		}
	
		for(int i = front;i<=rear;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
};
int main()
{	int n;
	cout<<"Enter n:";
	cin>>n;
	Queue q(n);
	int y = 1;
	do
	{	int x;
		cout<<"Enter element:";
		cin>>x;
		q.push(x);
		cout<<"Add more?";
		cin>>y;
	}while(y);
	cout<<"Top most:";q.viewTop();
	q.pop();
	q.viewTop();
	q.viewQueue();

	return 0;
}
	
	
