#include <bits/stdc++.h>
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;

  multiset<vector<int>> st;
  for (int mask = 0; mask < (1 << n); mask++)
  {
    vector<int> cell;
    for (int i = 0; i < n; i++)
    {
      if ((mask & (1 << i)))
        cell.push_back(v[i]);
    }
    st.insert(cell);
  }
  for (auto p : st)
  {
    for (auto i : p)
      cout << i << ' ';
    cout << '\n';
  }
}