#include<iostream>
#include<vector>
#include<deque>
using namespace std;

void maxwindow(int a[], int n, int k)
{
	deque<int> q;
	int i;
	for(i=0;i<k;i++)
	{
		while(!q.empty() and a[i] > a[q.front()])
			q.pop_back();
		q.push_back(i);
	}
	for(;i<n;i++)
	{
		cout<<a[q.front()]<<" ";
		// contract
		while(!q.empty() and q.front() <= i-k)
			q.pop_front();
		//remove useless things
		while(!q.empty() and a[i] >= a[q.back()])
			q.pop_back();
		// add
		q.push_back(i);
	}
	
	cout<<a[i-1];
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
	int k;
	cout<<"Enter k:";
	cin>>k;
	
	maxwindow(a,n,k);
	
	cout<<endl;
	
	return 0;
}
