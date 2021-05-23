#include<iostream>
using namespace std;
float sqrt( int n)
{
	int start = 0;
	int end = n;
	float ans=-1;
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(mid*mid == n)
			return mid;
		if(mid*mid <n)
		{
			ans = mid;
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
	}
	int p = 3;
	float inc = 0.1;
	for(int i = 1;i<=p;i++)
	{
		while(ans*ans <= n)
		{
			ans = ans+inc;
		}
		ans = ans -inc;
		inc/=10;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	cout<<"Sqrt is:"<<sqrt(n)<<endl;
	return 0;
}
