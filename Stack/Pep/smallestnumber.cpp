#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num=1,l;
    string str;
    cin>>str;
    
    l=str.length();
    
    stack <int> sajal;
    
    for (int i=0;i<l;i++)
    {
        if (str[i]=='d')
        {
            sajal.push(num);
            num++;
        }
        
        else
        {
            sajal.push(num);
            num++;
            
            while (sajal.size()>0)
            {
                int ans=sajal.top();
                sajal.pop();
                cout<<ans;
            }
        }
    }
    
     sajal.push(num);
     while (sajal.size()>0)
            {
                int ans=sajal.top();
                sajal.pop();
                cout<<ans;
            }
}