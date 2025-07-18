#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  speed();
  int n, d, idx = 0, ans = 0;
  cin >> n >> d;
  vector<pair<int, int>> v(n);
  for (auto &[a, b] : v)
    cin >> a >> b;

  sort(all(v));
  int l = 0, r = 0,
      cum_sum = 0, max_profit = 0;
  while (r < n)
  {
    if (abs(v[l].first - v[r].first) < d)
    {
      cum_sum += v[r++].second;
    }
    else
    {
      cum_sum -= v[l++].second;
    }
    max_profit = max(max_profit, cum_sum);
  }
  cout << max_profit << '\n';
}
