#include<iostream>
#include<vector>
using namespace std;
vector<int> primes;
void sieve()
{	//cout<<"hello";	
	int N = 10000;
	int a[N] = {0};
	for(int i=2;i<N;i++)
	{
		if(a[i] == 0)
		{	primes.push_back(i);
			for(int j = i*i ; j<N;j+=i)
				a[j] = 1;
		}
	}
	
}
int main()
{	int a,b;
	cout<<"Enter a & b:";
	cin>>a>>b;
	int arr[(b-a)+1] = {0};
	sieve();
	for(int x : primes)
	{	
		if(x*x>b)
		   break;
		int start =  (a/x)*x;
		if(x>=a and x<=b)
			start = 2*x;
		for(int i = start;i<=b;i+=x)
			arr[i-a] = 1;
	}
	for(int i=a;i<=b ;i++)
	{	if(arr[i-a] == 0 and i!=1)
			cout<<i<<" ";
	}
	return 0;
	
}
	
