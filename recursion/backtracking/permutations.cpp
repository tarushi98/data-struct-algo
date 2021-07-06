#include<iostream>
using namespace std;
void permutations(char input[],int i)
{
	if(input[i] == '\0')
	{
		cout<<input<<",";
		cout<<"Going up Now:";
		return;
	}
	
	for(int j = i;input[j] != '\0';j++)
	{	cout<<i<<","<<j<<"| ";
		swap(input[i],input[j]);
		permutations(input,i+1);
		cout<<i<<","<<j<<"/";
		swap(input[j],input[i]);
	}
}
int main()
{
	char input[100];
	cout<<"Enter string:";
	cin>>input;
	cout<<"Answers:";
	permutations(input,0);cout<<endl;
	return 0;
}
	
	
