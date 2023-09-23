#include <bits/stdc++.h>
using namespace  std;

class Solution {
public:

    int Solve(int i,vector<int>&coins,int amount,int res) {

        if (i >= coins.size() || amount <= 0)  
         return (amount == 0) ? 0 : INT_MAX - 1;   
        
        if(coins[i]>amount) return  0+Solve(i+1,coins,amount,res);  
    
return min(1+Solve(i,coins,amount-coins[i],res),Solve(i+1,coins,amount,res) );
             
    }

    int coinChange(vector<int>& coins, int amount) {
      
      int res=Solve(0,coins,amount,res);
      return (res == INT_MAX - 1 ) ? -1 : res; 
    }
    
};