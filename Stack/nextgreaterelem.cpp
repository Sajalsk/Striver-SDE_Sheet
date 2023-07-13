#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    
    int A[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    stack <int> sajal;
    
    sajal.push(A[0]);
    
    for (int i=1;i<n-1;i++)
    {
        a=sajal.top();
        
        if (A[i]>a)
        {
            while (sajal.size()>0 && A[i]>a)   // 2 5 9 3 1 12 6 8 7
            {
                sajal.pop();
                cout<<A[i]<<" ";
            }
            
            sajal.push(A[i]);
        }
        
        else
        {
            sajal.push(A[i]);
        }
    }
    
   
}
