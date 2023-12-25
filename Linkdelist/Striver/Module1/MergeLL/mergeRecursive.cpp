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
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {       // Recursive Solution

        if(list1==NULL)  return list2;
        if(list2==NULL)  return list1;
        
        if(list1->val<=list2->val) {
            list1->next = mergeTwoLists(list1->next,list2);
                return list1;   
        }  else {
            list2->next = mergeTwoLists(list1,list2->next);
                return list2;
        }   
    }
};
};