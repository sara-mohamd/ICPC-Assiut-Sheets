#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int n, k;
  cin >> n >> k;
    if(k > n)
      cout << "1 " << n << '\n';
    else if(n % k == 0)
      cout << n / k << ' ' << k << '\n';
    else 
      cout << (n / k) + 1 << ' ' << n - ((n / k) * k) << '\n';
    return 0;
}
