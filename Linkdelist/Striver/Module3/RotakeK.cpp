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

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k==0)  return head;
      
        int len=1;
        ListNode *curr = head;
        
        while(curr->next!=NULL) {
           
            curr=curr->next;
             len++;
        }
        
        curr->next=head;
        
        k=k%len;
        k = len-k;
        
        while(k--)  curr=curr->next;
          
        head=curr->next;
        curr->next=NULL;
        
        return head;
       
    }
};
};