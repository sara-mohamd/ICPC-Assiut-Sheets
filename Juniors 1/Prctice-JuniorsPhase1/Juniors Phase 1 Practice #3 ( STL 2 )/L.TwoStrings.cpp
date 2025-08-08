#include <bits/stdc++.h>
using namespace std;

void speed() { ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); }
int main()
{
  speed();
  int test;
  cin >> test;
  while (test--)
  {
    int n, idx = 1;
    cin >> n;
    vector<char> s(n), t(n);
    vector<int> nums(n);
    vector<pair<char, int>> v1, v2;
    for (int i = 0; i < n; i++)
      cin >> s[i];

    for (int i = 0; i < n; i++)
      cin >> t[i];

    for (int i = 0; i < n; i++)
      cin >> nums[i];

    for (int i = 0; i < n; i++)
      v1.push_back({s[i], nums[i]}), v2.push_back({t[i], nums[i]});

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++)
    {
      if (v1[i].first != v2[i].first || v1[i].second != v2[i].second)
        idx = 0;
    }

    if (idx)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}