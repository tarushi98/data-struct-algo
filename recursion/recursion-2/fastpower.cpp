#include<iostream>
using namespace std;
int fast_power(int a , int power)
{
	if(power == 0)
		return 1;
	
	int small_ans = fast_power(a,power>>1);
	small_ans *=  small_ans;
	
	if(power&1)
		return a*small_ans;
	return small_ans;
}
int main()
{
	int n,p;
	cout<<"Enter number and power:";
	cin>>n>>p;
	
	cout<<"Answer:"<<fast_power(n,p)<<endl;
	return 0;
}
