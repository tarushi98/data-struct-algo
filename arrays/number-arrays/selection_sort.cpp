#include<iostream>
#include<algorithm>
using namespace std;
int main()
{	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{	cout<<"Enter"<<i<<":";
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++)
	{	int min_index = a[i];
		for(int j=i+1;j<n;j++)
		{	
			if(min_index>a[j])
			{
				min_index = a[j];
			}
		}
		
		swap(min_index,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
