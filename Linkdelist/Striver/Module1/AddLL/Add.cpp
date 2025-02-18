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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *p= l1;
        ListNode *q= l2;
        
        ListNode *ans= new ListNode(0) ;
        ListNode *curr = ans;
        
        int carry=0;
        while (p!=NULL || q!=NULL ) {
            
            int x = (p!=NULL) ? p->val : 0;
            int y = (q!=NULL) ? q->val : 0;
            int sum=x+y+carry;
            
            carry = sum/10;
            
            curr->next = new ListNode (sum%10);
            curr = curr->next;
            
            if(p !=NULL)  p=p->next;
            if(q !=NULL)  q=q->next;
        
        }
        
        if(carry>0)  curr->next = new ListNode (carry);
        
        return ans->next;
        
    }
};

   

};