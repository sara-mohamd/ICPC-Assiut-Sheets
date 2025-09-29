#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }
int lcm(int x, int y)  { return (x * y) / __gcd(x, y); }
int sum(int x) {  return (x * (x + 1)) / 2; }

signed main()
{
  fast();
  int test;
  cin >> test;
  while (test--)
  {
    int n, x, y;
    cin >> n >> x >> y;

    int k1 = n / x;
    int k2 = n / y;
    int comman = n / lcm(x, y);

    k1 -= comman,
    k2 -= comman;

    cout << (sum(n) - sum(n - k1)) - sum(k2) << '\n';
  }

}
