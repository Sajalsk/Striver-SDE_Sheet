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

    ListNode *remove(ListNode *head,int n) {
            ListNode *start = new ListNode();    // declaration of the start Node to be seen

            ListNode*fast=head;
            ListNode*slow=head;

            for (int i=0;i<n;i++) {
                  fast=fast->next;
            }

            while(fast->next!=NULL) {
                fast=fast->next;
                slow=slow->next;
            }

            slow=slow->next->next;

            return start->next;
    }
};
 };