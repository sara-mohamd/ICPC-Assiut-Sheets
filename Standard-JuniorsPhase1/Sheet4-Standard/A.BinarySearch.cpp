#include <bits/stdc++.h>
#define int long long
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

int n, q;
pair<int, int> x;
bool chk1(vector<pair<int, int>> &v, int mid)
{
  if (x.first == v[mid].first)
    return x.second > v[mid].second;
  return (x.first > v[mid].first);
}
bool chk2(vector<pair<int, int>> &v, int mid)
{
  if (x.first == v[mid].first)
    return x.second < v[mid].second;
  return (x.first < v[mid].first);
}

signed main()
{
  speed();
  cin >> n >> q;
  vector<pair<int, int>> v(n);
  for (auto &it : v)
    cin >> it.first >> it.second;

  while (q--)
  {
    string s;
    int ans = 0;
    cin >> s >> x.first >> x.second;
    if (s == "lower")
    {
      int l = 0, r = n - 1, ans = -1;
      while (l <= r)
      {
        int mid = (l + r) / 2;
        if (v[mid] < x)
        {
          ans = mid;
          l = mid + 1;
        }
        else
        {
          r = mid - 1;
        }
      }
      cout << (ans == -1 ? -1 : ans) << '\n';
    }

    else if (s == "upper")
    {
      int l = 0, r = n - 1, ans = -1;
      while (l <= r)
      {
        int mid = (l + r) / 2;
        if (v[mid] > x)
        {
          ans = mid;
          r = mid - 1;
        }
        else
        {
          l = mid + 1;
        }
      }
      cout << (ans == -1 ? -1 : ans) << '\n';
    }
    else if (s == "find")
    {
      bool found = binary_search(v.begin(), v.end(), x);
      cout << (found ? "found" : "not found") << '\n';
    }
  }
}