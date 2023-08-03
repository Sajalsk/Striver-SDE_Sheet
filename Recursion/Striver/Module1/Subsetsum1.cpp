#include <bits/stdc++.h>
 using namespace std;
class Solution
{
public:

void help(int index,vector<int>&arr,int N , vector<int>&res,int sum) {
    
    if(index==N) {
        res.push_back(sum);
        return;  
    }
    
    help(index+1,arr,N,res,sum+arr[index]);         // Taken
    help(index+1,arr,N,res,sum);                // Not Taken
} 
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        help(0,arr,N,res,0);
        
        sort(res.begin(),res.end());
        
        return res;
    }
};