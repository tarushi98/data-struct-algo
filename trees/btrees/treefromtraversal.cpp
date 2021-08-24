#include<iostream>
#include<queue>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
	
};
node* buildfrominpre(int in[],int pre[],int s, int e)
{	static int i = 0;
	if(s>e)
	{
		return NULL;
	}
	
	node* root = new node(pre[i]);
	int index = -1;
	for(int j=s;j<=e;j++)
	{
		if(in[j] == pre[i])
		{
			index = j;
			break;
		}
	}
	i+=1;
	root->left = buildfrominpre(in,pre,s,index-1);
	root->right = buildfrominpre(in,pre,index+1,e);
	return root;
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
int main()
{
	int in[] = {3,2,8,4,1,6,7,5};
	int pre[] = {1,2,3,4,8,5,6,7};	
	int n = sizeof(in)/sizeof(int);
	node* root = buildfrominpre(in,pre,0,n-1);
	breadthfirsttraversal(root);
	return 0;
}
