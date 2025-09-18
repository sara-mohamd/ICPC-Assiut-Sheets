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
    int count = 0, n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> v[i][j];

    for (int i = 1; i < n; i++)
    {
      multiset<int> st;
      for (int j = 0; j < m; j++)
      {
        st.insert(v[i - 1][j]);
      }

      for (int j = 0; j < m; j++)
      {
        if(st.find(v[i][j]) != st.end())
          count++, st.erase(st.find(v[i][j]));
      }
    }

    cout << count << '\n';
  }
}
