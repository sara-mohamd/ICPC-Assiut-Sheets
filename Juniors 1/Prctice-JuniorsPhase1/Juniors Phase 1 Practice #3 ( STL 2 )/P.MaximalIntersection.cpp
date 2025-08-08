#include <bits/stdc++.h>
#define int long long
using namespace std;
void speed() { ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); }

signed main()
{
  int n, ans = 0;
  cin >> n;
  vector<int> l(n + 1), r(n + 1),
      prefMaxL(n + 2), prefMinR(n + 2, LLONG_MAX),
      suffMaxL(n + 2), suffMinR(n + 2, LLONG_MAX);

  for (int i = 1; i <= n; i++)
  {
    cin >> l[i] >> r[i];
    prefMaxL[i] = max(prefMaxL[i - 1], l[i]);
    prefMinR[i] = min(prefMinR[i - 1], r[i]);
  }

  for (int i = n; i > 0; i--)
  {
    suffMaxL[i] = max(suffMaxL[i + 1], l[i]);
    suffMinR[i] = min(suffMinR[i + 1], r[i]);
  }

  for (int i = 1; i <= n; i++)
  {
    int maxL = max(prefMaxL[i - 1], suffMaxL[i + 1]);
    int minR = min(prefMinR[i - 1], suffMinR[i + 1]);
    ans = max(ans, max(0LL, minR - maxL));
  }

  cout << ans << '\n';
}