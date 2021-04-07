#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *str, char delim)
{
	static char*input = NULL;
	if ( str == NULL )
	{
		input = str;
	}
	
	if(input == NULL)
	{
		return NULL;
	}
	
	char *output = new char[strlen(input) + 1];
	int i;
	for(i = 0 ; input[i]!='\0';i++)
	{	if(input[i] == delim)
		{
			output[i] = '\0'; 
			input = input+i+1;
			return output;
		}
		 
		output[i] = input[i];
	}
	
	output[i] = '\0';
	input = NULL;
	return output;
}
		

int main()
{
	char str[] = "Today, is a rainy day!";
	cout<<str<<endl;
	char *ptr = mystrtok(str,',');
	cout<<ptr<<endl;
	cout<<"Hello";
	while(ptr!=NULL)
	{
		ptr = mystrtok(NULL,' ');
		cout<<ptr<<endl;
		
	}
	return 0;
}
