#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long current = 0, sum = 0;
  int n, x, ans = 0, mx = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    if (x > mx)
      mx = x;
    if (i >= x && i >= mx)
      ans++;
  }
  cout << ans << endl;
}