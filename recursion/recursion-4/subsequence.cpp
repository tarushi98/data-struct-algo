#include<bits/stdc++.h>
using namespace std;
void get_subsequence(char a[],char output[],int i, int j)
{
	if(a[i] == '\0')
	{
		output[j] = '\0';
		cout<<output<<", ";
		return;
	}
	output[j] = a[i];
	get_subsequence(a,output,i+1,j+1);
	get_subsequence(a,output,i+1,j);
}
		
int main()
{
	char a[100];
	cout<<"Enter string:";
	cin>>a;
	char output[100];
	get_subsequence(a,output,0,0);
	cout<<endl;
	return 0;
}
