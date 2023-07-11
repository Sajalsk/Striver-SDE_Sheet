#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode{
    
    public:
    
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right; 
    
    BinaryTreeNode( T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void Printtree(BinaryTreeNode<int> *root)
{
    cout<<root->data<<":";
    
    if (root==NULL)
    {
        return;
    }
    
    if (root->left!=NULL)
    {
        cout<<"L"<<root->left->data<<",";
    }
    
    if (root->right!=NULL)
    {
        cout<<"R"<<root->right->data<<",";
    }
    
    cout<<endl;
    Printtree(root->left);
    Printtree(root->right);
}


 BinaryTreeNode<int> *takeinput()
 {
     int rootdata;
     cin>>rootdata;
     
     if (rootdata==-1)
     {
         return NULL;
     }
     
     BinaryTreeNode<int> *root = new BinaryTreeNode<int> (rootdata);
     BinaryTreeNode<int> *leftchild = takeinput();
     BinaryTreeNode<int> *rightchild = takeinput();
     
     root->left= leftchild;
     root->right = rightchild;
     return root;
     
 }
 
 int minimum(BinaryTreeNode<int> *root)
{
    if (root==NULL)
     {
        return INT_MAX;
     }
     
    return min( root->data, min(minimum(root->left), minimum(root->right)) );
}

int maximum(BinaryTreeNode<int> *root)
{
    if (root==NULL)
     {
        return INT_MIN;
     }
     
    return max( root->data, max(maximum(root->left), maximum(root->right)) );
}

bool isBST(BinaryTreeNode<int> *root)
{
    if (root=NULL)
    {
        return 1;
    }
    
    int leftMax= maximum(root->left);
    int rightmin= minimum(root->left);
    
    bool output(root->data>leftMax && root->data<=rightmin && isBST(root->left) && isBST(root->right));
    {
        return output;
    }

}
 
int main()
{
    BinaryTreeNode<int> *root = takeinput();
    Printtree(root);
    cout<<isBST(root);
    
    // 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

    
    
    
    
}

