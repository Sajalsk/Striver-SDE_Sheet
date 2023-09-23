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

    ListNode *detectCycle(ListNode *head) {
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast && fast->next) {
            
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                while(slow != head){
                    slow = slow->next;
                    head = head->next;
                }
                  return slow;
            }
        }
        return NULL;
    }
};

};
   
