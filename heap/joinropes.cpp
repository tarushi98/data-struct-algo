#include <iostream>
#include<queue>
#include<string>
using namespace std;
int join_ropes(int ropes[],int n)
{
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
            pq.push(ropes[i]);
        int sum = 0;
        int even = 1;
        int csum = 0;
        while(!pq.empty())
        {
             sum+=pq.top();
             if(!(even&1))
             {   
                 pq.push(sum);
                 csum+=sum;
                 sum = 0;
             }
             even+=1;
             pq.pop();
        }

        return csum;
} 
int main() {
    int ropes[] = {4,3,2,6};
    int n = 4;
    cout<<"Answer:"<<join_ropes(ropes,n);
    return 0;
}

