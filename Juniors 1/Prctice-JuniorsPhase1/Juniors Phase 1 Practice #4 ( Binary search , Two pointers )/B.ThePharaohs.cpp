#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

int num;

bool chk(int n)
{
  return n * (n + 1) >= 2 * num;
}

signed main()
{
  speed();
  int test;
  cin >> test;
  while (test--)
  {
    cin >> num;
    int l = 1, r = 2e9, ans = 0;
    while (l <= r)
    {
      int mid = (l + r) / 2;
      if (chk(mid))
        ans = mid, r = mid - 1;
      else
        l = mid + 1;
    }
    cout << ans << '\n';
  }
}
