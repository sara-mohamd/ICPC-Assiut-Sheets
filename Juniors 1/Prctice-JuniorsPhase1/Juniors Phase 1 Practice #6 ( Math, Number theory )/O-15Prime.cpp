#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  int test;
  cin >> test;

  while (test--)
  {
    int n, ans = 1e18;
    cin >> n;
    vector<int> v, freq(51);
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if(!freq[x])
        v.push_back(x), freq[x] = 1;
    }

    for (int mask = 0; mask < (1 << 15); mask++)
    {
      int mul = 1, chk = 1;
      for (int i = 0; i < 15; i++)
        if((mask >> i) & 1)
          mul *= primes[i];
      for(auto i : v)
          if(__gcd(i, mul) == 1)
            chk = 0;
      if(chk)
        ans = min(ans, mul);
    }

    cout << ans << '\n';
  }
  return 0;
}
