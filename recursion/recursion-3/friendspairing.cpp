#include<bits/stdc++.h>
using namespace std;
int partyy(int n)
{
	if(n == 0)
		return 1;
	if(n<0)
		return 0;
	return partyy(n-1) + (n-1)*partyy(n-2);
}
int main()
{
	int n;
	cout<<"Enter friends:";
	cin>>n;
	cout<<"Answer:"<<partyy(n)<<endl;
	return 0;
}
