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
            
            len++;                                  // len =5
            curr=curr->next; 
        }                                           // curr at the last node len  = no. of node in LL
        
        curr->next=head;                            // last node attachment wiht the first node i.e. head
        
        k=k%len;     // rewriting k for non - repitition k =2
        k = len-k;                 // k = 3
        
        while(k--)  curr=curr->next;
          
        head=curr->next;
        curr->next=NULL;
        
        return head;
       
    }
};
};