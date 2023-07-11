#include <bits/stdc++.h>
using namespace std;

void display(int A[], int i)
{
    

      if (i==5)
      {
          return;
      }
    cout << A[i]<<endl;
    display(A, i + 1);
}

int main()
{
    int n;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    display(A, 0);
}
