#include<iostream>
using namespace std;
int allocc(int a[], int i , int n , int key , int *out , int j)
{
	if(i == n)
		return j;
	if(a[i] == key)
	{
		out[j] = i;
		return allocc(a,i+1,n,key,out,j+1);
	}
	return allocc(a,i+1,n,key,out,j);
}
void alloc(int a[],int i,int n,int key)
{
	if(n == 0)
		return;
	if(a[i] == key)
		cout<<i<<" ,";
	return alloc(a,i+1,n-1,key);
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
	alloc(a,0,n,key);
	cout<<endl;
	int output[100];
	int count = allocc(a,0,n,key,output,0);
	cout<<"Total occurrences are:"<<count<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<output[i]<<",";
	}
	cout<<"End"<<endl;
	return 0;
} 
