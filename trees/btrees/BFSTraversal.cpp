#include <iostream>
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

void breadthfirstsearch(node* root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
            if(q.front() == NULL)
             {   q.pop(); continue; }
            cout<<(q.front()->data)<<" ";
            node* r = q.front();
            q.push(r->left);
            q.push(r->right);
            q.pop();
    }
}
int main() {
    
      node* root = buildtree();
//       int k;
//       cin>>k;
//       cout<<"Found element?"<<depthfirstsearch(root,k)<<endl;
      breadthfirstsearch(root);
      return 0;
}
