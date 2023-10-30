#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node {
public:
    T data;
    vector<Node *> children;

    Node(T data) {
        this->data = data;
    }
    
class Solution {
public:

    int kthElement(int arr1[], int arr2[], int n, int m, int x) {

        int i=0,j=0;

        int m=sizeof(arr1)/sizeof(arr1[0]);
        int n=sizeof(arr2)/sizeof(arr2[0]);

        int k=m+n-1;

        arr1.resize(k);

        while(m>=0 && n>=0) {

             if(arr1[m]>arr2[n]) {
                arr1[k--]=arr1[m--]
             } else arr1[k--]=arr2[n--];
        }

        while(m>0) {
            arr1[k--]=[arr1[m--]]
        }

         while(n>0) {
            arr1[k--]=[arr2[m--]]
        }
         return arr1[x-1];
    }
};

};