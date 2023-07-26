#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> sajal;
    
    sajal.push(50);
    sajal.push(40);
    sajal.push(30);
    sajal.push(20);
    sajal.push(10);
    
    
    while (!sajal.empty())
    {
        cout<<sajal.size()<<endl;;
        sajal.pop();
    }
}