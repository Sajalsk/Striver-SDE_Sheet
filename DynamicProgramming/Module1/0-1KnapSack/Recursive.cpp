// Input:
// N = 3
// W = 4
// values[] = {1,2,3}
// weight[] = {4,5,1}
// Output: 3

#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       if(n==0 || W==0 ){
           return 0;
       }
       
       if(wt[n-1]>W) {
           return knapSack(W,wt,val,n-1);
       }
       
       else {
           return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }
    }
};