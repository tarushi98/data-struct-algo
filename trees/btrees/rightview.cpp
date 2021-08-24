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
int maxlevel = -1;
void rightview(node* root,int currlevel)
{     
      if(root == NULL)
            return;
      if(maxlevel<currlevel)
           { 
             cout<<root->data<<" ";
             maxlevel = currlevel;
           }
      rightview(root->right,currlevel+1);
      rightview(root->left,currlevel+1);
      
}
int main()
{
        node* root = buildtree();
        rightview(root,0);

}
