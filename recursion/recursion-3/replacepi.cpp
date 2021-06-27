#include<bits/stdc++.h>
using namespace std;
string s = "";
void replacepi(char a[], int n)
{
	if(n == 0)
		return;
	if(a[0] == 'p' and a[1] == '\0')
		{	s+=a[0];
			return;
		}
	
	if(a[0] == *("p"))
		{ if(a[1] == *("i"))
			s+="3.14";
			replacepi(a+2,n-2);
		}
	else
	{
		s+=a[0];
		replacepi(a+1,n-1);
	}
}
void replacepi_inplace(char a[], int i)
{
	if(a[i] == '\0')
		return;
	if(a[i] == 'p' and a[i+1] == '\0')
		return;
	if(a[i] == 'p' and a[i+1] == 'i')
	{
		int j = i+2;
		while(a[j] != '\0')
			j++;
		while(j >= i+2)
		{
			a[j+2] = a[j];
			j--;
		}
		a[i] = '3'; a[i+1] = '.'; a[i+2] = '1'; a[i+3] = '4';
		replacepi_inplace(a,i+4);
	}
	else
	{
		replacepi_inplace(a,i+1);
	}
}
	
int main()
{
	char a[100];
	cout<<"Enter string:";
	cin>>a;
	replacepi(a,strlen(a));
	s+="\0";
	replacepi_inplace(a,0);
	cout<<"Required String is:"<<s<<endl;
	cout<<"Inplace Required String:"<<a<<endl;
	return 0;
}
	
	
