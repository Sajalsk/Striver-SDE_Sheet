#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node {
public:
    T data;
    vector<Node *> children;

    Node(T data) {
        this->data = data;
    }
class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root) return NULL;
        
        Node* current=root;

        while(!current->left) {

        Node* temp=current;
        while(!current) { 
          current->left->next=current->right;
          current->right->next=current->next==NULL?NULL: current->next->left;
          current=current->next;
          }
            current=temp->left;
        }
        return root;
        
    }
};
};