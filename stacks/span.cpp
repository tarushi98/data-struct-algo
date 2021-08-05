#include<iostream>
#include<stack>
using namespace std;
void stockSpan(int prices[], int n, int span[])
{
	stack<int>s;
	s.push(0);
	span[0] = 1;
	for(int i=1;i<n;i++)
	{
		while(!s.empty() and prices[s.top()] <= prices[i])
			s.pop();
		if(!s.empty())
			span[i] = i - s.top();
		else
			span[i] = i+1;
		s.push(i);
	}
}
		
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<i<<"Enter:";
		cin>>a[i];
	}
	
	int span[n];
	stockSpan(a,n,span);
	for(int i=0;i<n;i++)
		cout<<span[i]<<" ";
	return 0;
} 
	
	
