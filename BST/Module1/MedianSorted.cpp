#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node {
public:
    T data;
    vector<Node *> children;

    Node(T data) {
        this->data = data;
    }
   
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size()+nums2.size(); 
        vector<int>res;
        
        for(int i=0;i<nums1.size();i++) res.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++) res.push_back(nums2[i]);
       
        sort(res.begin(),res.end());
        int mid= (n-1)/2;
        
        if(n%2==0) return double  (res[mid+1] + res[mid])/2;
        else  return   double (res[mid]);     
    }
};

};

