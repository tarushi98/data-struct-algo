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
int get_height(node* root)
{
     if(root == NULL)
        return 0;
      return max(get_height(root->left),get_height(root->right))+1;
}
void printklevel(node* root, int k)
{
    if(root == NULL)
        return;
    if(k ==1)
    {
        cout<<root->data<<" ";
        return;
    }

    printklevel(root->left,k-1);
    printklevel(root->right,k-1);
}
void levelorder(node* root)
{
    int height =  get_height(root);
    for(int i = 1;i<=height;i++)
    {
        printklevel(root,i);
        cout<<endl;
    }
}
int main() {
    
      node* root = buildtree();
      cout<<"Height of Tree:"<<get_height(root)<<endl;
      levelorder(root);
      return 0;
}
