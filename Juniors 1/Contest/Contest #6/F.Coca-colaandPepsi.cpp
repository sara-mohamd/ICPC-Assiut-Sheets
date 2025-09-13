#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int x, y;
  cin >> x >> y;
  int p = y - 1;
  if (p <= 0 && x != 0)
  {
    cout << "NO\n";
    return 0;
  }

  int needed_coke = x - p;

  if (needed_coke >= 0 && needed_coke % 2 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}
