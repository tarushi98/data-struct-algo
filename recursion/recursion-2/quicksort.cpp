#include<bits/stdc++.h>
using namespace std;
int partition(int a[] , int start, int end)
{
	int i = start-1;
	for(int j = start;j<=end-1;j++)
	{
		if(a[j]<=a[end])
		{
			i+=1;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[end]);
	for(int k = 0;k<=end;k++)
	{
		cout<<a[k]<<" ";
	}
	cout<<endl;
	return i+1;

}
		 
void quicksort(int a[],int start,int end)
{
	if(start>=end)
		return;
	int pivot = partition(a,start,end);
	cout<<"Next Pivot Element:"<<a[pivot]<<endl;
	quicksort(a,start,pivot-1);
	quicksort(a,pivot,end);
	
}
	
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cout<<i<<" Enter:";
		cin>>a[i];
	}
	
	quicksort(a,0,n-1);
	cout<<"Sorted Array:"<<endl;
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	return 0;
		
}
