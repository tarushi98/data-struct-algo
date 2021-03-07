#include<iostream>
#include<vector>
using namespace std;
vector<int> primes;
void sieve(int p[], int n)
{
	for(int i=2;i<n;i++)
	{	
		if(p[i]==0)
		{
			for(int j=i*i;j<n;j+=i)
			{
				p[j]=1;
			}
		}
	}
	p[1]=p[0]=1;
	for(int i=0;i<n;i++)
	{
		if(p[i]==1)
			p[i]=0;
		else
		  	p[i]=1;
	}
	
}
void c_sieve(int csum[], int p[],int n)
{
	for(int i=1;i<n;i++)
		csum[i]=csum[i-1]+p[i];
}

int main()
{
	int a,b;
	int p[100]={0};
	int csum[100]={0};
	sieve(p,100);
	c_sieve(csum,p,100);
	cout<<"Enter a and b:";
	cin>>a>>b;
	cout<<"Answer:"<<csum[b]-csum[a-1]<<endl;
	return 0;
}
	
