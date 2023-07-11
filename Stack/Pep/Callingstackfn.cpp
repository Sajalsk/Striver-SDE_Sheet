#include <bits/stdc++.h>
using namespace std;

void display(stack <int> sajal)
{
    while (sajal.size()>0)
    {
        int a=sajal.top();
        cout<<a<<" ";           // LIFO Manner
        sajal.pop();
    }
}


int main()
{
    int A[5]={11,12,13,14,15};
    
    stack <int> sajal;
    
    for (int i=0;i<5;i++)
    {
        sajal.push(A[i]);
    }
    
    display(sajal);
    
}