#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    
    int A[n];
    
    stack <int> sajal;
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    A[0]=1;
    sajal.push(0);
    cout<<A[0]<<endl;
    
    for (int i=1;i<n;i++)
    {
        a=sajal.top();

        while (sajal.size()>0 && A[i]>a)  //    [2 5 9 3 1 12 6 8 7]
        {
           sajal.pop();
        }
        
        if (sajal.size()==0)
        {
           A[i]=i+1;
        }
        
        else
        {
           A[i]=i-sajal.top();
        }
        
        
        sajal.push(i);
        cout<<A[i]<<endl;
    }

    
    
    
    
    
    
    
    
    
}