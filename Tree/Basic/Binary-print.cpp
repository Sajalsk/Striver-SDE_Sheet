#include <bits/stdc++.h>
using namespace std;

class Node  {
    
    public:
    
    int data;
    Node *left;
    Node *right;
    
    Node (int data) {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node *takeInput() {
    
    int rootdata;
    cin>>rootdata;
    
    if(rootdata==-1) {
        return NULL;
    }
    
    Node *root = new Node(rootdata);
    Node *leftchild  = takeInput();
    Node *rightchild = takeInput();
    
    root->left = leftchild;
    root->right = rightchild;
    
    return root;
}

void print(Node *root) {
    if(root==NULL) {
        return;
    }
    
    cout<<root->data<<" ";
    
    if(root->left!=NULL) {
        cout<<"L"<<root->left->data;
    }
    
    if(root->right!=NULL) {
        cout<<"R"<<root->right->data;
    }
    
    cout<<endl;
    print(root->left);
    print(root->right);
}

int main() {
    
    Node *root = takeInput();
    print(root);
}
