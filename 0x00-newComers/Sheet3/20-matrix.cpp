#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  long long sum1 = 0, sum2 = 0;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];
  }
  // 0, 1, 2, 3
  // 0, 1, 2, 3
  //  1 5 12 1
  //  2 -4 6 7
  //      3 8 5 9
  //      3 5 23 -6
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        sum1 += arr[i][j];
    }
  }

  for (int j = 0; j < n; j++)
  {
    for (int i = n - 1; i >= 0; i--)
    {
      if (i + j == n - 1)
        sum2 += arr[i][j];
    }
  }

  cout << abs(sum1 - sum2) << endl;
}