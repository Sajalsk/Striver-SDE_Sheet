#include <bits/stdc++.h> 
using namespace std;

	void insert(stack<int>&s, int temp) {

    if(s.empty()|| temp>s.top()) {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s,temp);                // to check again if now temp should be inserted
    
    s.push(val);
    return;
}

void sortStack(stack<int>& s) {

    // base case 
    if(s.size()==0 || s.size()==1) return;
        
    int temp= s.top();
    s.pop();

    sortStack(s);                        // reaching to  the last elem of stack
    insert(s,temp);

    return;
}