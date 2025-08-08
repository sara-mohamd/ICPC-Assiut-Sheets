#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b)
{
  return a.second < b.second;
}
int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, mx = 0;
  string s, ans = "";
  cin >> n >> s;
  map<string, int> mp;
  for (int i = 0; i < s.length() - 1; i++)
  {
    mp[s.substr(i, 2)]++;
  }
  for (auto it : mp)
  {
    if (it.second > mx)
    {
      mx = it.second;
      ans = it.first;
    }
  }

  cout << ans << '\n';
}