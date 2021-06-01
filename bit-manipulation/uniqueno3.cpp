#include<iostream>
using namespace std;
int a[64] = {0};
void get_middle_arr(int n)
{	int i = 0;
	while(n)
	{
		a[i] += (n&1);
		i++;
		n=n>>1;
	}
}
int get_ans()
{	int p=1;
	int ans = 0;
	for(int i=0;i<64;i++)
	{	ans +=((a[i]%3)*p);
		p*=2;
	}
	return ans;
}
	
int main()
{	
	int n;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<i<<"Enter:";
		cin>>a[i];
		get_middle_arr(a[i]);
	}
	cout<<"The unique no is "<<get_ans()<<endl;
	return 0;
}
	
	
