#include <bits/stdc++.h>
using namespace std;

template <typename T>

class ListNode {

    int val;
    ListNode *next;

    ListNode(int val) {
        this->val=val;
        next=NULL;
    }
    class Solution {
public:
   
ListNode* merge(ListNode* a,ListNode* b) {

    ListNode* res=NULL;

    if(a==NULL) return b;
    else if(b==NULL) return a;

    if(a->val<=b->val) {
        res= a;
        res->bottom= merge(a->bottom, b);
    } else {
        res=b;
        res->bottom = merge(a,b->bottom);
    }
     return res;
}

ListNode *flatten(ListNode *root) {
    
    if(root==NULL || root->next==NULL) return root;
    return merge(root,flatten(root->next));
}
    
    };
};