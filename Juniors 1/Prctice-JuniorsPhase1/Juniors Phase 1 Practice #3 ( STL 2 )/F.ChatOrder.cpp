#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> v(n), ans;
  map<string, int> mp;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  for (int i = n - 1; i >= 0; i--)
  {
    if (mp[v[i]] != 0)
      continue;
    mp[v[i]]++;
    ans.push_back(v[i]);
  }
  for (auto i : ans)
    cout << i << '\n';
}