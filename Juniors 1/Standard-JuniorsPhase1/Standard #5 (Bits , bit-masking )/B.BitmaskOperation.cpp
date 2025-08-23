#include <bits/stdc++.h>
// #define int long long
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }
signed main()
{
  fast();
  int q, n;
  cin >> q >> n;
  while (q--)
  {
    int c, x;
    int var = 1;
    cin >> c >> x;
    switch (c)
    {
    case 1:
      cout << ((n << x) & (1LL)) << '\n';
      break;
    case 2:
      var = (var << x);
      n = (n | var);
      cout << n << '\n';
      break;
    case 3:
      var = (var << x);
      var = ~var;
      n = (n & var);
      cout << n << '\n';
      break;
    default:
      var = (var << x);
      n = (n ^ var);
      cout << n << '\n';
      break;
    }
  }
  return 0;
}
