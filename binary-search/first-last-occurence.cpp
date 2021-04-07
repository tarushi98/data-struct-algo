#include<iostream>
using namespace std;
int first_occurence(int arr[], int n , int start, int end, int key)
{	int first;
	while(start<=end)
	{
		int mid = (start+end)/2;
		
		if(arr[mid] == key)
		{	first = mid;
			end = mid-1;
		}
		else if(arr[mid] > key)
		{
			end = mid-1;
		}
		else 
		{
			start = mid+1;
		}
	}
	
	return first;
}
int last_occurence(int arr[], int n , int start, int end, int key)
{	int last;
	while(start<=end)
	{
		int mid = (start+end)/2;
		
		if(arr[mid] == key)
		{	last = mid;
			start = mid+1;
		}
		else if(arr[mid] > key)
		{
			end = mid-1;
		}
		else 
		{
			start = mid+1;
		}
	}
	
	return last;
}
int main()
{	int key;
	int arr[] = {1,2,5,8,8,8,8,10,12};
	cout<<"enter key:";
	cin>>key;
	int n = (sizeof(arr) / sizeof(int));
	int start = 0;
	int end = n - 1;
	int mid;
	while( start <=end)
	{
		mid = (start+end)/2;
		if(arr[mid] == key)
		{	break; }
		else if(arr[mid] > key)
		{
			end = mid-1;
		}
		else 
		{
			start = mid+1;
		}
	}
	
	cout<<"First Occurence:"<<first_occurence(arr,n,0,mid-1,key)<<endl;
	cout<<"Last Occurence:"<<last_occurence(arr,n,mid+1,n-1,key)<<endl;
	return 0;
}
