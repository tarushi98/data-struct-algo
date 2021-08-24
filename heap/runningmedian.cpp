#include <iostream>
#include<queue>
#include<string>
using namespace std;
 int main() {
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
    int d;
    cin>>d;
    float med = d;
    cout<<"Median:"<<med<<endl;
    left.push(med);
    cin>>d;
    while(d!=-1)
    {

        if(left.size()>right.size())
        {
                if(d<med)
                {
                    right.push(left.top());
                    left.pop();
                    left.push(d);
                }
                else
                {
                    right.push(d);
                }

                med = (left.top() + right.top())/2;
        }
        else if(left.size() == right.size())
        {
                if(d<med)
                {
                    left.push(d);
                    med = left.top();
                }
                else
                {
                    right.push(d);
                    med = right.top();
                }
        }
        else
        {
                if(d>med)
                {
                    left.push(right.top());
                    right.pop();
                    right.push(d);
                }
                else
                {
                    left.push(d);

                }

                med = (left.top() + right.top())/2;
        }


        cout<<"Median:"<<med<<endl;
        cin>>d;
    }
    return 0;
}

