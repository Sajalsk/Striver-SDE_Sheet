#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int myAtoi(string s) {
        
        int len = s.size();
        double num = 0;
        int i=0;
        
        while(s[i] == ' ') i++;            // filling gaps
        
        bool positive = s[i] == '+';
        bool negative = s[i] == '-';       // checking sign thn increase
        
        positive == true ? i++ : i;
        negative == true ? i++ : i;        // confirming sign
        
        
        while(i < len && s[i] >= '0' && s[i] <= '9') {
            num = num*10 + (s[i]-'0');     // 5->ch arr (53-48)
            i++;
        }
        
        num = negative ? -num : num;
       
        num = (num > INT_MAX) ? INT_MAX : num;    // confirming for INT vlaue
        num = (num < INT_MIN) ? INT_MIN : num;
        
        return int(num);
    }
};


// Brute Force

// class Solution {
// public:
//     int myAtoi(string s) {

//         stringstream str(s);
//         int i = 0;
//         str >> i;
//         return i;
//     }
// };