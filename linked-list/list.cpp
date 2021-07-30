#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l1;
	list<int> l2{1,2,3,4};
	list<string> l3{"apple", "animal"};
	l2.push_back(5);
	for(auto x: l2)
	 	cout<<x<<" ";
	cout<<endl;
	for(auto x:l3)
		cout<<x<<" ";
	l3.push_back("ice cream");
	cout<<endl;
	cout<<l2.front()<<endl;
	l2.pop_front();
	cout<<l2.front()<<endl;
	return 0;
}
