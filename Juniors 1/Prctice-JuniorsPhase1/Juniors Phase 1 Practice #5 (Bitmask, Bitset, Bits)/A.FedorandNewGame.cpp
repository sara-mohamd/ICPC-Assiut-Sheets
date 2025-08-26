#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }
int n, m, k;
bool chk(int x, int target)
{
  int ctr = 0;
  for (int bit = 0; bit < n; bit++)
  {
    if ((x & (1 << bit)) != ((target & (1 << bit))))
      ctr++;
  }
  return ctr <= k;
}
signed main()
{
  int answer = 0;
  cin >> n >> m >> k;
  vector<int> v(m + 1);

  for (auto &i : v)
    cin >> i;

  for (int i = 0; i < m; i++)
  {
    if (chk(v[i], v[m]))
      answer++;
  }

  cout << answer << '\n';
}