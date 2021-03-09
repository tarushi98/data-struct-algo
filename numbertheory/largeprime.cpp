#include<iostream>
#include<vector>
using namespace std;
vector<int> primes;
int p[100];
int n=100;
void sieve()
{	
	for(int i=2;i<n;i++)
	{
		if (p[i]==0)
		{	primes.push_back(i);
			for(int j=i*i;j<n;j+=i)
				p[j]=1;
		}
	}
}
bool bada_prime(int number)
{
	if (number<100)
	{	
		return p[number];
	}
	else
	{
		for(int i=0;primes[i]*primes[i]<number;i++)
		{
			if(number%primes[i]==0)
				return false;
		}
	}
	return true;
}
int main()
{
	int number;
	sieve();
	cout<<"Enter the number:";
	cin>>number;
	cout<<"The number is a prime:"<<bada_prime(number)<<endl;
	return 0;
}
