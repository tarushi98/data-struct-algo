#include<iostream>
#include<bitset>
using namespace std;
bitset<30> col,d1,d2;
void nqueen(int r, int n, int &ans)
{
	if(r == n) { ans+=1;}
	for(int c = 0;c<n;c++)
	{
		if(!col[c] and !d1[r+c] and !d2[r-c + n-1])
		{
			col[c] = d1[r+c] = d2[r-c + n-1] = 1;
			nqueen(r+1,n,ans);
			col[c] = d1[r+c] = d2[r-c + n-1] = 0;
		}
	}
}
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	int ans = 0;
	nqueen(0,n,ans);
	cout<<"Total solutions:"<<ans<<endl;
	return 0;
}
	
