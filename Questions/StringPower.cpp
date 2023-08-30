#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	void solve(int index,string s,string res,vector<string> &ans) {

	        if(index>=s.size()) {
	            ans.push_back(res);
	            return ;
	        }
	        
	        solve(index+1,s,res,ans);
	        
	        char ele=(s[index]);
	        res.push_back(ele);
	        
	        solve(index+1,s,res,ans); 
	    }
		 vector<string> AllPossibleStrings(string s) {

		   string res="";
		   int index=0;

		   vector<string> ans;

		   solve(index,s,res,ans);

		   sort(ans.begin(),ans.end());

		   auto it=ans.begin();
		   ans.erase(it);
		   
		   return ans;
		}
};
