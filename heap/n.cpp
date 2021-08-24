#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b)
{    return a>b; }
void heapify(int index,int arr[],int n)
{       int left = 2*index;
            int right = left+1;

            int currIndex = index;
            int last = n-1;

            if(left<=last and compare(arr[left],arr[currIndex]))
                currIndex = left;

            else if(right<=last and compare(arr[right],arr[currIndex]))
                currIndex = right;
            
            if(currIndex != index)
            {
                swap(arr[currIndex],arr[index]);
                heapify(currIndex,arr,n);
            }
}
void make_heap(int arr[],int n)
{
        for(int i = (n-1)/2;i>=1;i--)
        {
                heapify(i,arr,n);
        }

        for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    make_heap(arr,n);
    return 0;

}

