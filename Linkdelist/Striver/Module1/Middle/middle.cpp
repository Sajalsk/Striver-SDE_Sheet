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

    ListNode* middleNode(ListNode* head) {
        
      if(head==NULL) return head;

          ListNode* fast=head;
          ListNode* slow=head;
      
      while(fast!=NULL && fast->next!=NULL) {
        
        fast=fast->next->next;
        slow=slow->next;
      }
       return slow;
    }
  
};

};