#include <bits/stdc++.h>
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int test;
  cin >> test;
  while (test--)
  {
    int l, r;
    cin >> l >> r;
    (l * 2 <= r) ? cout << l << " " << l * 2 : cout << "-1 -1";
    cout << '\n';
  }
  return 0;
}
