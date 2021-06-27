#include<bits/stdc++.h>
using namespace std;
int totalways(int n)
{
	if(n == 0)
		return 1;
	if(n<0)
		return 0;
	return totalways(n-1) + totalways(n-2) + totalways(n-3);
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Total ways :"<<totalways(n)<<endl;
	return 0;
}
