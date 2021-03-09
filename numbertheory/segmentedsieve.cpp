#include<iostream>
#include<vector>
using namespace std;
vector<int> primes;
void sieve()
{
	int p[100]={0};
	int n=100;
	for(int i=2;i<n;i++)
	{	//cout<<p[i]<<endl;
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
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	sieve();
	int arr[(b-a)+1]={0};
	//cout<<"Size:"<<primes.size();
	for(int x : primes)
	{	//cout<<"Hello";
		if(x*x > b)
			break;
		int start =  (a/x)*x;
		if(x>=a and x <=b)
			start = 2*start;
		//cout<<"Start:"<<start<<" "<<b<<endl;
		for(int i=start;i<=b;i+=x)
			{//cout<<i<<endl;
			arr[i]=1;
			}
	}
	
	for(int i=a;i<=b;i++)
	{	//cout<<arr[i-a]<<endl;	
		if(arr[i]==0 and i!=1)
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
	
