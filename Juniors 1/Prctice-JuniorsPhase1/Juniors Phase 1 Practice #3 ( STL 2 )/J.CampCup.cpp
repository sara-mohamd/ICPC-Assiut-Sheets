#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool compare(pair<string, ll> &p1, pair<string, ll> &p2)
{
  if (p1.second == p2.second)
    return p1.first < p2.first;
  return p1.second > p2.second;
}
int main()
{
  int n;
  string s;
  cin >> n;
  map<string, int> mp;
  while (n--)
  {
    int m;
    cin >> m;
    int init = 1000;
    while (m--)
    {
      cin >> s;
      mp[s] += init;
      init = (init * 9 + 5) / 10;
    }
  }
  vector<pair<string, ll>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), compare);
  cout << v[0].first << '\n';
  for (auto p : v)
  {
    cout << p.first << ' ' << p.second << '\n';
  }
}