#include<iostream>
using namespace std;
int partition(int a[], int start, int end)
{
	int i = start-1;
	for(int j = start;j<end;j++)
	{
		if(a[j] <= a[end])
		{	i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[end]);
	return i+1;
}
void quicksort(int arr[], int start, int end)
{
	if(start>=end)
		return;
	int pivot = partition(arr,start,end);
	quicksort(arr,start,pivot-1);
	quicksort(arr,pivot,end);
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
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
