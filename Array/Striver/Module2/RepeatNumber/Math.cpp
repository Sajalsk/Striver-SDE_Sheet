#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {

    pair<int,int>p;
    set<int>s1(arr.begin(),arr.end());

    int indexsum=0,realsum=0,sum=0;

    for(int i=1;i<=n;i++)  indexsum+=i;
    for(int i=0;i<n;i++)   realsum+=arr[i];
    for(auto it:s1)        sum=sum+it;


    int repeat=indexsum-sum;
    int miss=realsum-sum;

    p.first=repeat;
    p.second=miss;

    return p;
}
