#include<iostream>
#include<algorithm>
using namespace std;
void bubble_sort(int *a, int i, int j, int n)
{	
	if(i == n)
		return;
	else if(j == n)
	{
		return bubble_sort(a,i+1,0,n);
	}
	
	if(a[i]<a[j])
		swap(a[i],a[j]);
	
	bubble_sort(a,i,j+1,n);
	//return;
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
	bubble_sort(a,0,0,n);
	cout<<"Sorted Array:";
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
	
