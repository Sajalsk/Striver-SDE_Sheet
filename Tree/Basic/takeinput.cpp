#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    
    T data;
    vector <TreeNode*> children;
    
    TreeNode(T data)
    {
        this->data=data;
    }
};

TreeNode <int>* takeInput()
{
    int rootData;
    cout<<"Enter root data"<<" ";
    cin>>rootData;
    
     TreeNode <int> *root = new TreeNode<int>(rootData);
     
     int n;
     cout<<"Enter no. of Children"<<endl;
     cin>>n;
     
     for (int i=0;i<n;i++)
     {
         TreeNode<int>* child=takeInput(); 
         root->children.push_back(child);
         
     }
     
     return root;
     
    
}

void printTree(TreeNode<int>* root)
    {
        
        if (root==NULL)
        {
            return;
        }
        cout<<root->data<<":";
        
        for (int i=0;i<root->children.size();i++)
        {
            
            cout<<root->children[i]->data<<",";   // Calling for Children
        }
        
        cout<<endl;
        
        for (int i=0;i<root->children.size();i++)
        {
            printTree(root->children[i]);    // Calling for Roots
        }
        
    }
    
int main()
{
    
  /*  TreeNode <int> *root = new TreeNode<int>(1);
    TreeNode <int> *node1 = new TreeNode<int>(2);
    TreeNode <int> *node2 = new TreeNode<int>(3);
    
    root->children.push_back(node1);
    root->children.push_back(node2);
    
    */
    TreeNode <int>* root= takeInput(); 
    printTree(root);
}


