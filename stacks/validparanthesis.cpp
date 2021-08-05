#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
bool isvalidp(char s[])
{	stack<char>s1;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i] == '(')
			s1.push('(');
		else if(s[i] == ')' and s1.top() == '(')
			s1.pop();
	}
	if(s1.empty())
		return true;
	return false;
}
int main()
{
	char s[] = "(a*(2+b) - c*(d+e))";
	cout<<"String:"<<s<<endl;
	cout<<"Is valid?"<<isvalidp(s)<<endl;
	return 0;
}
