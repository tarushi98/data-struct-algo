#include<iostream>
using namespace std;
int product(int a, int b)
{
	if( b == 1)
		return a;
	return a + product(a,b-1);
} 
int main()
{
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	cout<<"Answer is:"<<product(a,b)<<endl;
	return 0;
}
