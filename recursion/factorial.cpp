#include<iostream>
using namespace std;
int factorial(int x)
{
	if(x == 1)
		return 1;
	else
		return x*factorial(x-1);
}
int main()
{
	int a;
	cout<<"enter a:";
	cin>>a;
	cout<<"Required Factorial is:"<<factorial(a)<<endl;
	return 0;
}
