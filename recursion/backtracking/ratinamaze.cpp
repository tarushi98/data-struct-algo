#include<iostream>
using namespace std;
bool get_paths(char maze[10][10],int soln[][10],int m, int n,int i,int j)
{
	if(i == m and j == n)
	{	soln[m][n] = 1;
		for(int i = 0;i<m;i++)
		{ for(int j = 0;j<n;j++)
			{cout<<soln[i][j]<<" ";}
		   cout<<endl;
		}
		cout<<endl;
		return true;
	}
	
	if(i>m or j>n)
		return false;
	if(maze[i][j] == 'X')
		return false;
	soln[i][j] = 1;
	
	bool rightside = get_paths(maze,soln,m,n,i,j+1);
	bool downside = get_paths(maze,soln,m,n,i+1,j);
	soln[i][j]=0;
	if(rightside or downside)
		return true;
	return false;
}	
int main()
{
	char maze[10][10] = {"0000","00X0","000X","0X00"};
	int soln[10][10] = {0};
	bool ans = get_paths(maze,soln,4,4,0,0);
	
	if(!ans)
		cout<<"No paths exist"<<endl;
	return 0;
}

