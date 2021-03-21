#include<iostream>
#include<vector>
using namespace std;
vector <int> primes;
void sieve()
{
	int p[100]={0};
	int n=100;
	for(int i=2;i<n;i++)
	{
		if(p[i]==0)
		{
			primes.push_back(i);
			for(int j=i*i;j<n;j+=i)
				p[j]=1;
		}
	}
	
}
int main()
{
	int n;
	cout<<"Enter number n:";
	cin>>n;
	vector <int> f;
	sieve();
	for(int i=0;primes[i]*primes[i]<n;i++)
	{
		if(n%primes[i]==0)
		{
			f.push_back(primes[i]);
			while(n%primes[i]==0)
			{ 	
				n/=primes[i];
			}
		}
	}
	if(n!=1)
	{
		f.push_back(n);
	}
	cout<<"Prime factors are:";
	for(int x: f)
	{
		cout<<x<<" ";
	}
	return 0;
}
