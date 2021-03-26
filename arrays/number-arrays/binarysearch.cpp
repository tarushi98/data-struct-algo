#include<iostream>
using namespace std;
int main()
{
	int a[] ={1,3,4,5,6,7,8,9};
	int key;
	cout<<"Enter the element you want to search:";
	cin>>key;
	int start = 0;
	int end = sizeof(a) / sizeof(int);
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(a[mid] == key)
		{
			cout<<"Key found at index:"<<mid<<endl;
			break;
		}
		else if(a[mid]>key)
		{
			end = mid-1;
		}
		else
		{
		 	start = mid+1;
		 }
	}
	cout<<"Not Found!"<<endl;
	return 0;
}
	
	
