#include<iostream>
using namespace std;
int firstocc(int a[],int n, int key)
{
	if(n == 0)
		return -1;
	else if(a[0] == key)
		return 0;
	
	int i = firstocc(a+1,n-1,key);
	if(i == -1)
		return -1;
	return i+1;
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
	cout<<"Element found at index:"<<firstocc(a,n,key)<<endl;
	return 0;
}
