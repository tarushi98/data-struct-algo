#include<iostream>
#include<vector>
using namespace std;
class Stack
{
	private:
	vector<int> v;
	
	public:
	 
	void push(int data)
	{	v.push_back(data);}
	void pop()
	{	
		if(!v.empty())
			v.pop_back();
	}
	void print()
	{
		for(auto x: v)
		 	cout<<x<<" ";
		cout<<endl;
	}
	int top()
	{
		if(!v.empty())
		    return v[v.size()-1];
		return -1;
	}
};

	
int main()
{	int n;
	Stack s;
	cout<<"Enter n:";
	cin>>n;
	while(n--)
	{
		int k;
		cout<<"Enter k:";
		cin>>k;
		s.push(k);
	}
	s.print();
	s.pop();
	s.print();
	cout<<s.top()<<endl;
	return 0;
}
