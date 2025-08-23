#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int n, ans = 0;
  cin >> n;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;

  for (int mask = 0; mask < (1 << n); mask++)
  {
    int ones = __builtin_popcount(mask), even = 0;
    for (int i = 0; i < n; i++)
    {
      if ((mask & (1 << i)) && (v[i] % 2 == 0))
        even++;
    }
    if (even * 2 > ones && ones != 0)
      ans++;
  }
  cout << ans << '\n';
}