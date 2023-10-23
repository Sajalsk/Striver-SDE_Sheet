#include <bits/stdc++.h>
using namespace std;

template <typename T>

class ListNode {

    int data;
    ListNode *next;

    ListNode(int data) {
        this->data = data;
        next = NULL;
    }

   class Solution {
   public:
   
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
            if (list1 == NULL)  return list2;
            if (list2 == NULL)  return list1;
               
            ListNode *res = new ListNode(-1);
            ListNode *temp = res;

            ListNode *l1 = list1;
            ListNode *l2 = list2;

            while (l1 && l2) {

                if (l1->val < l2->val) {
                    temp->next = l1;
                    l1 = l1->next;
                }
                 else {
                    temp->next = l2;
                    l2 = l2->next;
                }

                temp = temp->next;
            }
            
            if (l1)
                temp->next = l1;
            else
                temp->next = l2;

            return res->next;
        
    }
};
};