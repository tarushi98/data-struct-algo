#include<bits/stdc++.h>
#include<vector>
using namespace std;
char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void generate_strings(char input[], char output[], int i, int j)
{
	if(input[i] == '\0')
	{
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}
	int id = input[i] - '0';
	char ch = id + 'A' - 1;
	output[j] = ch;
	//cout<<id<<","<<output;
	generate_strings(input,output,i+1,j+1);
	if(input[i+1] != '\0')
		{	id = (input[i] - '0')*10 + input[i+1] - '0';
			if(id<=26)
			{
				output[j] = id + 'A' - 1;
				//cout<<id<<","<<output;
				generate_strings(input,output,i+2,j+1);
			}
		}
}
		
int main()
{
	char a[100];
	cout<<"Enter numbers:";
	cin>>a;
	char output[100];
	cout<<"Answers:"<<endl;
	generate_strings(a,output,0,0);
	return 0;
}
