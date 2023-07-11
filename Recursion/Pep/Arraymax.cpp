#include <bits/stdc++.h>
using namespace std;

int  check(int A[], int i)
{
   int max;
    
    if (i == 5)
    {
        return ;
    }

    if (A[i] >= max)
    {
        max = A[i];
    }

    check(A, i + 1);
}

int main()
{
    int n,ans;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    int max= A[0];

    ans=check(A, 1);
    
    cout<<ans<<endl;
}