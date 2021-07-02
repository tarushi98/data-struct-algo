#include<bits/stdc++.h>
using namespace std;
int profit(int n, int c , int wt[], int prices[])
{
	if(n == 0 or c == 0)
	    	return 0;
	int inc,exc;
	inc = exc = 0;
	if(wt[n-1]<=c)
		inc = prices[n-1] + profit(n-1,c-wt[n-1],wt,prices);
	exc = profit(n-1,c,wt,prices);
	return max(inc,exc);

}
		
int main()
{
	int wt[] = {1,2,3,5};
	int prices[] = {40,20,30,100};
	int c = 7;
	int n = 4;
	cout<<"Answer:"<<profit(n,c,wt,prices)<<endl;
	return 0;
}
