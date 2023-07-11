class Solution {
public:
    int romanToInt(string s) {
        
        map <char,int> mp = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };

       


       int result=mp.at(s[s.size()-1]);
        
    for(int i=s.size()-2;i>=0;i--)
    {
        if(mp.at(s[i])<mp.at(s[i+1]))
        {
            result-=mp.at(s[i]);
            
        }
        else{
             result+=mp.at(s[i]);

        }
    }
    return result;
    }
};