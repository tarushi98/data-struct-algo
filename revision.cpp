#include<iostream>
using namespace std;
int DecimalToBinary(int n)
{
	int ans = 0;
	int p = 1;
	while(n)
	{
		int lastbit = (n&1);
		ans+=(lastbit*p);
		p*=10;
		n = n>>1;
	}
	return ans;	
}

int main()
{	int n;
	cout<<"Enter N";
	cin>>n;
	cout<<DecimalToBinary(n)<<endl;
	return 0;
	
}
	
