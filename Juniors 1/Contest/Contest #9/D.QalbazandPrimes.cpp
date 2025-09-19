#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }
const int N = 1e6;

signed main()
{
  fast();
  // Preprocessing
  vector<bool> prime(N + 1, true);
  vector<int> res(1);
  for (int p = 2; p * p <= N; p++)
  {
    if (prime[p])
        for (int i = p * p; i <= N; i += p)
          prime[i] = false;
  }

  for (int p = 2; p <= N; p++)
    if (prime[p])
      res.push_back(p);

  vector<int> prefix(res.size());
  for (int i = 1; i < res.size(); i++)
    prefix[i] = prefix[i - 1] + res[i];

  // Main Program
  int n, q;
  cin >> n >> q;
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    cout << prefix[r] - prefix[l - 1] << '\n';
  }
  return 0;
}
