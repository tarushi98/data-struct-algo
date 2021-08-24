#include <iostream>
#include<utility>
#include<queue>
using namespace std;
class node{
    public:
    node *left;
    node *right;
    int data;
    node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};

node* buildtree()
{
    int d;
    cin>>d;
    if(d == -1)
        return NULL;
    node *root = new node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
pair<int,bool> heightbalancedtree(node* root)
{       pair<int,bool> p;
        if(root == NULL)
        {
             p.first = 0;
             p.second = true;
             return p;
        }

        pair<int,bool> left = heightbalancedtree(root->left);
        pair<int,bool> right = heightbalancedtree(root->right);
        p.first = max(left.first,right.first)+1;
        p.second = false;
        if((left.second and right.second) and abs(left.first-right.first)<=1)
                p.second = true;
        return p;
}

int main() {
    
      node* root = buildtree();
      cout<<"Is my tree balanced?"<<heightbalancedtree(root).second;
      return 0;
}
