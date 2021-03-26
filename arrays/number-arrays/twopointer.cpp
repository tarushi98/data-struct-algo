#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{	cout<<"Enter"<<i<<":";
		cin>>a[i];
	}
	
	int k;
	cout<<"Enter k:";
	cin>>k;
	
	int start = 0,flag=0;
	int end = n-1;
	while(start<=end)
	{	int sum = a[start]+a[end];
		if(sum == k)
		{
			cout<<"Found nos at index :"<<start<<" & "<<end<<endl;
			flag = 1;
			break;
		}
		else if(sum > k)
		{
			end--;
		}
		else
		{
			start++;
		}
	}
	
	if(flag == 0)
	{
		cout<<"Sorry such a combination does not exist"<<endl;
	}
	
	return 0;
}
	
	
