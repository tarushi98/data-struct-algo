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
int sumofchildnodes(node* root)
{
        if(root == NULL)
            return 0;
        
        int left  = sumofchildnodes(root->left);
        int right = sumofchildnodes(root->right);
        int x = 0;
        if(left+right)
          { x = root->data;  root->data = left+right;}
        return root->data+x;
}
void levelordertraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        if(q.front() == NULL)
        {   cout<<endl;
            q.pop();
            if(!q.empty())
                q.push(NULL);
            continue;  
        }
        cout<<q.front()->data<<" ";
        if(q.front()->left)
            q.push(q.front()->left);
        if(q.front()->right)
            q.push(q.front()->right);
        q.pop();
    }
}
int main() {
    
      node* root = buildtree();
      int x = sumofchildnodes(root);
      levelordertraversal(root);
      return 0;
}
