#include <bits/stdc++.h>
 using namespace std;
class Solution
{
public:

void help(int i,vector<int>&arr,int N , vector<int>&res,int sum) {
    
    if(i==N) {
        res.push_back(sum);
        return;  
    }
    
    help(i+1,arr,N,res,sum+arr[i]);         // Taken
    help(i+1,arr,N,res,sum);                // Not Taken
} 
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        help(0,arr,N,res,0);
        
        sort(res.begin(),res.end());
        
        return res;
    }
};