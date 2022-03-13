#include <iostream>
#include<vector>
using namespace std;
vector<int> dp(100,0);
int fib(int N)
{
    if(N<=0)
        return 0;
    else if(dp[N]!=0)
        return dp[N];
    
    dp[N] = fib(N-1)+fib(N-2);
    return dp[N];

}
int main() {
    dp[0] = 0;
    dp[1] = 1;
    int x;
    cin>>x;
    cout<<fib(x);
    return 0;
}

