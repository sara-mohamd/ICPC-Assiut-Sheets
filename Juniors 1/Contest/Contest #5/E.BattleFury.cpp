#include <bits/stdc++.h>
#define int long long
using namespace std;

bool chk(vector<int> v, int k, int p, int q)
{
  if (p == q)
  {
    int max_hp = *max_element(v.begin(), v.end());
    return k >= (max_hp + p - 1) / p;
  }

  int need = 0;
  for (int i = 0; i < v.size(); i++)
  {
    int rem = max(0LL, v[i] - (int)q * k);
    need += (rem + (p - q) - 1) / (p - q);
    if (need > k)
      return false;
  }
  return need <= k;
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, p, q;
  cin >> n >> p >> q;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;

  int l = 1, r = 2e9, ans = r;
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    if (chk(v, mid, p, q))
    {
      ans = mid;
      r = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }
  cout << ans << '\n';
  return 0;
}