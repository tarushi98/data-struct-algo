#include<iostream>
#include<cstring>
using namespace std;
bool isPalindorme(char a[])
{
	int start = 0;
	int end = strlen(a);
	
	while(start <=end)
	{
		if(a[start] == a[end])
		{
			start++;
			end--;
		}
		else
		{
			return false;
		}
	}
	
	return true;
}
int main()
{	char a[100];
	cout<<"Enter string:";
	cin.getline(a,100);
	if(isPalindorme(a))
		cout<<"Palindrome it is.";
	else
		cout<<"Not a Palindrome.";
	
	return 0;
}
