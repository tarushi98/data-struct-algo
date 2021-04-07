#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter total number of elements:";
	cin>>n;
	int start = 0;
	int end = n-1;
	int a[n];
	
	for(int i = 0;i<n;i++)
	{
		cout<<i<<"Enter:";
		cin>>a[i];
	}
	int key;	
	cout<<"Enter key:";
	cin>>key;
	int mid,flag=0;
	while(start<=end)
	{
		mid = (start+end) / 2;
		if(a[mid] == key)
		{
			flag = 1;
			break;
		}
		else if(a[mid] > key)
		{
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
	}
	
	if(flag == 1)
	{	cout<<"Element found at index:"<<mid<<endl;}
	else
	{
		cout<<"Element not in array"<<endl;
	}
	
	return 0;
}	
	
