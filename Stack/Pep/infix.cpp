#include <bits/stdc++.h>
using namespace std;

int value(sajal, string str)
{
    int T,result=0;
    T=sajal.top();
    sajal.pop(T);
    result= Tstr[i]sajal.top();
    sajal.push(result);
}


int main()
{
    int l;
    
    char str[100];
    cin.getline(str,100);
    
    l=strlen(str);
    
    stack <int> sajal;
    
    for (int i=0;i<l;i++)    // 2 + 6 * 4 / 8 - 3
    {
        if (57>=str[i]>=48)
        {
            sajal.push(str[i])
        }
        
        if (sajal.size>=2 && str[i-1]=='+')
        {
            T=sajal.top();
            sajal.pop(T);
            result= T+sajal.top();
            sajal.push();
        }
        
        if (sajal.size>=2 && str[i-1]=='-')
        {
            T=sajal.top();
            sajal.pop(top);
            result= T-sajal.top();
            sajal.push(result);
        }
        
        if (sajal.size>=2&& str[i-1]=='*')
        {
            T=sajal.top();
            sajal.pop(top);
            result= T*sajal.top();
            sajal.push(result);
        }
        
        if (sajal.size>=2 && str[i-1]=='/')
        {
            T=sajal.top();
            sajal.pop(top);
            result= T/sajal.top();
            sajal.push(result);
        }
        
        if (stack.size()==1)
        {
            cout<<result<<endl;
        }
    }
    
    
}
