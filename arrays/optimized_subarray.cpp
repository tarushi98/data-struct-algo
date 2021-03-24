#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter"<<i<<":";
		cin>>a[i];
	}
	
	int csum[n];
	csum[0]=a[0];
	
	for(int i=1;i<n;i++)
	{	
		csum[i] = csum[i-1] + a[i];
	}
	int start,end,currentsum = 0,i,j, res=INT_MIN;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{	currentsum = 0;
			currentsum = csum[j] - csum[j-1];
		
			if(currentsum>res)
			{
				res = currentsum;
				start = i;
				end = j;
			}
		}
	}
	
	cout<<" Answer :"<<res<<"\nFound b/w "<<start<<" and "<<end;
	return 0;
}
