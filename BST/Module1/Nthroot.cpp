#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node {
public:
    T data;
    vector<Node *> children;

    Node(T data) {
        this->data = data;
    }

class Solution {
public:

    int func(int mid, int n, int m) {

    long long ans = 1;

    for (int i = 1; i <= n; i++) {

        ans = ans * mid;
        if (ans > m)  return 2;  
    }

    if (ans == m)  return 1;
    return 0;
}

 

int NthRoot(int n, int m) {

    int low = 1, high = m,mid,check;

    while (low <= high) {

         mid = (low + high) / 2;  
         check = func(mid, n, m);

        if (check == 1)  return mid;
        else if (check == 0) low = mid + 1;
        else high = mid - 1;   
    }
     return -1;
}
};

};