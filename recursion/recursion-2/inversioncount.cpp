#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int start,int end)
{	//cout<<"Start:"<<start<<" , End:"<<end<<endl;
	int mid = (start+end)/2;
	int i = start;
	int j = mid+1;
	//sort(a,a+mid);
	//sort(a+(mid+1),a+end);
	int k = start;
	int temp[10000];
	int cnt = 0;
	while(i<=mid && j<=end)
	{	if(a[j]<a[i])
		{
			temp[k++] = a[j++];
			cnt+=(mid-i)+1;
			
		}
		else
		{
			temp[k++] = a[i++];
		}
	}
	while(i<=mid)
	{
		temp[k++] = a[i++];
	}
	while(j<=end)
	{
		temp[k++] = a[j++];
	}
	for(int i = start;i<=end;i++)
	{
		a[i] = temp[i];
		//cout<<a[i]<<" ";
	}
	//cout<<endl;
	return cnt;
}
		
int inversion_count(int a[],int start,int end)
{
	if(start>=end)
		return 0;
	int mid = (start+end)/2;
	int x = inversion_count(a,start,mid);
	int y = inversion_count(a,mid+1,end);
	int z = merge(a,start,end);
	
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
	
	cout<<"Total pairs :"<<inversion_count(a,0,n-1)<<endl;
	return 0;
}
