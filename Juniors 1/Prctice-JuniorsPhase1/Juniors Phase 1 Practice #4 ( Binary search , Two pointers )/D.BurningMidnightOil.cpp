#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

int num, k;

bool chk(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n;
    n /= k;
  }
  return sum >= num;
}

signed main()
{
  speed();
  cin >> num >> k;
  int l = 1, r = num, ans = 0;
  int k = 300;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (chk(mid))
      ans = mid,
      r = mid - 1;
    else
      l = mid + 1;
  }

  cout << ans << '\n';
}
