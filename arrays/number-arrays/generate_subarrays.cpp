#include<iostream>
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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=i;k<j;k++)
			{
				cout<<a[k]<<" ";
			}cout<<endl;
		}
		cout<<endl;
	}
	
	return  0;
}
