#include<iostream>
using namespace std;
bool check(int mid , int a[] , int cows,int n)
{	//int n = sizeof(a)/sizeof(int);
	int ct = 1;
	int nextpos = a[0]+mid;
	for(int i=1;i<n;i++)
	{
		if(a[i]>=nextpos)
		{
			ct+=1;
			nextpos = a[i] + mid;\
			if(ct == cows)
				return true;
		}
	}
	
	return false;
}
	
int main()
{
	int a[] = {1,2,4,8,9};
	int n = 5;
	int s = 0;
	int e = a[n - 1] - a[0];
	int cows = 3;
	int ct=0;
	while(s<=e)
	{
		int mid = (s+e) / 2;
		if(check(mid,a,cows,n))
		{
			ct = mid;
			s = mid+1;
		}
		else
		{
			e = mid-1;
		}
	}
	
	cout<<"Total cows :"<<ct<<endl;
	
	return 0;
}
