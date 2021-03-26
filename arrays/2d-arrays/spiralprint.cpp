#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter rw:";
	cin>>n;
	cout<<"Enter cl:";
	cin>>m;
	int a[n][m];
	for(int r=0;r<n;r++)
	{
		for(int c=0;c<m;c++)
		{
			cout<<r<<c<<"Enter :";
			cin>>a[r][c];
		}
	}
	
	for(int r=0;r<n;r++)
	{
		for(int c=0;c<m;c++)
		{
			cout<<a[r][c]<<" ";
		}
		
		cout<<endl;
	}
	
	
	cout<<"\nSpiral Print\n";
	int startrow = 0;
	int endrow = n-1;
	
	int startcol = 0;
	int endcol = m-1;
	
	while(startrow<=endrow and startcol<=endcol)
	{
		for(int i=startcol;i<=endcol;i++)
		{	cout<<a[startrow][i]<<" ";};
		startrow++;
		for(int i=startrow;i<=endrow;i++)
		{ cout<<a[i][endcol]<<" ";}
		endcol--;
		if(endcol>startcol)
		{
			for(int i=endcol;i>=startcol;i--)
			{ cout<<a[endrow][i]<<" ";}
			endrow--;
		}
		if(endrow>startrow)
		{
			for(int i=endrow;i>=startrow;i--)
			{cout<<a[i][startcol]<<" ";}
			startcol++;
		}
	}
	
	cout<<endl;
	return 0;
}
