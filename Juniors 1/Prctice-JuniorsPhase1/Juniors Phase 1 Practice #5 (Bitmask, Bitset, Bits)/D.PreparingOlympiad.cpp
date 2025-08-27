#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int n, low, high, x, ways = 0;
  cin >> n >> low >> high >> x;

  vector<int> v(n);
  for (auto &it : v)
    cin >> it;

  for (int mask = 0; mask < (1 << n); mask++)
  {
    int sum = 0;
    vector<int> items;
    for (int i = 0; i < n; i++)
    {
      if (mask & (1 << i))
        sum += v[i], items.push_back(v[i]);
    }
    sort(items.begin(), items.end());
    if (sum >= low && sum <= high && !items.empty())
      if ((items[items.size() - 1] - items[0]) >= x)
        ways++;
  }

  cout << ways << '\n';
}