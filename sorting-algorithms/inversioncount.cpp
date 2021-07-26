#include<iostream>
using namespace std;
int merge(int a[], int start, int end)
{
	if(start>=end)
		return 0;
	int i = start;
	int k = start;
	int temp[1000];
	int mid = (start+end)/2;
	int j = mid+1;
	int sum = 0;
	while(i<=mid and j<=end)
	{
		if(a[j]<a[i])
		{   temp[k++] = a[j++]; sum+=(mid-i)+1;}
		else
		   temp[k++] = a[i++];
	}
	while(i<=mid)
		temp[k++] = a[i++];
	while(j<=end)
		temp[k++] = a[j++];
	for(int i=start;i<=end;i++)
	{	a[i] = temp[i];}
	//cout<<"Sum:"<<sum<<endl;
	return sum;
}
int inversioncount(int arr[], int start, int end)
{
	if(start>=end)
		return 0;
	int mid = (start+end)/2;
	int x = inversioncount(arr,start,mid);
	int y = inversioncount(arr,mid+1,end);
	int z = merge(arr,start,end);
	return x+y+z;
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
	
	cout<<"Total inversions:"<<inversioncount(a,0,n-1)<<endl;
	return 0;
}
