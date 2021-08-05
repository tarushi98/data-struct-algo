#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<char> q;
	int freq[27] = {0};
	
	char ch;
	cin>>ch;
	while(ch!='.')
	{
		q.push(ch);
		freq[ch-'a']+=1;
		
		while(!q.empty())
		{
			if(freq[q.front()]>1)
				q.pop();
			else
			{
				cout<<q.front()<<endl;
				break;
			}
		}
		if(q.empty())
			cout<<"-1"<<endl;
		cin>>ch;
	}
	
	return 0;
}
