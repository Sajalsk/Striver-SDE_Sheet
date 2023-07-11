class Solution {
public:
    int strStr(string haystack, string needle) {
        
       if(haystack.size() < needle.size()) return -1;
        int h = 0, n = 0;
        while(h < haystack.size() && n < needle.size()) {
            
            if(haystack[h] == needle[n]) {
                h++;
                n++;
            }
            else {
              
                h  = h - n +1;
                n = 0;
            }
        }
        return n == needle.size() ? h-n : -1;
    }
};