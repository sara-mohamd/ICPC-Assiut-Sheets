#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  int n, m, k, answer = 0;
  cin >> n >> m >> k;

  vector<int> v(m + 1);
  for (auto &i : v)
    cin >> i;

  for (int i = 0; i < m; i++)
    if (__builtin_popcount(v[m] ^ v[i]) <= k)
      answer++;

  cout << answer << '\n';
}