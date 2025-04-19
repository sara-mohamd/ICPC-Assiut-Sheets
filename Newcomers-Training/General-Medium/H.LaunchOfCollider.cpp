#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, ans = INT_MAX, ok = 0;
  string s;
  cin >> n >> s;
  int arr[n] = {0};
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == 'R' && s[i + 1] == 'L')
    {
      int x = (arr[i + 1] - arr[i]) / 2;
      ok = 1;
      ans = min(ans, x);
    }
  }
  if (ok)
    cout << ans << endl;
  else
    cout << "-1\n";
  return 0;
}