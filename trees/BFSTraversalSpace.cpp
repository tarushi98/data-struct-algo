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
bool depthfirstsearch(node* root, int key)
{
    if(root == NULL)
        return false;
    if(root->data == key)
        return true;
    
    return (depthfirstsearch(root->left,key) or depthfirstsearch(root->right,key));
}
void breadthfirsttraversal(node* root)
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
                    q.push(NULL); // will push the null at the end of the level , this insures that all of the previous level's children are in the queue
                 continue; 
            }
            cout<<(q.front()->data)<<" ";
            node* r = q.front();
            if(r->left)
                q.push(r->left);
            if(r->right)
                q.push(r->right);
            q.pop();
            //q.push(NULL);
    }
}

bool breadthfirstsearch(node* root, int k)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        if(q.front() == NULL)
        {
            q.pop();continue;
        }
        if(q.front()->data == k)
            return true;
        node* r = q.front();
        q.push(r->left);
        q.push(r->right);
        q.pop();
    }

    return false;
}
int main() {
    
      node* root = buildtree();
      int k;
      cin>>k;
      cout<<"Found element?"<<breadthfirstsearch(root,k)<<endl;
      breadthfirsttraversal(root);
      return 0;
}
