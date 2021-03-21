#include<iostream>
using namespace std;
int gcd (int a, int b)
{
	return b==0? a: gcd(b,a%b) ;
}
int main()
{	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	int x = gcd(a,b);
	int lcm = (a*b) / x;
	cout<<"GCD:"<<x<<" LCM:"<<lcm<<endl;
	return 0;
}
