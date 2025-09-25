#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int n, k, ctr = 0;
  cin >> n >> k;
  vector<int> v;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      v.push_back(i);
      if (i * i != n)
        v.push_back(n / i);
    }
  }
  sort(all(v));
  int sz = v.size();
  cout << ((k > sz) ? -1 : v[k - 1]) << '\n';
}
