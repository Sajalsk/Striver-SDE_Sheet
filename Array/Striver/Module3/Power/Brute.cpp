#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    double myPow(double x, int n) {
        
        int m=n;
        double ans=1.0;

        if(n<0) m=m*-1;

        for (int i=1;i<=n;i++)  ans=ans*x;
       
        if(m<0) return 1/ans;
   
        return ans;
    }
};