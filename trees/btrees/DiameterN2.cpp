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
int height(node* root)
{
    if(root == NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int diameter(node* root)
{
    if(root == NULL)
        return 0;
    
    int h1 = height(root->left);
    int h2 = height(root->right);
    return h1+h2> diameter(root->left)? max(h1+h2,diameter(root->right)) : max(diameter(root->right),diameter(root->left));
}
int main() {
    
      node* root = buildtree();
      cout<<"Total Nodes:"<<totalnodes(root)<<endl;
      cout<<"Sum of all Nodes:"<<sumofallnodes(root)<<endl;
      cout<<"Diameter:"<<diameter(root);
      return 0;
}
