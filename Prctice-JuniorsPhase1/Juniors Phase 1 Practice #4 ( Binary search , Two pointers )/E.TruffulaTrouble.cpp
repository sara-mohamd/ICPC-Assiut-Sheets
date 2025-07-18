#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

int n, thn;

bool chk(vector<int> &v, int k)
{
  int steps = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i] <= k)
      steps++, k--, i++;
  }
  return steps >= thn;
}

signed main()
{
  speed();
  cin >> n >> thn;
  vector<int> trees(n);
  for (auto &it : trees)
    cin >> it;

  int l = 1, r = 1e9 + 1e5, ans = -1;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (chk(trees, mid))
    {
      ans = mid;
      r = mid - 1;
    }
    else
      l = mid + 1;
  }
  cout << ans << '\n';
}
