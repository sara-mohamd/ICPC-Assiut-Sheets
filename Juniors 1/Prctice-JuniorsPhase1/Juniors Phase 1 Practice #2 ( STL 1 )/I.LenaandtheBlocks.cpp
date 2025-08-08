#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  map<int, int> mp;
  vector<int> v;
  int n, x, mn = INT_MAX;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (mp[x] == 0)
    {
      v.push_back(x);
      mp[x] = 1;
    }
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n - 1; i++)
  {
    if (abs(v[i + 1] - v[i]) < mn)
      mn = abs(v[i + 1] - v[i]);
  }

  cout << mn << '\n';
}