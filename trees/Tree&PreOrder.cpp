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
void print(node* root)
{
    if(root == NULL)
        return;

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main() {
    
      node* root = buildtree();
      print(root);
      cout<<endl;
      return 0;
}
