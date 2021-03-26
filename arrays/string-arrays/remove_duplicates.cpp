#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter string:";
	cin.getline(a,100);
	
	if(strlen(a) == 1)
	
		cout<<"Your reqd string is:"<<a<<endl;
	else
	{
		
		int prev=0;
		for(int i=1;i<strlen(a);i++)
		{
			if(a[i] != a[prev])
			{
				prev++;
				a[prev]=a[i];
			}
		}
		
		a[prev+1] = '\0';
		
	}
	
	cout<<"your reqd string is:"<<a<<endl;
	return 0;
}
