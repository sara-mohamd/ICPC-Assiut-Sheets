#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
#define S second
#define F first
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }
vector<vector<int>> v, dp;
int n, m;
int solve(int i, int j)
{
  if (i > n || j > m || i < 0 || j < 0)
    return 1e18;
  if (i == n - 1 && j == m - 1)
    return 0;
  int &ret = dp[i][j];
  if (~ret)
    return ret;
  int mn = 1e18;
  int op = solve(i + 1, j);
  if (op | v[i][j] < mn)
    mn = op | v[i][j];
  op = solve(i - 1, j);
  if (op | v[i][j] < mn)
    mn = op | v[i][j];
  op = solve(i, j + 1);
  if (op | v[i][j] < mn)
    mn = op | v[i][j];
  op = solve(i, j - 1);
  if (op | v[i][j] < mn)
    mn = op | v[i][j];
  return ret = mn;
}
signed main()
{
  speed();
  cin >> n >> m;
  int x, y;
  cin >> x >> y;
  v.resize(n);
  dp.resize(n);
  for (int i = 0; i < n; i++)
  {
    v[i].resize(m);
    dp[i].resize(m, -1);
    for (int j = 0; j < m; j++)
    {
      cin >> v[i][j];
    }
  }
  cout << solve(0, 0) << " " << solve(x - 1, m - 1) << "\n";
}