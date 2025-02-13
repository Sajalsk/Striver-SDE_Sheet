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
    public :

    ListNode*Reverse(ListNode *head) {  

    ListNode*curr=head;
    ListNode*prev=NULL;
    ListNode*temp=NULL;

    while(curr) {

        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
     return prev;
    }
};

};