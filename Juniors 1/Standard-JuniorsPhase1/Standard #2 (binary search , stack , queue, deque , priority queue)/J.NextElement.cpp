#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, q;
  cin >> n;
  vector<pair<int, int>> v(n + 1);
  stack<pair<int, int>> s;
  int ans[n + 1] = {0};
  for (int i = 1; i <= n; i++)
  {
    cin >> v[i].first;
    v[i].second = i;
    ans[i] = -1;
  }
  for (int i = n; i > 0; i--)
  {
    if (s.empty())
    {
      s.push(v[i]);
      continue;
    }
    while (!s.empty())
    {
      if (s.top().first > v[i].first)
      {
        ans[i] = s.top().second;
        s.push(v[i]);
        break;
      }
      else
        s.pop();
    }
  }
  cin >> q;
  while (q--)
  {
    int x;
    cin >> x;
    cout << ans[x] << '\n';
  }
  return 0;
}