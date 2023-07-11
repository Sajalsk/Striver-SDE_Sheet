#include <bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    if (n==0)
    {
        return 1;
    }
   int smallpow=power(x,n-1);
   {
       return x*smallpow;
   }
}

int main()
{
    int a,p,ans;
    cin>>a>>p;

    ans=power(a,p);
    
    cout<<ans<<endl;
}