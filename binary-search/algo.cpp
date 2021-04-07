#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,4,4,4,5,6,8};
	int n = sizeof(arr) / sizeof(int);
	int key;
	cout<<"Enter key:";
	cin>>key;
	bool present = binary_search(arr,arr+n,key);
	if(present)
	{
		cout<<"Present!"<<endl;
	}
	else
	{
		cout<<"Absent!"<<endl;
	}
	
	auto lowerbound = lower_bound(arr,arr+n,key);
	auto upperbound = upper_bound(arr,arr+n,key);
	
	cout<<"total occurences:"<<upperbound-lowerbound<<endl;
	return 0;
}
