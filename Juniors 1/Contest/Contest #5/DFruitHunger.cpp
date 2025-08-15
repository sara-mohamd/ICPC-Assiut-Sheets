#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n, q;
  cin >> n >> q;

  vector<int> v(n + 1), pref(n + 1), suff(n + 2);
  set<int> st1, st2;
  for (int i = 1; i <= n; i++)
    cin >> v[i];

  int prev = 0;
  for (int i = 1; i <= n; i++)
  {
    if (st1.find(v[i]) != st1.end())
      continue;
    st1.insert(v[i]);
    pref[i] = 1;
  }
  for (int i = 1; i <= n; i++)
    pref[i] += pref[i - 1];
  for (int i = n; i > 0; i--)
  {
    if (st2.find(v[i]) != st2.end())
      continue;
    st2.insert(v[i]);
    suff[i] = 1;
  }

  for (int i = n - 1; i > 0; i--)
    suff[i] += suff[i + 1];

  while (q--)
  {
    int t, c;
    cin >> t >> c;
    if (t == 1)
      cout << pref[c] << '\n';
    else
      cout << suff[c] << '\n';
  }
}