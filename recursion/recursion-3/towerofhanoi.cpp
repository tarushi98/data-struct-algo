#include<bits/stdc++.h>
using namespace std;
void move(int n, char src , char helper, char dest)
{
	if(n == 0)
		return;
	move(n-1,src,dest,helper);
	cout<<"Shift "<<n<<" from "<<src<<" to "<<dest<<endl;
	move(n-1,helper,src,dest);
}
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	cout<<"Solution:"<<endl;
	move(n,'A','B','C');
	return 0;
}
