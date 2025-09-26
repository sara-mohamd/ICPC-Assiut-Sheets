#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  // Pre-processing
  const int N = 1e6 + 10;
  vector<int> num_divisors(N);
    for (int i = 1; i < N; ++i)
      for (int j = i; j < N; j += i)
        num_divisors[j]++;

    int test;
    cin >> test;
    while (test--)
    {
      int x, y;
      cin >> x >> y;
      int common_gcd = __gcd(x, y);
      cout << num_divisors[common_gcd] << '\n';
    }

  return 0;
}
