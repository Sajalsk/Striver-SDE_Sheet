#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int help(int i,vector<int>&coins,int amount) {
        
       if (i >= coins.size() || amount <= 0)
            return (amount == 0) ? 0 : INT_MAX - 1;   
        
        int res=-1;
        
        if(coins[i]>amount) {
            int NotTake= 0+help(i+1,coins,amount);  
            res=NotTake;
        }
        
        else {
            int take=1+help(i,coins,amount-coins[i]);
            int NotTake=0+help(i+1,coins,amount);
            
            res = min(take,NotTake);
        }
        
        return res;
       
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        int res= help(0,coins,amount);
        //Since No value so -1 else result
         return (res == INT_MAX - 1 ) ? -1 : res;
    }
    
};