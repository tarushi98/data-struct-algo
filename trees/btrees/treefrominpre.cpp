#include <iostream>
#include<algorithm>
#include<queue>
using namespace std;
class node{
    public:
        int data;
       node *left;
        node *right;
        node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
};
node* buildTree()
{
        int d;
        cin>>d;
        if(d == -1)
            return NULL;
        node* root = new node(d);
        root->left = buildTree();
        root->right = buildTree();
        return root;
}
void bfs(node* root)
{
        queue<node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
                if(!q.front())
                {
                    cout<<endl;
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
int i=0;
node* buildfromInPre(int pre[],int ino[],int s, int e)
{
        if(s>e)
            return NULL;
        node* root = new node(pre[i]);
        int index = -1;
        for(int k=s;k<=e;k++)
        {
                if(ino[k] == pre[i])
                    {   index = k;
                        break;
                    }
        }
        i+=1;
        root->left = buildfromInPre(pre,ino,s,index-1);
        root->right = buildfromInPre(pre,ino,index+1,e);
        return root;
}
int main() {

    int pre[8],ino[8];
    for(int i=0;i<8;i++)
        cin>>pre[i];
    for(int i=0;i<8;i++)
        cin>>ino[i];
    bfs(buildfromInPre(pre,ino,0,7));
    return 0;
}

