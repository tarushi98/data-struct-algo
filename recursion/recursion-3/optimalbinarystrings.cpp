#include<iostream>
using namespace std;
int get_ans(int n)
{
	if(n == 0)
		return 1;
	if(n == 1)
		return 2;
	
	return get_ans(n-1) +  get_ans(n-2);
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Total Possible Ways:"<<get_ans(n)<<endl;
	return 0;
}

