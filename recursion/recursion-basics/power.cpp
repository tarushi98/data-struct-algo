#include<iostream>
using namespace std;
int get_power(int n, int p)
{
	if( p == 0)
		return 1;
	return n*get_power(n,p-1);
}
int main()
{
	int n,p;
	cout<<"Enter n and p:";
	cin>>n>>p;
	cout<<"Answer is:"<<get_power(n,p)<<endl;
	return 0;
}
