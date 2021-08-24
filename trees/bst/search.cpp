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
node* insertinbst(node* root,int d)
{
        if(root == NULL)
            return new node(d);
        
        if(d<=root->data)
        {
            root->left = insertinbst(root->left,d);

        }
        else
        {
            root->right = insertinbst(root->right,d);
        }
        return root;
}
node* buildtree()
{
        node* root = NULL;
        int d;
        cin>>d;
        while(d!=-1)
        {
            root = insertinbst(root,d);
            cin>>d;
        }

        return root;
}



void bfs(node* root)
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
void inorder(node* root)
{
        if(root == NULL)
            return;
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
}
bool search(node* root , int key)
{
        if(root == NULL)
            return false;
        if(key == root->data)
            return true;
        if(key<=root->data)
        {
            return search(root->left,key);
        }
        else
            return search(root->right,key);
}
int main()
{
        node* root = buildtree();
        //inorder(root);
        bfs(root);
        cout<<endl;
        int k;
        cin>>k;
        cout<<"Found?:"<<search(root,k)<<endl;
        return 0;

}
