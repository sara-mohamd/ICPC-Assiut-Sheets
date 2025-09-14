#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 998244353;

int32_t main()
{
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int>> v(n + 1, vector<int>(m + 1));
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      cin >> v[i][j];

  vector<int> last_row(n + 1, 0), last_col(m + 1, 0);
  int prev_time = 0, ans = 0;

  for (int op = 0; op < k; op++)
  {
    char typ;
    int idx;
    long long t;
    cin >> typ >> idx >> t;

    if (typ == 'r')
    {
      // Clean row idx at time t
      for (int j = 1; j <= m; j++)
      {
        long long last_clean = max(last_row[idx], last_col[j]);
        int delta_time = t - last_clean;
        int add = (delta_time % MOD * v[idx][j] % MOD) % MOD;
        ans = (ans + add) % MOD;
      }
      last_row[idx] = t;
    }
    else
    {
      // Clean col idx at time t
      for (int i = 1; i <= n; i++)
      {
        long long last_clean = max(last_row[i], last_col[idx]);
        int delta_time = t - last_clean;
        int add = (delta_time % MOD * v[i][idx] % MOD) % MOD;
        ans = (ans + add) % MOD;
      }
      last_col[idx] = t;
    }
  }
  cout << ans << '\n';
}
