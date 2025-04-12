#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, sum1 = 0, sum2 = 0, ctr = 0;

  cin >> n;
  int arr[n] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum1 += arr[i];
  }
  sort(arr, arr + n, greater<int>());
  for (int i = 0; i < n; i++)
  {
    if (sum2 > sum1)
      break;
    sum2 += arr[i];
    sum1 -= arr[i];
    ctr++;
  }

  cout << ctr << endl;
}