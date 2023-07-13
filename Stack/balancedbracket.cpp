#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while (t>0)
{
        t--;
    
    int l,count=0;
    char str[100];
    cin.getline(str,100);
    
    l=strlen(str);         // [(a + b) + {(c + d) * (e / f)}] 
    
    stack<char> sajal;
    
    for (int i=0;i<l;i++)
    {
        if (str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            sajal.push(str[i]);
        }
        
        if (str[i]==')')
        {
            if (sajal.top()!='(')
            {
                cout<<"False"<<endl;
                count++;
                break;
            }
            
            else
            {
                sajal.pop();
            }
        }
        
        if (str[i]=='}')
        {
            if (sajal.top()!='{')
            {
                cout<<"False"<<endl;
                count++;
                break;
            }
            
            else
            {
                sajal.pop();
            }
        }
        
        if (str[i]==']')
        {
            if (sajal.top()!='[')
            {
                cout<<"False"<<endl;
                count++;
                break;
            }
            
            else
            {
                sajal.pop();
            }
        }
    }
    
    
    if ( sajal.size()==0 && count==0)
    {
        cout<<"True"<<endl;
    }
    
    if ( sajal.size()!=0 && count==0)
    {
        cout<<"False"<<endl;
    }
    
}



    /*while (sajal.size()>0)
    {
        char a=sajal.top();
        cout<<a;
        sajal.pop();
    }*/
    
    
}
    