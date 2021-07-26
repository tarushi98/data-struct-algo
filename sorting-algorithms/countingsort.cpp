#include<iostream> 
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int arr[n];
	int maxx = INT_MIN;
	for(int i=0;i<n;i++)
	{
		cout<<i<<"Enter:";
		cin>>arr[i];
		maxx = max(maxx,arr[i]);
	}
	
	int counting[maxx+1] = {0};
	for(int i = 0;i<n;i++)
	{
		counting[arr[i]]+=1;
	}
	for(int i=0;i<=maxx;i++)
	{
		if(counting[i]>0)
		{
			for(int j=0;j<counting[i];j++)
				cout<<i<<",";
		}
	}
	cout<<endl;
	return 0;
}
