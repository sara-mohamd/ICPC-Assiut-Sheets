#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int t;
  cin >> t;
  while (t--)
  {
    int y, x;
    cin >> y >> x;
    cout << (y * 100) / (100 + x) << "\n";
  }
  return 0;
}
