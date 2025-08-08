#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, q, x;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  sort(v.begin(), v.end());
  cin >> q;
  while (q--)
  {
    cin >> x;
    auto it = upper_bound(v.begin(), v.end(), x);
    if (it == v.end())
      cout << n << '\n';
    else
      cout << *it - 1 << '\n';
  }
}