#include <bits/stdc++.h>
#define int long long
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
    cin >> c;
    if (c != 4)
      cin >> x;
    switch (c)
    {
    case 1:
      n |= x;
      break;
    case 2:
      n &= x;
      break;
    case 3:
      n ^= x;
      break;
    default:
      n = ~n;
    }
    cout << n << '\n';
  }
  return 0;
}
