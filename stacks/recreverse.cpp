#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int> &s, int x)
{
	if(s.empty())
	{
		s.push(x);
		return;
	}
	
	int top = s.top();
	s.pop();
	insertAtbottom(s,x);
	s.push(top);
}
void reverseStack(stack<int> &s)
{
	if(s.empty())
		return;
	int x = s.top();
	s.pop();
	reverseStack(s);
	insertAtbottom(s,x);
}
int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	reverseStack(s);
	cout<<"Reversed Stack:";
	while(!s.empty())
	{	
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}
