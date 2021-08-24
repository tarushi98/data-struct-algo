#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b)
{    return a>b; }
void heapify(int index,vector<int> &arr,int size)
{       int left = 2*index;
            int right = left+1;

            int currIndex = index;
            int last = size-1;

            if(left<=last and compare(arr[left],arr[currIndex]))
                currIndex = left;

            else if(right<=last and compare(arr[right],arr[currIndex]))
                currIndex = right;
            
            if(currIndex != index)
            {
                swap(arr[currIndex],arr[index]);
                heapify(currIndex,arr,size);
            }
}
void make_heap(vector<int> &arr)
{
        for(int i = (arr.size()-1)/2;i>=1;i--)
        {
                heapify(i,arr,arr.size());
        }
}
void heapsort(vector<int> &arr)
{
    make_heap(arr);
    int n = arr.size();
    while(n>1)
    {
        swap(arr[1],arr[n-1]);
        n-=1;
        heapify(1,arr,n);
    }

    for(auto x: arr)
            cout<<x<<" ";
  
}
int main() {
    vector<int> arr = {-1,10,20,5,6,1,8,9,4};
    heapsort(arr);
    return 0;

}

