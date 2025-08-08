#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n, total = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    total += v[i];
  }
  if (total % 3 != 0)
    cout << "0\n";
  else
  {
    int prefix = 0,
        part1 = total / 3,
        part2 = part1 * 2;
    int ways = 0, cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
      prefix += v[i];
      if (prefix == part2)
        ways += cnt;
      if (prefix == part1)
        cnt++;
    }
    cout << ways << '\n';
  }
}
