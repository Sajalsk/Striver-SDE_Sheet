#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    
    int maxLen(vector<int>&A, int n)
    {   
        int sum=0,maxlen=0;
        unordered_map<int,int> mpp;    // 15 -2 2 -8 1 7 10 23
        
        for (int i=0;i<n;i++) {
            sum=sum+A[i];
            
            if(sum==0)  maxlen=i+1;
            else {     
                 if(mpp.find(sum)!=mpp.end()) 
                 maxlen = max(maxlen, i-mpp[sum]);// Index of that exisisting Sum in the Map;

                else  mpp[sum] = i;      //  storing sum , index   
            }
        }
        return maxlen;
    }
};
