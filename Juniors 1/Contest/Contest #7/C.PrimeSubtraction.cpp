#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int test;
  cin >> test;
  while (test--)
  {
    int x, y;
    cin >> x >> y;
    cout << ((x - y > 1) ? "Yes\n" : "No\n");
  }
  return 0;
}