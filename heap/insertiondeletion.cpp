#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Heap
{   vector<int> arr;
    bool minHeap;
    bool compare(int a, int b)
    {
        if(minHeap)
            return a<b;
        return a>b;
    }
    void heapify(int index)
    {       int left = 2*index;
            int right = left+1;

            int currIndex = index;
            int last = arr.size()-1;

            if(left<=last and compare(arr[left],arr[currIndex]))
                currIndex = left;

            else if(right<=last and compare(arr[right],arr[currIndex]))
                currIndex = right;
            
            if(currIndex != index)
            {
                swap(arr[currIndex],arr[index]);
                heapify(currIndex);
            }
    }
    public:
    Heap(int default_size = 10,bool type = true)
    {
        arr.reserve(default_size);
        arr.push_back(-1);
        minHeap = type;
    }
    void push(int d)
    {
        arr.push_back(d);
        int index = arr.size()-1;
        int parent = index/2;
        while(index>1 and compare(arr[index],arr[parent]))
        {
                swap(arr[index],arr[parent]);
                index = parent;
                parent/=2;
        }
    }
    void pop()
    {
        swap(arr[1],arr[arr.size()-1]);
        arr.pop_back();
        heapify(1);
    }

    int top()
    {
        return arr[1];
    }   
    bool empty()
    {
        return arr.size() == 1;
    }
};


int main() {
    int n;
    cin>>n;
    Heap h(n);
    int d;
    cin>>d;
    while(d!=-1)
    {
        h.push(d);
        cin>>d;
    }

    while(!h.empty())
    {
        cout<<h.top()<<" ";
        h.pop();
    }
    
    return 0;

}

