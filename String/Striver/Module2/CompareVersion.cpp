#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {  
        
        int i=0,j=0;
        
        int len1=version1.size();
        int len2=version2.size();
        
        while(i<len1 || j<len2) {
            
           int temp1=0;
           int temp2=0;
            
            while(i<len1 && version1[i]!='.') {   //  version1 = "1.0", version2 = "1.0.0"
                
                temp1=temp1*10+ (version1[i]-'0');   // converting into integer
                i++;
            }
            
            while(j<len2 && version2[j]!='.') {
                
                temp2=temp2*10 + (version2[j]-'0');
                j++;   
            }
            
            if(temp1<temp2) return -1;
            else if(temp1>temp2) return 1;
            
            i++;
            j++;
        }
        
        return 0;
    }
};