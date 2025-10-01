#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1e9 + 7;

int fpower(int base, int exp, int m)
{
  base %= m;
  int res = 1;
  while (exp > 0)
  {
    if (exp & 1)
      res = (res * base) % m;
    base = (base * base) % m;
    exp >>= 1;
  }
  return res;
}

signed main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    int power;
    if (b == 0 && c == 0) power = 1;
    else power = fpower(b, c, MOD - 1);

    if (a == 0 && power == 0)
      cout << '1';
    else
      cout << fpower(a, power, MOD);
    cout << '\n';
  }
}