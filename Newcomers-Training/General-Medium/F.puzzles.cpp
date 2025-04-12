#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, ans = INT_MAX;
  // input (n student  m puzzle) => output (Least min)
  cin >> n >> m;
  int arr[m];
  for (int i = 0; i < m; i++)
    cin >> arr[i];
  sort(arr, arr + m);
  for (int i = 0; i < m; i++)
  {
    for (int j = m - 1; j - i >= n - 1; j--)
    {
      ans = min(ans, arr[j] - arr[i]);
    }
  }
  cout << ans << endl;
}