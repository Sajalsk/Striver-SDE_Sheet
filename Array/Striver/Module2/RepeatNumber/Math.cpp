#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {

int Isum,Nsum,sSum;

    set<int>s1;
    pair<int,int>p1;                              // 3 1 2 5 3

    for (int i=1;i<=n;i++)  Isum+=i;              // 15
    for (int i=0;i<n;i++) Nsum+=arr[i];           // 14
 
    for (int i=0;i<n;i++)  s1.insert(arr[i]);

    for (auto it:s1)  sSum+=it;                    // 11

    int Missing = Isum-sSum;                       // 4
    int Repeat  = Nsum-sSum;                       //3

    p1.first =Missing;
    p1.second=Repeat;

    return p1;
}