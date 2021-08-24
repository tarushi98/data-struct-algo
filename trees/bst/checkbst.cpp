#include <iostream>
#include<queue>
#include<vector>
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
vector<int> arr;
void inorder(node* root)
{
        if(root == NULL)
            return;
        inorder(root->left);
        arr.push_back(root->data);
        inorder(root->right);
}
bool isvalid(node* root)
{       inorder(root);
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]>arr[i])
                return false;
        }

    return true;
}
int main()
{
        node* root = buildtree();
        //inorder(root);
        cout<<"Tree is valid?"<<isvalid(root);
        return 0;

}
