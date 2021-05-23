#include<iostream>
#include<climits>
#include<algorithm>
#include<numeric>
using namespace std;
bool isPossible(int a[], int n, int m, int mid)
{
	int sum = 0;
	int students = 1;
	for(int i=0;i<n;i++)
	{
		if(a[i]+sum > mid)
		{
			students+=1;
			sum=a[i];
			if(m < students)
				return false;
		}
		else
		{
			sum+=a[i];
		}
	}
	
	return true;
}
int get_ans(int a[],int n, int m)
{
	int start = a[n-1];
	int end = accumulate(a,a+n,0);
	int ans = INT_MAX;
	while(start<=end)
	{
		int mid = (start+end)/2;
		//cout<<mid<<endl;
		if(isPossible(a,n,m,mid))
			{	
				ans = min(ans,mid);
				//cout<<"Answer:"<<ans<<"|tRUE"<<endl;
				end = mid-1;
			}
		else
			start = mid+1;
	}
	
	return ans;
}
int main()
{
	int a[] = {10,20,30,40};
	int n = 4;
	int m = 2;
	
	cout<<"Answer is:"<<get_ans(a,n,m)<<endl;
	return 0;
}
