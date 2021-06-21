#include<iostream>
using namespace std;
void partition(int a[] , int start, int end)
{
		
		
}
		 
void quicksort(int a[],int start,int end)
{
	if(start>=end)
		return;
	int pivot = partition(a,start,end);
	quicksort(a,start,pivot);
	quicksort(a,pivot+1,end);
	
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
