#include<bits/stdc++.h>
using namespace std;

void print(int last_digit)
{
	switch(last_digit)
	{
		case 0 : cout<<"zero "; break;
		case 1 : cout<<"one ";break;
		case 2 : cout<<"two ";break;
		case 3 : cout<<"three ";break;
		case 4 : cout<<"four ";break;
		case 5 : cout<<"five ";break;
		case 6 : cout<<"six ";break;
		case 7 : cout<<"seven ";break;
		case 8 : cout<<"eight ";break;
		case 9 : cout<<"nine ";break;
	}
}
void numbertospelling(int n)
{
	if(n == 0)
		return;
	
	numbertospelling(n/10);
	int last_digit = n%10;
	print(last_digit);
}
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	cout<<"Answer:";numbertospelling(n);
	cout<<endl;
	return 0;
}
