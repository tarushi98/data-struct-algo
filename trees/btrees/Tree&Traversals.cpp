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
void inorder(node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main() {
    
      node* root = buildtree();
      print(root);
      cout<<endl;
      inorder(root);
      cout<<endl;
      postorder(root);
      return 0;
}
