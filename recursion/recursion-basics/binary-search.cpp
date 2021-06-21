#include<iostream>
using namespace std;
int binary_search(int arr[],int start, int end, int key)
{
	int mid = (start+end)/2;
	if(arr[mid] == key)
		return mid;
	if(start>end)
	{
		return -1;
	}
	
	else if(arr[mid] > key)
	{
		return binary_search(arr,start,mid-1,key);
	}
	else
	{
		return binary_search(arr,mid+1,end,key);
	}
}
int main()
{	int n;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cout<<i<<"Enter:";
		cin>>a[i];
	}
	int key;
	cout<<"enter key:";
	cin>>key;
	cout<<"Found at index:"<<binary_search(a,0,n,key)<<endl;
	return 0;
}
	
