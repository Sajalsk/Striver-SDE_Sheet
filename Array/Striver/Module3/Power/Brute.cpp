#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    double myPow(double x, int n) {
        
        int m=n;
        
        if(n<0) m=m*-1;

        double ans=1;

        for (int i=1;i<=n;i++)  ans=ans*x;
       
        if(m<0) return 1/ans;
   
        return ans;
    }
};