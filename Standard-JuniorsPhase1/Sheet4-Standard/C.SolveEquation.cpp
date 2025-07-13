#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define int long long
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

long double c, tme;
bool chk(long double val)
{
  return (c * val * log2(val)) <= tme;
}

signed main()
{
  speed();
  cin >> c >> tme;
  long double ans = 0;
  long double l = 1, r = 1e9;
  while (r - l > 1e-7)
  {
    long double mid = (l + r) / 2;
    if (chk(mid))
    {
      ans = mid;
      l = mid;
    }
    else
      r = mid;
  }
  cout << fixed << setprecision(6) << ans << '\n';
}