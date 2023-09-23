#include <bits/stdc++.h> 
using namespace std;

	void insert(stack<int>&s, int temp) {

    if(s.empty()|| s.top()<temp) {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s,temp);
    
    s.push(val);

    return;
}

void sortStack(stack<int>& s) {

    // base case 
    if(s.size()==0 || s.size()==1) return;
        
    int temp= s.top();
    s.pop();

    sortStack(s);
    insert(s,temp);

    return;
}