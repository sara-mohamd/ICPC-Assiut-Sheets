#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  int n, target;
  speed();
  cin >> n >> target;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;
  int ptr = 0, sum = 0, ctr = 0, maxTotal = 0;
  for (int i = 0; i < n; i++)
  {
    sum += v[i], ctr++;
    if (sum <= target)
    {
      maxTotal = max(maxTotal, ctr);
    }
    else
    {
      sum -= v[ptr++], ctr--;
    }
  }
  cout << maxTotal << endl;
}