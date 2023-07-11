#include <bits/stdc++.h> 
 int count;
   
    void checkCount(vector<int>& arr, int start, int mid, int end){

        // Two pointers;
        int l = start, r = mid + 1;
        while(l <= mid && r <= end){
            if((long)arr[l] > (long) 2 * arr[r]){
                count += (mid - l + 1);
                r++;
            } else{
                l++;
            }
        }
       // Worst case might be nlog(n) 
        sort(arr.begin() + start, arr.begin() + end + 1);
        return;
        //Every step sort
    }
int mergesort(long long * arr,int low,int high){
    //if(low>=high) return 0;
    long long ans=0;
    if(low<high){
        int mid=(low)+(high-low)/2;
    
    ans+=mergesort(arr,low,mid);
    ans+=mergesort(arr,mid+1,high);
    ans+=checkCount(arr,low,mid,high);
    
    }
    return ans;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergesort(arr,0,n-1);
}