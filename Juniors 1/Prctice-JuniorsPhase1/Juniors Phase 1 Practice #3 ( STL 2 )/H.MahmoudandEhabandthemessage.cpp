#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, k, m, x;
  cin >> n >> k >> m;
  vector<string> v(n);
  map<string, int> mp;
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    mp[v[i]] = x;
  }
  while (k--)
  {
    int size, mn = INT_MAX;
    cin >> size;

    vector<int> groups(size);
    for (int i = 0; i < size; i++)
      cin >> groups[i];
    if (size == 1)
      continue;
    for (auto i : groups)
    {
      if (mp[v[i - 1]] < mn)
        mn = mp[v[i - 1]];
    }
    for (auto i : groups)
    {
      mp[v[i - 1]] = mn;
    }
  }
  string s;
  ll ans = 0;
  for (int i = 0; i < m; i++)
  {
    cin >> s;
    ans += mp[s];
  }

  cout << ans << endl;
}