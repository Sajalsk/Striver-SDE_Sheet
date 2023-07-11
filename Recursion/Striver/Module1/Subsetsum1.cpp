// Input:
// N = 2
// arr[] = {2, 3}
// Output:
// 0 2 3 5
// Explanation:
// When no elements is taken then Sum = 0.
// When only 2 is taken then Sum = 2.
// When only 3 is taken then Sum = 3.
// When element 2 and 3 are taken then 
// Sum = 2+3 = 5.

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
    
    help(i+1,arr,N,res,sum+arr[i]);      // Taken
    help(i+1,arr,N,res,sum);     // Not Taken
} 
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        help(0,arr,N,res,0);
        
        sort(res.begin(),res.end());
        
        return res;
    }
};