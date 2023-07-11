class Solution {
public:
    void next_value(vector<int>&h, vector<int>&next){
        int n=h.size();
        stack<int>st;
        st.push(n);
        for(int i=n-1;i>=0;i--){
            while(st.top()!=n && h[st.top()]>=h[i])st.pop();
            
            next[i]=st.top();
            st.push(i);
        }        
    }
    void prev_value(vector<int>&h, vector<int>&prev){
        int n=h.size();
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && h[st.top()]>=h[i])st.pop();
            
            prev[i]=st.top();
            st.push(i);
        }
    }
    
    int largestRectangleArea(vector<int>& h) {
        if(h.size()==1)return h[0];

        vector<int>prev(h.size(),0);
        vector<int>next(h.size(),0);

        prev_value(h,prev);  // fn called
        next_value(h,next);   // fn called
        int area=0;
        for(int i=0;i<h.size();i++)area= max(area,(next[i]-prev[i]-1)*h[i]);
        return area;        
    }
};