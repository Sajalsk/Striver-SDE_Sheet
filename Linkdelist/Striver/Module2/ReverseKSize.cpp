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

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        // Base case
        if (head == NULL || k == 1) return head;

        //step 1: reverse first k Nodes          // 1 2 3 4 5 6  - 2 (1&2)

        ListNode* curr = head;
        ListNode* temp = NULL;
        ListNode* prev = NULL;
        
        int count = 0;

        while (curr != NULL && count < k) {
            
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

            count++;                      //      2 1 3 4 5 6   , count=2
        }

          // Check if there are enough nodes to reverse
        if (count < k) {
            // Reverse back the first count nodes to maintain the original order
            ListNode* fast = NULL;
            while (count > 0) {

                fast = prev->next;      // fast=temp, prev=curr , curr=prev @important line
                prev->next = curr;
                curr = prev;
                prev = fast;
                
                count--;
            }
             return curr;
        }

        // step 2: recursion for k groups
        if (temp != NULL) {
            head->next = reverseKGroup(temp, k);
        }

        // step 3: return the head of reversed list
        return prev;
    }
};

};
