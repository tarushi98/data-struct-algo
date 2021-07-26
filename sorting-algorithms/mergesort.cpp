#include<iostream>
using namespace std;
void merge(int arr[], int start, int end)
{
	if(start>=end)
		return;
	int i = start;
	int k = start;
	int mid = (start+end)/2;
	int j = mid+1;
	int temp[1000];
	while(i<=mid and j<=end)
	{
		if(arr[i]<=arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	
	while(i<=mid)
		temp[k++] = arr[i++];
	while(j<=end)
		temp[k++] = arr[j++];
	
	for(int m=start;m<=end;m++)
		arr[m] = temp[m];
}
		
void mergesort(int arr[], int start, int end)
{
	if(start>=end)
		return;
	int mid = (start+end)/2;
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	merge(arr,start,end);
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<i<<"Enter:";
		cin>>arr[i];
	}
	
	mergesort(arr,0,n-1);
	cout<<"Sorted Array:";
	for(int i = 0;i<n;i++)
		cout<<arr[i]<<",";
	cout<<"End"<<endl;
	return 0;
}
