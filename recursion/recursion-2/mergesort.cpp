#include<iostream>
#include<algorithm>
using namespace std;
void merge(int a[],int start,int end)
{	cout<<start<<" "<<end<<endl;
	int mid = (start+end)/2;
	int i = start , j =mid+1;
	int temp[100] = {0};
	int k = start;
	while(i<=mid && j<=end)
	{
		if(a[i] > a[j])
		{   temp[k] = a[j];
			j++; k++;}
		
		else
		{ temp[k] = a[i];k++;i++;}
	}
	
	while(i<=mid)
		{temp[k] = a[i];i++;k++;}
	
	while(j<=end)
		{temp[k] = a[j];k++;j++;}

	
	for(int i = start;i<=end;i++)
		a[i] = temp[i];
}
			

void merge_sort(int a[],int start,int end)
{	
	if(start>=end)
	{ return;}
	cout<<start<<" "<<end<<endl;
	int mid = (start+end)/2;
	//break it down into tiny pieces
	merge_sort(a,start,mid); // first half the array breaks down 
	merge_sort(a,mid+1,end); //after first half is down breaking down , we break down the second
	
	merge(a,start,end); // once the second one breaks down we return to the first call of the function and merge
	
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
	merge_sort(a,0,n-1);
	cout<<"Sorted Array:";
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<endl;
	return 0;
}
	
