#include<iostream>
using namespace std;
int chabbi_lele(int key, int a[] , int n)
{
	int start = 0;
	int end = n-1;
	
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(a[mid] == key)
			return mid;
		else if(a[start]<=a[mid])
		{
			if(a[start]<=key and a[mid]>=key)
				end = mid-1;
			else
				start = mid+1;
		}
		else
		{
			if(a[mid]<=key and a[end]>=key)
				start = mid+1;
			else
				end=mid-1;
		}
	}
	
	return -1;
} 
int main()
{	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<i<<"enter:";
		cin>>a[i];
	}
		
		
	int key;
	cout<<"Enter key:";
	cin>>key;
	cout<<"Chabbi hai @:"<<chabbi_lele(key,a,n)<<endl;
	return 0;
}
