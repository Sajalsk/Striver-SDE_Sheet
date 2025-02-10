#include <bits/stdc++.h>
using namespace std;

  // Not working Solution

class Solution {
public:

 int count;
   
    void checkCount(vector<int>& arr, int start, int mid, int end){

        int l = start, r = mid + 1;
        
        while(l <= mid && r <= end) {

            if((long)arr[l] > (long)arr[r]) {  // change in line
                count += (mid - l + 1);
                r++;
            } else  l++;
        }

    // Not working Solution

        sort(arr.begin() + start, arr.begin() + end + 1);
        return;  
    }
    
 void  mergeSort(vector<int>& arr, int start, int end) {

        if(start == end) return;
        
        int mid = (start + end)/2;
        
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        
        checkCount(arr,start,mid,end);
    }
       
    // Not working Solution

int getInversions(vector<int>&arr, int n){

     mergeSort(arr,0,n-1);
     return count;
}

};