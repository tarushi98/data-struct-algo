#include<iostream>
using namespace std;
int lastocc_front(int a[],int n, int key)
{
	if(n == 0)
		return -1;
	int i = lastocc_front(a+1,n-1,key);
	if( i == -1)
	{
		if(a[0] == key)
			return 0;
		else
			return -1;
	}
	return i+1;
}
int lastocc_back(int a[], int n, int key)
{
	if(n == 0)
		return -1;
	if(a[n-1] == key)
		return n-1;
	return lastocc_back(a,n-1,key);
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
	int key;
	cout<<"Enter key:";
	cin>>key;
	cout<<"Element found at index:"<<lastocc_front(a,n,key)<<endl;
	return 0;
} 
