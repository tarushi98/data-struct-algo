#include<iostream>
#include<stack>
#include<climits>
using namespace std;
int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	int x = INT_MIN;
	while(!s.empty())
	{
		if(x < s.top())
			x = s.top();
	
		s.pop();
	}
	
	cout<<"Maximum element:"<<x<<endl;
	return 0;
}
