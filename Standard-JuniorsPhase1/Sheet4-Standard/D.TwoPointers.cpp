#include <bits/stdc++.h>
#define int long long
using namespace std;

void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }
signed main()
{
  speed();
  int n, m, l = 0, r = 0, sum = 0, len = INT_MAX;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  while (r < n)
  {
    sum += v[r];
    while (sum >= m && l <= r)
    {
      len = min(len, r - l + 1);
      sum -= v[l];
      l++;
    }
    r++;
  }

  if (len == INT_MAX)
    cout << "-1\n";
  else
    cout << len << '\n';
}
