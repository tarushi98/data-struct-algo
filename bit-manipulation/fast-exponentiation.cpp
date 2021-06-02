#include<iostream>
using namespace std;
int exponentiate(int a , int n)
{	int ans = 1;
	while(n)
	{	
		if(n&1)
		{
			ans*=a;
		}
		a*=a;
		n = n>>1;
	}
	return ans;
}
int main()
{
	int n,a;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter n:";
	cin>>n;
	cout<<"a^n = "<<exponentiate(a,n)<<endl;
	return 0;
}
	
