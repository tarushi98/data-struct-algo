#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	int a[n];
	int rem[n]={0};
	int t;
	cout<<"\nEnter T:";
	cin>>t;
	cout<<"\nEnter array:"<<endl;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter"<<i<<":";
		cin>>a[i];
		sum+=a[i];
		rem[sum%t]+=1;
	}
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=(rem[i]*(rem[i]-1))/2;
	}
	cout<<"Number of Good Subarrays:"<<ans;
	return 0;
}
