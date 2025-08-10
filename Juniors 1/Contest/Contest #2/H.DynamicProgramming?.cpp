#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  speed();
  int test;
  cin >> test;
  while (test--)
  {
    int n, m, a, b, cost = 0;
    cin >> n >> m >> a >> b;
    while (n > m)
    {
      int half = n / 2;
      int total_b = (n - half) * b;
      if (half > m && a < total_b)
      {
        cost += a;
        n = half;
      }
      else
        n--, cost += b;
    }
    cout << cost << '\n';
  }
}