#include <bits/stdc++.h>
using namespace std;
int maxSumIS(int arr[], int n) {
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++) {
          dp[i] = arr[i];
    }

    int ans = INT_MIN;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (arr[i] > arr[j]) {
         dp[i] = max(dp[j] + arr[i], dp[i]);
            }
        }

        ans = max(ans, dp[i]);
    }
    return ans;
}