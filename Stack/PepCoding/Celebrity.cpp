#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,count=0;
    cin>>n;
    
    int A[n][n];
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
           cin>>A[i][j];
        }
    }
    
    stack <int> sajal;
    
    for (int i=0;i<n;i++)
    {
        sajal.push(i);
    }
    
    
    while (sajal.size()>=2)
    {
        int a=sajal.top();
        sajal.pop();
        int b=sajal.top();
        sajal.pop();
        
        if (A[a][b]==1)
        {
            sajal.push(b);
        }
        
        else if (A[b][a]==1)
        {
            sajal.push(a);
        }
    }
    
    int ans=sajal.top();
    sajal.pop();

    
    for (int i=0;i<n;i++ )
    {
        if (i!=ans)
        {
          if ( A[ans][i]==1 && A[i][ans]==0 )
          {
              cout<<"none"<<endl;
              count++;
          }
        }
    }
    
    if (count==0)
    {
        cout<<ans<<endl;
    }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}