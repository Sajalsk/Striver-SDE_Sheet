#include <bits/stdc++.h>
using namespace std;
int main() {

    struct Item { 
    int value;
    int weight;
};

    class Solution {
    public:

    //comparison function to sort items according to value/weight ratio.
    static bool cmp(Item a, Item b) {
        
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2;
    } 

    
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n) { 
        
        //sorting items on basis of value/weight ratio.
        sort(arr, arr + n, cmp); //   N = 3, W = 50  values[] = {60,100,120} weight[] = {10,20,30} =240.00
        
        //taking variable for current weight in knapsack.
        int curWeight = 0;
        double finalvalue = 0.0;
        
        //iterating over all the items.
        for (int i = 0; i < n; i++) {
            //if currweight + item's weight is less than or equal to W,
            //then we add the item's value to final value.
            if (curWeight + arr[i].weight <= W) {
                curWeight += arr[i].weight;
                finalvalue += arr[i].value;
            }
            //else we take the fraction of the that item's value 
            //based on the remaining weight in knapsack.
            else {
                int remain = W - curWeight;
                finalvalue += arr[i].value * ((double) remain / arr[i].weight);
                break;
            }
        }
        //returning final value.
        return finalvalue;
    }
};
};