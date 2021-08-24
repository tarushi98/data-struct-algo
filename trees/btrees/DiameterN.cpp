#include <iostream>
#include<utility>
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
pair<int,int> diameteroptz(node* root)
{
    pair<int,int> p;
    if(root == NULL)
        {
            p.first = p.second = 0;
            return p;
        }
    
    pair<int,int> left = diameteroptz(root->left);
    pair<int,int> right = diameteroptz(root->right);
    p.first = max(left.first,right.first)+1;
    p.second = max(left.first+right.first,max(left.second,right.second));
    //cout<<"At root:"<<root->data<<"| Height:"<<curr.first<<" | Diameter:"<<curr.second<<endl;
    return p;
}
int main() {
    
      node* root = buildtree();
      cout<<"Diameter:"<<diameteroptz(root).second;
      return 0;
}
