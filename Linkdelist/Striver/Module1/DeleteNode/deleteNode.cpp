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

        void deleteNode(ListNode *node) {
            node->val = node->next->val;
            node->next = node->next->next;
        }
    };
};