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
	
	
	int k;
	cout<<"Enter k:";
	cin>>k;
	int i=0;
	int j =  n-1;
	int flag = 0;
	while(i<n and j>=0)
	{	
		if(a[i][j] == k)
		{
			cout<<"Found @ "<<i<<" "<<j<<"index"<<endl;
			flag = 1;
			break;
		}
		else if(a[i][j] < k)
		{
			i+=1;
		}
		else 
		{
			j-=1;
		}
	}
	
	if(flag == 0)
	{
		cout<<"Element not found!";
	}
	
	return 0;
}
