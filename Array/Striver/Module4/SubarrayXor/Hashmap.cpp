#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int k)
{
    int count=0;
    int xorr=0;
    
   map <int,int> mpp;                // Prefix algorithm   
    
    for (int i=0;i<arr.size();i++) {                              // 4 2 2 6 4   6
          xorr=xorr^arr[i];             // 0^4=4 
          int curr=xorr^k;                 // then 4^6=2.

          count+=mpp[curr];    // Increasing the value of count with total no. of occurence     Simultaneoulsy
          mpp[xorr]++;           // // Increasing the value of  no. of occurence of xorr
    }
    return count;
}
