#include <bits/stdc++.h>
using namespace std;

template <typename T>

class ListNode {

    int val;
    ListNode *next;

    ListNode(int val) {
        this->val=val;
        next=NULL;
    }
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
       vector<int>nums;
        
        while(head) {
            nums.push_back(head->val);
            head=head->next;
        }
    
        for(int i=0;i<nums.size();i++) {
            if(nums[i]!=nums[n-i-1]) return false;
        }
         return true;
    }
};

};