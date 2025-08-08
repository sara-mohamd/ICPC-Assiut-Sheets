#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define int long long
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }
int n, c;

bool chk(vector<int> &v, int val)
{
  int cows = 1;
  int last = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] - last >= val)
    {
      cows++;
      last = v[i];
    }
  }
  return (cows >= c);
}
signed main()
{
  speed();
  cin >> n >> c;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  sort(all(v));
  int l = 0, r = v[n - 1] - v[0], ans = 0;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (chk(v, mid))
    {
      ans = mid;
      l = mid + 1;
    }
    else
      r = mid - 1;
  }
  cout << ans << '\n';
}