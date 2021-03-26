#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n][n];
	for(int r=0;r<n;r++)
	{
		for(int c=0;c<n;c++)
		{
			cout<<r<<c<<"Enter :";
			cin>>a[r][c];
		}
	}
	
	for(int r=0;r<n;r++)
	{
		for(int c=0;c<n;c++)
		{
			cout<<a[r][c]<<" ";
		}
		
		cout<<endl;
	}
	
	cout<<"\nWave print\n";
	
	for(int c = 0; c<n;c++)
	{
		if(c&1)
			{
				for(int r=n-1;r>=0;r--)
				{
					cout<<a[r][c]<<" ";
				}
				
			}
		else
		{
			for(int r=0;r<n;r++)
				{
					cout<<a[r][c]<<" ";
				}
			
		}
	}
	cout<<endl;
	return 0;
}
