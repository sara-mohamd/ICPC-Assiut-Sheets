#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n;
  cin >> n;
  vector<pair<int, int>> v(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> v[i].first >> v[i].second;

  int cnt = 0, shot = 0;
  for (int i = 1; i <= n; i++)
  {
    cnt += (v[i].first - v[i - 1].first);
    if (cnt < v[i].second)
      shot++, cnt += v[i].second;
    else
      cnt -= v[i].second;
  }
  cout << shot << '\n';
}