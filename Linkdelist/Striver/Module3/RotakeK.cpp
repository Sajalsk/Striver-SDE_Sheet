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

    ListNode* rotateRight(ListNode* head, int k) {   //  1,2,3,4,5   : k=12
        
        if(head==NULL || head->next==NULL || k==0)  return head; 
      
        int len=1;
        ListNode *curr = head;
        
        while(curr->next!=NULL) {
            
            len++;
            curr=curr->next; 
        }
        
        curr->next=head;                            // len = 5;
        
        k=k%len;     // rewriting k for non - repitition k =2
        k = len-k;                 // k = 3
        
        while(k--)  curr=curr->next;
          
        head=curr->next;
        curr->next=NULL;
        
        return head;
       
    }
};
};