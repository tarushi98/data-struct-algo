#include<bits/stdc++.h>
using namespace std;
void get_brackets(char output[],int n , int current, int open, int close)
{
	if(current == 2*n)
	{
		output[current] = '\0';
		cout<<output<<endl;
		return;
	}

	if(open<n)
	{	output[current] = '(';
		get_brackets(output,n,current+1,open+1,close);
	}
	if(close<open)
	{	output[current] = ')';
		get_brackets(output,n,current+1,open,close+1);
	}
}
		
int main()
{
	int a;
	cout<<"Enter number of pairs:";
	cin>>a;
	char output[100];
	get_brackets(output,a,0,0,0);
	//cout<<endl;
	return 0;
}
