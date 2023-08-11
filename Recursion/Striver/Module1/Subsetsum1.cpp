#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

void help(int index,vector<int>&arr, vector<int>&res,int sum) {
    
    if(index==arr.size()) {
        res.push_back(sum);
        return;  
    }
    
    help(index+1,arr,res,sum+arr[index]);         // Taken
    help(index+1,arr,res,sum);                   // Not Taken
} 
    vector<int> subsetSums(vector<int> arr, int N) {

        vector<int> res;
        help(0,arr,res,0);
        
        return res;
    }
};