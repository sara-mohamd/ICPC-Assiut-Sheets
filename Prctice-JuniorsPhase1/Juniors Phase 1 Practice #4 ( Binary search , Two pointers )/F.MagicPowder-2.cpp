#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

int n, magic;

bool chk(vector<pair<int, int>> &v, int val)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int amount = v[i].first * val;
    if (v[i].second >= amount)
      continue;
    sum += (amount - v[i].second);
    if (sum > magic)
      return false;
  }
  return true;
}

signed main()
{
  speed();
  cin >> n >> magic;
  vector<pair<int, int>> v(n);

  for (auto &[a, b] : v)
    cin >> a;
  for (auto &[a, b] : v)
    cin >> b;

  int l = 0, r = 2e9, ans = 0;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (chk(v, mid))
      ans = mid,
      l = mid + 1;
    else
      r = mid - 1;
  }
  cout << ans << '\n';
}
