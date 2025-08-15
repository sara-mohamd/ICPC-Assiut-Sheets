#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n, m, res = 1e18;
  cin >> n >> m;
  vector<int> a(n);
  set<int> b;
  map<int, int> mp;
  for (auto &it : a)
    cin >> it;
  for (int i = 0, x; i < m; ++i)
  {
    cin >> x;
    b.insert(x);
  }

  int l = 0, r = 0, ctr = 0;
  set<int> st;
  while (r < n)
  {
    while (st.size() < m && r < n)
    {
      if (b.find(a[r]) != b.end())
      {
        st.insert(a[r]);
        mp[a[r]]++;
      }
      else
        ctr++;
      r++;
    }
    while (st.size() == m)
    {
      res = min(res, ctr);
      if (b.find(a[l]) != b.end())
        mp[a[l]]--;
      else
        ctr--;
      if (mp[a[l]] == 0)
        st.erase(a[l]);
      l++;
    }
  }
  cout << res << '\n';
}