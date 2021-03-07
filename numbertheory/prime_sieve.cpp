#include<iostream>
using namespace std;
void sieve(int p[], int n)
{
	for(int i=2;i<n;i++)
	{
		if(p[i]==0)
		{
			for(int j=i*i;j<n;j+=i)
				p[j]=1;
		}
	}
	p[1]=p[0]=0;
}
int main()
{
	int n;
	int p[100]={0};
	sieve(p,100);
	cout<<"Enter a number:";
	cin>>n;
	if(p[n]==1)
		cout<<"Not prime";
	else
		cout<<"Prime";
	return 0;
}	
	
