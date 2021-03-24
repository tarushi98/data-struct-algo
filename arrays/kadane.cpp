#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
	int cs = 0,maxsum = INT_MIN;
	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{	cout<<"Enter"<<i<<":";
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cs = cs + a[i];
		if(cs<0)
			cs=0;
		maxsum = max(cs,maxsum);
	}
	
	cout<<maxsum;
	return 0;
}
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0,maxsum = INT_MIN;
        int flag=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                flag=1;
                break;
            }
        }
        if (flag == 0) return *max_element(nums.begin(),nums.end());
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                cs = cs + nums[i];
                if(cs<0)
                    cs=0;
                maxsum = max(cs,maxsum);
            }
        }
        return maxsum;
    }
};

*** Logic for arrays with negative subarrays ***

If array contains all negative nos , then the answer is the maximum element */
