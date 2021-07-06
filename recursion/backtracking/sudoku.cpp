#include<iostream>
#include<cmath>
using namespace std;
bool cansolve(int matrix[][9], int n, int i , int j, int number)
{
	for(int x = 0;x<n;x++)
	{
		if(matrix[x][j] == number or matrix[i][x] == number)
			return false;
	}
	
	int rn = sqrt(n);
	int sx =(i/rn)*rn;
	int sy = (j/rn)*rn;
	for(int x = sx;x<sx+rn;x++)
        { for(int y = sy;y<sy+rn;y++)
       	 {	if(matrix[x][y] == number)
        			return false;
        	 }
        }
        
        return true;
}
bool solvesudoku(int matrix[][9], int n, int i, int j)
{
	if(i == n)
	{
		return true;
	}
	
	if(j == n)
		solvesudoku(matrix,n,i+1,0);
	if(matrix[i][j] !=0)
		solvesudoku(matrix,n,i,j+1);
	
	for(int x=1;x<=n;x++)
	{
		if(cansolve(matrix,n,i,j,x))
		{	matrix[i][j] = x;
			bool solve = solvesudoku(matrix,n,i,j+1);
			if(solve)
				return true;
		}
	}
	matrix[i][j] = 0;
	return false;
}
int main()
{
	int matrix[9][9] = 
	{
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};
	cout<<"Given Sudoku:"<<endl;
	for(int m = 0;m<9;m++)
		{ for(int p = 0;p<9;p++)
		  { cout<<matrix[m][p]<<" ";} 
		  cout<<endl;
		}
	cout<<"Solving Sudoku...."<<endl;
	bool value = solvesudoku(matrix,9,0,0);
	cout<<"Solution:"<<value<<endl;
	for(int m = 0;m<9;m++)
		{ for(int p = 0;p<9;p++)
		  { cout<<matrix[m][p]<<" ";} 
		  cout<<endl;
		}
	return 0;
}
