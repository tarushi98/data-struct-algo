#include<bits/stdc++.h>
using namespace std;
char keypad[][10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void keypad_combinations(char input[],char output[], int i, int j)
{
	if(input[i] == '\0' or j == 3)
	{
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}
	
	int id = input[i] - '0';
	for(int k = 0;keypad[id][k] != '\0';k++)
	{
		output[j] = keypad[id][k];
		keypad_combinations(input,output,i+1,j+1);
	}
}
int main()
{
	char input[100];
	cout<<"Enter numbers:";
	cin>>input;
	char output[100];
	cout<<"Solutions:"<<endl;
	keypad_combinations(input,output,0,0);
	return 0;
}
	
