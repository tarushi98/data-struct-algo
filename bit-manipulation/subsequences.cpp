#include<iostream>
#include<cmath>
using namespace std;
void generate_subsequences(char arr[],int x)
{	int i = 0;
	while(x)
	{
		if(x&1)
		{
			cout<<arr[i];
		}
		i+=1;
		x=x>>1;
	}
}
void get_nos(char arr[], int n)
{
	for(int i=0;i<pow(2,n);i++)
	{	cout<<i<<":";
		if(i == 0)
		{
			cout<<" "<<endl;
		}
		else
		{
			generate_subsequences(arr,i);cout<<endl;
		}
	}
}
int main()
{
	int n;
	cout<<"Enter no of chars:";
	cin>>n;
	char a[n];
	cout<<"enter string:";
	cin>>a;
	cout<<"Subsequences are:"<<endl;
	get_nos(a,n);
	return 0;
}

