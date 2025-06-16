#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, m, x, ans = 0;
  cin >> n >> m;
  map<int, int> mp;
  while (n--)
    cin >> x, mp[x]++;
  while (m--)
  {
    cin >> x, mp[x]++;
    if (mp[x] == 2)
      ans++;
  }
  cout << ans << '\n';
}