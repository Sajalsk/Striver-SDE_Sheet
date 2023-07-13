#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int l,count=0;
    char str[100];
    cin.getline(str,100);
    
    l=strlen(str);
    
    stack< char > sajal;
    
    for (int i=0;i<l;i++)
    {
        sajal.push(str[i]);
    }
    
    for (int i=0;i<l;i++)
    {
        if (str[i]=='(')  
        {
            while (sajal.top()!=')')   
            {
                sajal.push(str[i]);
            }
        }
            
        if (str[i]==')')
        {
            while (sajal.top()!='(')
            {
              sajal.pop();
            }
            
            sajal.pop();
        }
    }
    
    if (sajal.size()>0)
    {
        cout<<"True"<<endl;
    }
    
    
    else
    {
        cout<<"False"<<endl;
    }
    
    

    
    // while (sajal.size()>0)
    // {
    //     char a=sajal.top();
    //     cout<<a<<" ";
    //     sajal.pop();
    // }

    
    
    
    
    
    
    
    
    
    
    
}


