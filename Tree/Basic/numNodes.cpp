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

TreeNode <int>* takeInputlevelwise()
{
    int rootData;
    cout<<"Enter rootData"<<endl;
    cin>>rootData;
    
    TreeNode <int> *root = new TreeNode<int>(rootData);
    
    queue <TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    
while (pendingNodes.size()!=0)
{
    TreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();
    
    cout<<"Enter number of Children"<<" "<< front->data <<endl;
    int numchild;
    cin>>numchild;
    
    for (int i=1;i<=numchild;i++)
    {
        int childdata;
        
            cout<<"Enter"<<" "<<i<<"th child data of root"<<" "<<front->data<<endl;
            
        cin>>childdata;
        
        TreeNode <int>*child= new TreeNode<int> (childdata);
        front->children.push_back(child);
        pendingNodes.push(child);
    }
    
    
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
            
            cout<<root->children[i]->data<<",";
        }
        
        cout<<endl;
        
        for (int i=0;i<root->children.size();i++)
        {
            printTree(root->children[i]);
        }
        
    }
    
    int numNodes(TreeNode <int>*root)
    {
        int ans=1;
        for (int i=0;i<root->children.size();i++)
        {
            ans+= numNodes(root->children[i]);
           
        }
        
        return ans;
    }
    
    
int main()
{
    
    TreeNode <int>*root=takeInputlevelwise(); 
    printTree(root);
    numNodes(root);
   
}

