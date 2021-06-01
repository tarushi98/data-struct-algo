#include<iostream>
using namespace std;
int get_set_bit(int n)
{
	int loc=0;
	while(n)
	{
		if(n&1)
		   { 
		     return loc;
		    }
		 loc+=1;
		 n = n>>1;
	}
	
	return -1;
}
		  
bool checksetbit(int n, int i)
{
	int mask = 1<<i;
	return n&mask;
}
int get_first_no(int arr[], int n, int setbit)
{	int ans = 0;
	if(setbit == -1)
		return -1;
	for(int i=0;i<n;i++)
	{
		if(checksetbit(arr[i],setbit))
			ans^=arr[i];
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	int zor = 0;
	for(int i=0;i<n;i++)
	{	cout<<i<<"Enter:";
		cin>>a[i];
		zor^=a[i];
	}
	int setbit = get_set_bit(zor);
	int no1 = get_first_no(a,n,setbit);
	if(no1 == -1)
	{
		cout<<"sorry ! not found";
	}
	else{
	int no2 = zor^no1;
	cout<<"Numbers are "<<no1<<" and "<<no2<<endl;
	}
	return 0;
	
}
	
	
	
	
