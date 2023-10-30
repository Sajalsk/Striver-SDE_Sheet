#include <bits/stdc++.h>
using namespace std;
template <typename T>

class TreeNode {
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(T data) {
        this->data = data;
    }
    
class Solution {
public:

    int kthElement(int arr1[], int arr2[], int n, int m, int k) {

        vector<int> res;

        for(int i=0;i<n;i++) res.push_back(arr1[i]);
        for(int i=0;i<m;i++) res.push_back(arr2[i]);
            
        sort(res.begin(),res.end());
        return res[k-1];
    }
};
};
