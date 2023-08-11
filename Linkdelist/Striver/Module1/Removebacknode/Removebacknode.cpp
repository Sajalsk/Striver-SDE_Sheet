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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       ListNode * start = new ListNode();
       start -> next = head;
       
       ListNode*fast=start;
       ListNode*slow=start;
        
       for(int i=0;i<n;i++)  fast=fast->next;
           
        while(fast->next!=NULL) {
            fast=fast->next;
            slow=slow->next;
           }
           
        slow->next=slow->next->next;
       
    return start->next;
    }
};
 };