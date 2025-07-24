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
    int n, res = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
      cin >> i;

    sort(all(v));
    res = v[0] * n;
    for (int i = 1; i < n; i++)
    {
      res = max(res, v[i] * (n - i));
    }
    cout << res << '\n';
  }
}