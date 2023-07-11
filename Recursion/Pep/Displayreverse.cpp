#include <bits/std++.h>
using namespace std;

void reverse(int arr[], int idx, int n)
{
    if (idx==-1)
    {
        return;
    }
    
    cout<<arr[idx]<<endl;
    
    reverse( arr,  idx-1,  n);
    
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    reverse(arr, n-1, n);
}