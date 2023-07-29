// String matching Algorithm

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int i=0,j=0;
        
        int h=haystack.length();
        int n=needle.length();
        
        while(i<h  &&  j<n) {
            
            if(haystack[i]==needle[j]) {
                i++; j++;  
                
            }
            
             else {
                j=0; 
                i=i-j+1;  
             }  
            
        }  
         return j==n?i-j:-1;
        
    }
};