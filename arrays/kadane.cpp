#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
	int cs = 0,maxsum = INT_MIN;
	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{	cout<<"Enter"<<i<<":";
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cs = cs + a[i];
		if(cs<0)
			cs=0;
		maxsum = max(cs,maxsum);
	}
	
	cout<<maxsum;
	return 0;
}
