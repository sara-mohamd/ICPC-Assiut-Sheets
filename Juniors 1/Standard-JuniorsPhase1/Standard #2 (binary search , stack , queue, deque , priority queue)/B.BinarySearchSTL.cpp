#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, q, x;
  cin >> n >> q;
  vector<int> v(n, 0);

  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  while (q--)
  {
    string s;
    cin >> s >> x;
    if (s == "binary_search")
    {
      if (find(v.begin(), v.end(), x) != v.end())
        cout << "found\n";
      else
        cout << "not found\n";
    }
    if (s == "lower_bound")
    {
      auto it = lower_bound(v.begin(), v.end(), x);
      if (it != v.end())
        cout << *it << '\n';
      else
        cout << "-1\n";
    }
    if (s == "upper_bound")
    {
      auto it = upper_bound(v.begin(), v.end(), x);
      if (it != v.end())
        cout << *it << '\n';
      else
        cout << "-1\n";
    }
  }
}