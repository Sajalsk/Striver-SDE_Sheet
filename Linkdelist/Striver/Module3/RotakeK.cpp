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
        
        if(head==NULL || head->next==NULL || k==0)   return head;   // k=7
     
        int len=1;
        ListNode *curr = head;
        
        while(curr->next!=NULL) 
            curr=curr->next;
            len++;                              // len =12 
    
        curr->next=head;
        k=k%len;                               //  k= 7.
        k = len-k;                             // k=5
        
        while(k--) curr=curr->next;
            
        head=curr->next;
        curr->next=NULL;
        
        return head;
       
    }

}
};