#include <iostream>
#include<climits>
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
int findMaxPath(node* root,int &res)
{
        if(root == NULL)
            return 0;

        int l = findMaxPath(root->left,res);
        int r = findMaxPath(root->right,res);

        int branch_v_root = max(max(l,r)+root->data,root->data);
        int max_branch_path = max(branch_v_root,l+r+root->data);
        
        res = max(max_branch_path,res);
        return branch_v_root;
}
int findSum(node* root)
{
    int res = INT_MIN;
    findMaxPath(root,res);
    return res;
}
int main()
{
        node* root = buildtree();
        cout<<"Maximum Sum Path between 2 nodes:"<<findSum(root)<<endl;

}
