#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n1, n2, result = 0;
  cin >> n1 >> n2;

  int x = n1 ^ n2;
  int ans = 1;
  while (x)
  {
    ans <<= 1LL;
    x >>= 1LL;
  }

  cout << ans - 1 << '\n';
}