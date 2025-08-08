#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void speed() { ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); }

signed main()
{
  ll n, ans = LLONG_MIN;
  cin >> n;
  vector<ll> v(n + 1), pref(n + 2), suff(n + 2);
  map<ll, ll> mp;
  pref[0] = 0;

  for (int i = 1; i <= n; i++)
  {
    cin >> v[i];
    pref[i] = v[i] + pref[i - 1];
    if (mp.count(pref[i]) == 0)
      mp[pref[i]] = i;
  }

  for (int i = n; i > 0; i--)
  {
    suff[i] = v[i] + suff[i + 1];
    if (mp.count(suff[i]) && mp[suff[i]] < i)
      ans = max(ans, suff[i]);
  }

  cout << ans << '\n';
}
