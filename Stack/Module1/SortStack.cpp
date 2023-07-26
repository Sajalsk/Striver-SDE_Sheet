#include <bits/stdc++.h> 
using namespace std;

	void insert(stack<int> &stack, int temp) {

    if(stack.empty()) stack.push(temp);      
           
     else if(stack.top() <= temp) {              // 5 -2 9 -7 3   - >  9 5 3 -2 -7
        stack.push(temp);        
        return;    
    }   
     else {       
        int temp2 = stack.top();        
        stack.pop();        
        insert(stack, temp);        
        stack.push(temp2);    
    }
}

void sortStack(stack<int> &stack) {  

    if(stack.empty())   return;         

    int temp = stack.top();    
    stack.pop();  

    sortStack(stack);    
    insert(stack, temp); 
}
