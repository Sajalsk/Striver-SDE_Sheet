#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
   int Solve(vector<int>& arr, int i, int j){
    
    if(i == j)
        return 0;
        
    int min1 = INT_MAX;
    
    for(int k = i; k<= j-1; k++){
        
        int ans = Solve(arr,i,k) + Solve(arr, k+1,j) + arr[i-1]*arr[k]*arr[j];
        min1 = min(min1,ans);   
    }
     return min1;
}

int matrixMultiplication(vector<int>& arr, int N){
    
    int i =1;
    int j = N-1;
    
    return Solve(arr,i,j); 
}
};