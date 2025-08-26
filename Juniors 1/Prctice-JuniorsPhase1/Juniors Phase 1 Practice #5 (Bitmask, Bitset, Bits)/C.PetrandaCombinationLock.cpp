#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int n, sum;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  for (int mask = 0; mask < (1 << n); mask++)
  {
    sum = 0;
    for (int i = 0; i < n; i++)
      (mask & (1 << i)) ? sum += v[i] : sum -= v[i];
    if (sum % 360 == 0)
    {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
