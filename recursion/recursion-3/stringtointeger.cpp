#include<bits/stdc++.h>
using namespace std;
int stringtointeger(char a[], int n)
{
	if(n == 0)
		return 0;
	int last_digit = a[n-1] - '0';
	int small_ans = stringtointeger(a,n-1);
	return (small_ans*10 + last_digit);
}
int main()
{
	char a[100];
	cout<<"Enter number:";
	cin>>a;
	cout<<"Required integer is:"<<stringtointeger(a,strlen(a))<<endl;
	return 0;
}
