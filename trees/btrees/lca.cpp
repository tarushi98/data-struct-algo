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
node* lca(node* root,int A, int B)
{
        if(root == NULL)
            return NULL;
        
        if(root->data == A or root->data == B)
                return root;
    
        node* left = lca(root->left,A,B);
        node* right = lca(root->right,A,B);
        if(left and right)
            return root;
        if(left)
            return left;
        return right;

}
int main()
{
        node* root = buildtree();
        //rightview(root,0);
        cout<<lca(root,10,9)->data;
        return 0;

}
