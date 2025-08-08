#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, l, r;
  cin >> n;
  vector<pair<int, int>> v, ans;
  for (int i = 0; i < n; i++)
  {
    cin >> l >> r;
    if (l > r)
      swap(l, r);
    v.push_back({l, r});
  }
  sort(v.begin(), v.end());
  for (int i = 1; i < n; i++)
  {

    if (v[i].first >= v[i - 1].first && v[i].second <= v[i - 1].second)
    {
      v[i] = v[i - 1];
      v[i - 1] = {0, 0};
    }
    else if (v[i - 1].second <= v[i].second && v[i].first <= v[i - 1].second)
    {
      v[i] = {v[i - 1].first, v[i].second};
      v[i - 1] = {0, 0};
    }
  }
  for (int i = 0; i < v.size(); i++)
    if (v[i].first != 0)
      ans.push_back(v[i]);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i].first << ' ' << ans[i].second << endl;
  }
}