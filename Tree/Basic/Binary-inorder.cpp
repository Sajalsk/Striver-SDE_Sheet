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

BinaryTreeNode<int> *takeinputlevelwise()
{
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
     
     if (rootdata==-1)
     {
         return NULL;
     }
     
     BinaryTreeNode<int> *root = new BinaryTreeNode<int> (rootdata); 
     
     queue<BinaryTreeNode<int>*> pendingNodes;
     pendingNodes.push(root);
     while(pendingNodes.size()!=0)
     {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
        cout<<"Enter leftchilddata"<<" "<<front->data<<endl;
        
        int leftchilddata;
        cin>>leftchilddata;
        
        if (leftchilddata!=-1)
        {
             BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftchilddata);
             front->left=child;
             pendingNodes.push(child);
        }
        
        cout<<"Enter rigthchilddata"<<" "<<front->data<<endl;
        
        int rigthchilddata;
        cin>>rigthchilddata;
        
        if (rigthchilddata!=-1)
        {
             BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rigthchilddata);
             front->right=child;
             pendingNodes.push(child);
        }
        
        return root;
     }
}

int numNodes(BinaryTreeNode<int> *root)
{
    if (root==NULL)
    {
        return 0;
    }
    
    return 1+ numNodes(root->left) + numNodes(root->right); 
}

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

    void inorder(BinaryTreeNode<int> *root)
{
    if (root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    BinaryTreeNode<int> *root = takeinputlevelwise();
    Printtree(root);
    cout<<"Nodes"<<numNodes(root);
    inorder(root);
}


