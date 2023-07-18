#include <bits/stdc++.h>
using namespace std;

template <typename T>

class ListNode {

    int data;
    ListNode *next;

    ListNode(int data) {
        this->data=data;
        next=NULL;
    }

    class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==NULL || headB==NULL) return NULL;
        
        ListNode*fast=headA;
        ListNode*slow=headB;
        
        while(fast!=NULL || slow!=NULL) {
           if(fast==slow) return slow;
            
            fast=fast==NULL?headB:fast->next;
            slow=slow==NULL?headA:slow->next; 
        }
         return NULL;

    }
    }
};