#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {

int Isum,Nsum,Sum;

    set<int>s1;
    pair<int,int>p1;

    for (int i=0;i<n;i++)  Isum+=i;
    for (int i=0;i<n;i++) Nsum+=arr[i];
    

    for (int i=0;i<n;i++) {
        s1.insert(arr[i]);
    }

    for (auto it:s1) {
         Sum+=it;
    }

    int Missing = Isum-Sum;
    int Repeat= Nsum-Sum;

    p1.first=Missing;
    p1.second=Repeat;

    return p1;
}