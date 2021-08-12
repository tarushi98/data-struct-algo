#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	char a[] = "abcdefcghijkzyxz";
	cout<<"String:"<<a<<endl;
	int arr[26];
	for(int i=0;i<26;i++)
		arr[i] = -1;
	int i = 0,j = 0;
	int maxx = 1;
	while(i!=strlen(a))
	{   
	     int x = a[i] - 'a'; 
	     if(arr[x]==-1)
	     {		
	     		arr[x] = i;
	     }
	     else
	     {		
			j = arr[x]+1;
			arr[x] = i;
	     }
	     int s = (i-j)+1;
	     maxx = max(s,maxx);
	     i+=1;
	 }
	 
	 cout<<"Maximum substring:"<<maxx<<endl;
	 return 0;
}
	     
	     		
			
