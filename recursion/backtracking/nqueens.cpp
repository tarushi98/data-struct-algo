#include<iostream>
using namespace std;
bool canPlace(int board[][4], int n, int row, int col)
{
	for(int i = 0;i<n;i++)
	{
		if(board[row][i] == 1 or board[i][col] == 1)
			return false;
	}
	int i = row, j = col;
	while(i>=0 and j>=0)
	{	if(board[i][j] == 1)
			return false;
		i-=1;
		j-=1;
	}
	i = row; j = col;
	while(i>=0 and j<n)
	{
		if(board[i][j] == 1)
			return false;
		i-=1;
		j+=1;
	}
	return true;
}
		   
	
bool Nqueens(int a[][4],int n,int i)
{
	if( i == n)
	{
		for(int i=0;i<n;i++)
		{	for(int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}cout<<endl;
		}
		cout<<endl;
		return false;
	}

	for(int j=0;j<n;j++)
	{  
		if(canPlace(a,n,i,j))
		{  a[i][j] = 1;
		   if(Nqueens(a,n,i+1))
		   	return true;
		}
		a[i][j] = 0;
	}
	return false;
}
int main()
{	int a[4][4] = {0}; 

	bool poss = Nqueens(a,4,0);
	cout<<"Is it possible?"<<poss<<endl;
	return 0;
}
