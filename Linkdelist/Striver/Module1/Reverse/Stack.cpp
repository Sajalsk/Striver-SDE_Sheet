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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL)return head;
        stack<int> stk;
        ListNode *curr=head;
        while(curr!=NULL){
            stk.push(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL){
            curr->val=stk.top();
            stk.pop();
            curr=curr->next;
        }
        return head;
    }
};

};