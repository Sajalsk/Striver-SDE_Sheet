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
        
        if(head==NULL) return head;

        stack<int> st;
        ListNode *curr=head;

        while(curr!=NULL) {
            st.push(curr->val);
            curr=curr->next;
        }

        curr=head;
        
        while(curr!=NULL) {
            curr->val=st.top();
            st.pop();
            curr=curr->next;
        }
         return head;
    }
};

};