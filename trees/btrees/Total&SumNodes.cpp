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
int totalnodes(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    return 1+totalnodes(root->left)+totalnodes(root->right);
}
int sumofallnodes(node* root)
{
    if(root == NULL)
        return 0;
    
    return root->data + sumofallnodes(root->left) + sumofallnodes(root->right);
}
int main() {
    
      node* root = buildtree();
      cout<<"Total Nodes:"<<totalnodes(root)<<endl;
      cout<<"Sum of all Nodes:"<<sumofallnodes(root);
      return 0;
}
