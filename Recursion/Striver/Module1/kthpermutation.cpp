// Input: n = 3, k = 3
// Output: "213"
// "123"
// "132"
// "213"
// "231"
// "312"
// "321"

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string getPermutation(int n, int k) {
        
      int fact = 1;
      vector < int > numbers;
        
      for (int i = 1; i < n; i++) {
        fact = fact * i;   // Factroial of n    fact=6;
        numbers.push_back(i);    // Inserting indexes in a vector
      }
    
        numbers.push_back(n);   //last number   nums[1,2,3];
        
      string ans = "";
      k = k - 1;
        
        // Not UnderStood:
      while (true) {
        ans = ans + to_string(numbers[k / fact]);
        numbers.erase(numbers.begin() + k / fact);
        if (numbers.size() == 0) {
          break;
        }
        k = k % fact;
        fact = fact / numbers.size();
      }
      // Till 

      return ans;
    }
};