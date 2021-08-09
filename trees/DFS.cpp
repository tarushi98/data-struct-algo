#include <iostream>
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
bool depthfirstsearch(node* root, int key)
{
    if(root == NULL)
        return false;
    if(root->data == key)
        return true;
    
    return (depthfirstsearch(root->left,key) or depthfirstsearch(root->right,key));
}
int main() {
    
      node* root = buildtree();
      int k;
      cin>>k;
      cout<<"Found element?"<<depthfirstsearch(root,k);
      return 0;
}
